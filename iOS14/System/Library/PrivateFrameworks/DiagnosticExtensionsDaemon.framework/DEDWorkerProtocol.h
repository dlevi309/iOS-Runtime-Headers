/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/


@protocol DEDWorkerProtocol <NSObject>
@required
-(void)cancelSession:(id)arg1;
-(long long)transportType;
-(void)pingSession:(id)arg1;
-(void)listAvailableExtensionsForSession:(id)arg1;
-(void)getSessionStateWithSession:(id)arg1;
-(void)getSessionStatusWithSession:(id)arg1;
-(void)syncSessionStatusWithSession:(id)arg1;
-(void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
-(void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
-(void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
-(void)commitSession:(id)arg1;
-(void)adoptFiles:(id)arg1 forSession:(id)arg2;
-(void)scheduleNotificationForSession:(id)arg1;
-(void)cancelNotificationForSession:(id)arg1;

@end

