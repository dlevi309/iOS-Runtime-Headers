/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPLocationReadOnlyServerProtocol.h>

@protocol PPLocationClientProtocol;
@class PPXPCServerPipelinedBatchQueryManager, NSString, _PASBundleIdResolver;

@interface PPLocationReadOnlyServerRequestHandler : NSObject <PPLocationReadOnlyServerProtocol> {

	id<PPLocationClientProtocol> _clientProxy;
	PPXPCServerPipelinedBatchQueryManager* _queryManager;
	NSString* _clientProcessName;
	_PASBundleIdResolver* _bundleIdResolver;

}

@property (nonatomic,copy) NSString * clientProcessName;                           //@synthesize clientProcessName=_clientProcessName - In the implementation block
@property (nonatomic,retain) _PASBundleIdResolver * bundleIdResolver;              //@synthesize bundleIdResolver=_bundleIdResolver - In the implementation block
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(_PASBundleIdResolver *)bundleIdResolver;
-(NSString *)clientProcessName;
-(void)unblockPendingQueries;
-(void)setClientProcessName:(NSString *)arg1 ;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(void)rankedLocationsWithQuery:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)locationRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)setBundleIdResolver:(_PASBundleIdResolver *)arg1 ;
@end

