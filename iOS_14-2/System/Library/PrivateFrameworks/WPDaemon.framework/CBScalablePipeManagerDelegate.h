/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@protocol CBScalablePipeManagerDelegate <NSObject>
@optional
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;

@required
-(void)scalablePipeManagerDidUpdateState:(id)arg1;

@end

