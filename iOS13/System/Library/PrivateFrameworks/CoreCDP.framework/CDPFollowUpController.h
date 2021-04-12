/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/


@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {

	CDPDaemonConnection* _daemonConn;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)postFollowUpWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearFollowUpWithContext:(id)arg1 error:(id*)arg2 ;
@end

