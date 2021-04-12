/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDDataStreamProtocol <NSObject>
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@required
-(BOOL)isActive;
-(void)dataStream:(id)arg1 didFailWithError:(id)arg2;
-(void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4;
-(void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4;
-(void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4;
-(void)dataStreamDidClose:(id)arg1;
-(void)dataStreamDidOpen:(id)arg1;

@end

