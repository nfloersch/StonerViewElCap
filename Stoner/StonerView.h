//
//  StonerView.h
//  StonerView
//
//  Created by pecos on Sat Jun 09 2001.
//  Copyright (c) 2001 __CompanyName__. All rights reserved.
//

#import <AppKit/AppKit.h>
#import <ScreenSaver/ScreenSaver.h>
#import <OpenGL/gl.h>
#import <OpenGL/glu.h>
#import "move.h"
#import "view.h"
#import "osc.h"


@interface StonerView : ScreenSaverView {

    BOOL mainMonitorOnly;
    BOOL thisScreenIsOn;

    NSOpenGLView *_view;
    BOOL _initedGL;
    elem_t elist[NUM_ELS];
    float alpha;
    
    BOOL wireframe;
    BOOL edges;
    int shape;
    float speed;
    NSTimeInterval default_speed;
    
    IBOutlet id configureSheet;
    IBOutlet id IBversionNumberField;
    
    IBOutlet id IBview;
    IBOutlet id IBwireframe;
    IBOutlet id IBedges;

    IBOutlet id IBshapeTxt;
    IBOutlet id IBshape;

    IBOutlet id IBspeedTxt;
    IBOutlet id IBspeed;
    IBOutlet id IBslow;
    IBOutlet id IBfast;

    IBOutlet id IBalphaTxt;
    IBOutlet id IBalpha;

    IBOutlet id IBmainMonitorOnly;
    IBOutlet id IBCheckVersion;
    IBOutlet id IBCancel;
    IBOutlet id IBSave;
    IBOutlet id IBUpdatesInfo;
}

- (IBAction) closeSheet_save:(id) sender;
- (IBAction) closeSheet_cancel:(id) sender;
- (IBAction) updateConfigureSheet:(id) sender;
- (IBAction) checkUpdates:(id)sender;

@end
