/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@protocol _LSDOpenProtocol
@required
-(void)openApplicationWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)openURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)openUserActivityWithUniqueIdentifier:(id)arg1 activityData:(id)arg2 activityType:(id)arg3 bundleIdentifier:(id)arg4 options:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)performOpenOperationWithURL:(id)arg1 applicationIdentifier:(id)arg2 documentIdentifier:(id)arg3 isContentManaged:(BOOL)arg4 sourceAuditToken:(const SCD_Struct_LS11*)arg5 userInfo:(id)arg6 options:(id)arg7 delegate:(id)arg8 completionHandler:(/*^block*/id)arg9;
-(void)failedToOpenApplication:(id)arg1 withURL:(id)arg2;
-(void)canOpenURL:(id)arg1 publicSchemes:(BOOL)arg2 privateSchemes:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)resolveAppLinksForURL:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)openAppLink:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getURLOverrideForURL:(id)arg1 newsOnly:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getiCloudHostNamesWithCompletionHandler:(/*^block*/id)arg1;

@end

