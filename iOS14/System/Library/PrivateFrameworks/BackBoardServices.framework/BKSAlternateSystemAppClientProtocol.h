/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/


@protocol BKSAlternateSystemAppClientProtocol <NSObject>
@required
-(void)didBlockSystemAppForAlternateSystemApp;
-(void)alternateSystemAppWithBundleIDDidOpen:(id)arg1;
-(void)didUnblockSystemAppForAlternateSystemApp;
-(void)alternateSystemAppWithBundleID:(id)arg1 failedToOpenWithResult:(id)arg2;
-(void)alternateSystemAppWithBundleID:(id)arg1 didExitWithContext:(id)arg2;
-(void)alternateSystemAppWithBundleIDDidTerminate:(id)arg1;

@end

