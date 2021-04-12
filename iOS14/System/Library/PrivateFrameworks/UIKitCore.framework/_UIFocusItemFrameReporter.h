/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_source;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSObject, UIFocusSystem;

@interface _UIFocusItemFrameReporter : NSObject {

	NSObject*<OS_dispatch_source> _focusedFrameUpdateTimer;
	BOOL _hasStagedFocusFrameUpdate;
	BOOL _enabled;
	UIFocusSystem* _focusSystem;

}

@property (assign,nonatomic,__weak) UIFocusSystem * focusSystem;              //@synthesize focusSystem=_focusSystem - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                   //@synthesize enabled=_enabled - In the implementation block
-(UIFocusSystem *)focusSystem;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setFocusSystem:(UIFocusSystem *)arg1 ;
-(CGRect)_clampRect:(CGRect)arg1 insideRect:(CGRect)arg2 ;
-(CGRect)_globalFrameForFocusedItemInSystem:(id)arg1 ;
-(void)_reportFocusFrameUpdateForGlobalFrame:(CGRect)arg1 ;
-(BOOL)_rect:(CGRect)arg1 differsFromRect:(CGRect)arg2 lowerThreshold:(double)arg3 upperThreshold:(double)arg4 ;
-(void)_cancelRepeatingFrameUpdate;
-(void)_reportFocusFrameForCurrentlyFocusedItem;
-(void)_scheduleRepeatingFrameUpdate;
-(BOOL)isEnabled;
-(id)primaryWindow;
@end

