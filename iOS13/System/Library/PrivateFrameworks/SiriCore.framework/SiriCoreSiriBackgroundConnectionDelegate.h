/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@protocol SiriCoreSiriBackgroundConnectionDelegate <NSObject>
@optional
-(void)siriBackgroundConnection:(id)arg1 willStartConnectionWithHTTPHeader:(id)arg2;

@required
-(void)siriBackgroundConnection:(id)arg1 willStartWithConnectionType:(id)arg2;
-(void)siriBackgroundConnectionDidClose:(id)arg1;
-(void)siriBackgroundConnection:(id)arg1 didEncounterError:(id)arg2 analysisInfo:(id)arg3;
-(void)siriBackgroundConnection:(id)arg1 didOpenWithConnectionType:(id)arg2 routeId:(id)arg3 delay:(double)arg4;
-(void)siriBackgroundConnection:(id)arg1 didReceiveAceObject:(id)arg2;
-(void)siriBackgroundConnection:(id)arg1 didEncounterIntermediateError:(id)arg2;

@end

