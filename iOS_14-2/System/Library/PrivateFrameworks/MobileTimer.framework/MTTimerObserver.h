/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTTimerObserver <NSObject>
@required
-(void)nextTimerDidChange:(id)arg1;
-(void)source:(id)arg1 didAddTimers:(id)arg2;
-(void)source:(id)arg1 didUpdateTimers:(id)arg2;
-(void)source:(id)arg1 didFireTimer:(id)arg2;
-(void)source:(id)arg1 didRemoveTimers:(id)arg2;
-(void)source:(id)arg1 didDismissTimer:(id)arg2;

@end

