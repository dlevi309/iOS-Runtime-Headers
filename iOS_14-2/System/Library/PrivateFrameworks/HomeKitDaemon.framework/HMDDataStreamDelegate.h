/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDDataStreamDelegate <NSObject>
@optional
-(void)dataStreamDidReceiveRawFrame:(id)arg1;

@required
-(void)dataStreamDidUpdateActiveStatus:(id)arg1;
-(void)dataStream:(id)arg1 didFailWithError:(id)arg2;
-(void)dataStreamDidClose:(id)arg1;
-(void)dataStreamDidOpen:(id)arg1;

@end

