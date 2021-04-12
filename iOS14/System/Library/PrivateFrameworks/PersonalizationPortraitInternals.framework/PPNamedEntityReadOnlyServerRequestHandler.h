/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPNamedEntityReadOnlyServerProtocol.h>

@protocol PPNamedEntityClientProtocol;
@class PPXPCServerPipelinedBatchQueryManager, NSString, _PASBundleIdResolver;

@interface PPNamedEntityReadOnlyServerRequestHandler : NSObject <PPNamedEntityReadOnlyServerProtocol> {

	id<PPNamedEntityClientProtocol> _clientProxy;
	PPXPCServerPipelinedBatchQueryManager* _queryManager;
	NSString* _clientProcessName;
	_PASBundleIdResolver* _bundleIdResolver;

}

@property (nonatomic,copy) NSString * clientProcessName;                           //@synthesize clientProcessName=_clientProcessName - In the implementation block
@property (nonatomic,retain) _PASBundleIdResolver * bundleIdResolver;              //@synthesize bundleIdResolver=_bundleIdResolver - In the implementation block
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(_PASBundleIdResolver *)bundleIdResolver;
-(void)rankedNamedEntitiesWithQuery:(id)arg1 queryId:(unsigned long long)arg2 ;
-(NSString *)clientProcessName;
-(void)mapItemForPlaceName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unblockPendingQueries;
-(void)setClientProcessName:(NSString *)arg1 ;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(void)setBundleIdResolver:(_PASBundleIdResolver *)arg1 ;
-(void)namedEntityRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2 ;
@end

