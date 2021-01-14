/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol CSRemoteContentSessionHostDelegate <NSObject>
@required
-(BOOL)remoteContentSession:(id)arg1 presentViewController:(id)arg2;
-(void)remoteContentSession:(id)arg1 didInvalidateWithError:(id)arg2;
-(BOOL)remoteContentSession:(id)arg1 dismissWithReason:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)remoteContentDidUpdateStyle;
-(BOOL)shouldActivateRemoteContentSession:(id)arg1;

@end

