/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CALayer;

@interface CAStateController : NSObject {

	CAStateControllerData* _data;

}

@property (readonly) CALayer * layer; 
@property (__weak) NSObject*<CAStateControllerDelegate> delegate; 
-(CALayer *)layer;
-(void)setInitialStatesOfLayer:(id)arg1 transitionSpeed:(float)arg2 ;
-(void)cancelTimers;
-(NSObject*<CAStateControllerDelegate>)delegate;
-(void)setState:(id)arg1 ofLayer:(id)arg2 transitionSpeed:(float)arg3 ;
-(id)initWithLayer:(id)arg1 ;
-(id)stateOfLayer:(id)arg1 ;
-(void)setState:(id)arg1 ofLayer:(id)arg2 ;
-(void)setDelegate:(NSObject*<CAStateControllerDelegate>)arg1 ;
-(void)restoreStateChanges:(id)arg1 ;
-(void)setInitialStatesOfLayer:(id)arg1 ;
-(void)_nextStateTimer:(id)arg1 ;
-(id)removeAllStateChanges;
-(void)_addAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 undo:(id)arg4 ;
-(void)_removeTransition:(id)arg1 layer:(id)arg2 ;
-(void)_applyTransitionElement:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4 ;
-(void)_applyTransition:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4 ;
-(void)dealloc;
@end

