/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol TRIXPCNamespaceManagementServiceProtocol
@required
-(void)startDownloadNamespaceWithName:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 defaultsFileURL:(id)arg3 applicationGroup:(id)arg4 cloudKitContainerId:(int)arg5 completion:(/*^block*/id)arg6;
-(void)deregisterNamespaceWithNamespaceName:(id)arg1 completion:(/*^block*/id)arg2;
-(void)startDownloadLevelsForFactors:(id)arg1 withNamespace:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;

@end

