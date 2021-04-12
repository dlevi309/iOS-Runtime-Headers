/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CALayer;

@interface CAStateController : NSObject {

	CAStateControllerData* _data;

}

@property (readonly) CALayer * layer; 
@property (__weak) NSObject*<CAStateControllerDelegate> delegate; 
-(void)dealloc;
-(NSObject*<CAStateControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<CAStateControllerDelegate>)arg1 ;
-(CALayer *)layer;
-(id)initWithLayer:(id)arg1 ;
-(void)_removeTransition:(id)arg1 layer:(id)arg2 ;
-(id)stateOfLayer:(id)arg1 ;
-(void)setState:(id)arg1 ofLayer:(id)arg2 transitionSpeed:(float)arg3 ;
-(void)setState:(id)arg1 ofLayer:(id)arg2 ;
-(void)setInitialStatesOfLayer:(id)arg1 transitionSpeed:(float)arg2 ;
-(void)setInitialStatesOfLayer:(id)arg1 ;
-(id)removeAllStateChanges;
-(void)restoreStateChanges:(id)arg1 ;
-(void)cancelTimers;
-(void)_nextStateTimer:(id)arg1 ;
-(void)_addAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 undo:(id)arg4 ;
-(void)_applyTransition:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4 ;
-(void)_applyTransitionElement:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4 ;
@end

