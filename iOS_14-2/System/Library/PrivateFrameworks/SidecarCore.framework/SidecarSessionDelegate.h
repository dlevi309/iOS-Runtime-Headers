/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/


@protocol SidecarSessionDelegate
@required
-(void)sidecarSessionStarted:(id)arg1;
-(void)sidecarSession:(id)arg1 invalidatedWithError:(id)arg2;
-(void)sidecarSession:(id)arg1 receivedMessage:(id)arg2;
-(void)sidecarSession:(id)arg1 closedWithError:(id)arg2;
-(void)sidecarServiceTerminate;

@end

