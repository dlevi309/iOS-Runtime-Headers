/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/


@protocol TRINamespaceManagementProtocol
@required
-(BOOL)startNamespaceDownloadWithName:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(BOOL)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 defaultsFileURL:(id)arg3 applicationGroup:(id)arg4 cloudKitContainerId:(int)arg5 error:(id*)arg6;
-(id)startDownloadLevelsForFactors:(id)arg1 withNamespace:(id)arg2 options:(id)arg3 error:(id*)arg4;
-(BOOL)deregisterNamespaceWithNamespaceName:(id)arg1 error:(id*)arg2;

@end

