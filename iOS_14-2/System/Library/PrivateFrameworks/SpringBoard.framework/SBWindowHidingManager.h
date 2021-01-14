/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(BOOL)_isHidingWindows;
-(void)_recomputeHideRangeAndAdjustWindows;
-(id)init;
-(void)_adjustWindowsForActiveHideRange;
-(id)dumpHidingState;
-(void)_takeNoteOfWindow:(id)arg1 onScreen:(id)arg2 ;
-(id)dumpKnownWindows;
-(void)stopHidingWindowsForContext:(id)arg1 ;
-(void)_captureWindow:(id)arg1 ;
-(void)startHidingWindowsExclusivelyFromLevel:(double)arg1 toLevel:(double)arg2 forContext:(id)arg3 reason:(id)arg4 ;
-(void)_releaseWindow:(id)arg1 ;
-(BOOL)_isHidingWindowLevel:(double)arg1 ;
-(void)setAlpha:(double)arg1 forWindow:(id)arg2 ;
@end

