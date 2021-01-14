/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/


@interface BMPublicStreamsPruner : NSObject
+(void)pruneWithInstalledApplications:(id)arg1 activity:(id)arg2 ;
+(BOOL)shouldDeleteEvent:(id)arg1 withUninstalledApplication:(id)arg2 ;
+(void)prunePublicStreamsWithPredicate:(/*^block*/id)arg1 ;
+(BOOL)shouldDeleteEvent:(id)arg1 withInstalledApplications:(id)arg2 ;
+(void)prunePublicStream:(id)arg1 configuration:(id)arg2 deletionPredicate:(/*^block*/id)arg3 ;
+(void)pruneStreamDataStore:(id)arg1 deletionPredicate:(/*^block*/id)arg2 ;
+(void)pruneWithInstalledApplications:(id)arg1 ;
+(void)pruneWithUninstalledBundleIdentifier:(id)arg1 ;
@end

