/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/STKAlertSession.h>

@class STKSessionBehavior;

@interface STKSIMToolkitAlertSession : STKAlertSession {

	long long _event;
	STKSessionBehavior* _behavior;

}

@property (nonatomic,readonly) long long event;                            //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) STKSessionBehavior * behavior;              //@synthesize behavior=_behavior - In the implementation block
-(void)sendResponse:(long long)arg1 withBOOLResult:(BOOL)arg2 ;
-(STKSessionBehavior *)behavior;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(long long)event;
-(void)sendSuccessWithSelectedIndex:(unsigned long long)arg1 ;
-(id)initWithLogger:(id)arg1 responseProvider:(id)arg2 event:(long long)arg3 options:(id)arg4 behavior:(id)arg5 sound:(id)arg6 ;
@end

