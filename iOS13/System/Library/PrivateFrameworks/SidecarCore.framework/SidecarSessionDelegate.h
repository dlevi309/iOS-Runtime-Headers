/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

