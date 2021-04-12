/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTTimerObserver <NSObject>
@required
-(void)source:(id)arg1 didAddTimers:(id)arg2;
-(void)source:(id)arg1 didUpdateTimers:(id)arg2;
-(void)source:(id)arg1 didRemoveTimers:(id)arg2;
-(void)source:(id)arg1 didDismissTimer:(id)arg2;
-(void)source:(id)arg1 didFireTimer:(id)arg2;
-(void)nextTimerDidChange:(id)arg1;

@end

