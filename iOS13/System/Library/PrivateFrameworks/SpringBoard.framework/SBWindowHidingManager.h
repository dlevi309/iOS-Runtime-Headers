/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>

@protocol UIScenePresenter;
@class NSMapTable, SBSceneHandle, NSString;

@interface SBWindowHidingManager : NSObject <SBSceneHandleObserver> {

	NSMapTable* _windowStateMap;
	NSMapTable* _hidingContextMap;
	SBSceneHandle* _keyboardSceneHandle;
	SBWindowLevelRange_struct _hideRange;
	id<UIScenePresenter> _keyboardPresenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)start;
-(id)init;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(void)setAlpha:(double)arg1 forWindow:(id)arg2 ;
-(void)startHidingWindowsExclusivelyFromLevel:(double)arg1 toLevel:(double)arg2 forContext:(id)arg3 reason:(id)arg4 ;
-(void)stopHidingWindowsForContext:(id)arg1 ;
-(void)_takeNoteOfWindow:(id)arg1 onScreen:(id)arg2 ;
-(BOOL)_isHidingWindowLevel:(double)arg1 ;
-(void)_recomputeHideRangeAndAdjustWindows;
-(BOOL)_isHidingWindows;
-(void)_adjustWindowsForActiveHideRange;
-(void)_captureWindow:(id)arg1 ;
-(void)_releaseWindow:(id)arg1 ;
-(id)dumpHidingState;
-(id)dumpKnownWindows;
@end

