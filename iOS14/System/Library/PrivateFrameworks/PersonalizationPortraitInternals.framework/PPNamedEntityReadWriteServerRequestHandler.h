/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPNamedEntityReadWriteServerProtocol.h>

@interface PPNamedEntityReadWriteServerRequestHandler : NSObject <PPNamedEntityReadWriteServerProtocol>
-(void)clearWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeMapItemsBeforeCutoffDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeMapItemForPlaceName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)donateMapItem:(id)arg1 forPlaceName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)flushDonationsWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 completion:(/*^block*/id)arg6 ;
@end

