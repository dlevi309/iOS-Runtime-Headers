/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class SFDeviceAssetQuery, SFDeviceAssetRequestConfiguration, NSObject, NSMutableArray, NSBundle, NSError;

@interface SFDeviceAssetTask : NSObject {

	BOOL _useProcessLocalCache;
	BOOL _queryResultCalled;
	BOOL _downloadCompletionCalled;
	SFDeviceAssetQuery* _deviceAssetQuery;
	SFDeviceAssetRequestConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _deviceQueryParameters;
	NSObject*<OS_dispatch_source> _timer;
	NSBundle* _matchBundle;
	NSBundle* _imperfectMatchBundle;
	NSBundle* _fallbackBundle;
	NSBundle* _cachedBundle;
	NSError* _error;

}

@property (nonatomic,readonly) SFDeviceAssetQuery * deviceAssetQuery;                          //@synthesize deviceAssetQuery=_deviceAssetQuery - In the implementation block
@property (nonatomic,readonly) SFDeviceAssetRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;                     //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) BOOL useProcessLocalCache;                                      //@synthesize useProcessLocalCache=_useProcessLocalCache - In the implementation block
@property (nonatomic,readonly) NSMutableArray * deviceQueryParameters;                         //@synthesize deviceQueryParameters=_deviceQueryParameters - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> timer;                            //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) NSBundle * matchBundle;                                         //@synthesize matchBundle=_matchBundle - In the implementation block
@property (nonatomic,readonly) NSBundle * imperfectMatchBundle;                                //@synthesize imperfectMatchBundle=_imperfectMatchBundle - In the implementation block
@property (nonatomic,readonly) NSBundle * fallbackBundle;                                      //@synthesize fallbackBundle=_fallbackBundle - In the implementation block
@property (nonatomic,readonly) NSBundle * cachedBundle;                                        //@synthesize cachedBundle=_cachedBundle - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL queryResultCalled;                                           //@synthesize queryResultCalled=_queryResultCalled - In the implementation block
@property (assign,nonatomic) BOOL downloadCompletionCalled;                                    //@synthesize downloadCompletionCalled=_downloadCompletionCalled - In the implementation block
-(NSError *)error;
-(NSObject*<OS_dispatch_source>)timer;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(SFDeviceAssetRequestConfiguration *)configuration;
-(SFDeviceAssetQuery *)deviceAssetQuery;
-(void)cancelTimeout;
-(BOOL)completeIfPossible;
-(void)completeWithBundle:(id)arg1 isFallback:(BOOL)arg2 isCached:(BOOL)arg3 ;
-(void)createQueryParameters;
-(id)bundleURLFromAssetURL:(id)arg1 ;
-(BOOL)updateTaskWithAssetBundleURL:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isImperfectMatch:(BOOL)arg4 isCached:(BOOL)arg5 ;
-(id)bundleAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateTaskWithBundle:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isImperfectMatch:(BOOL)arg4 isCached:(BOOL)arg5 ;
-(NSBundle *)matchBundle;
-(NSBundle *)fallbackBundle;
-(NSBundle *)imperfectMatchBundle;
-(NSBundle *)cachedBundle;
-(BOOL)queryResultCalled;
-(void)setQueryResultCalled:(BOOL)arg1 ;
-(BOOL)downloadCompletionCalled;
-(id)initWithDeviceQuery:(id)arg1 requestConfiguration:(id)arg2 dispatchQueue:(id)arg3 useProcessLocalCache:(BOOL)arg4 ;
-(BOOL)updateTaskWithAssetURL:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isImperfectMatch:(BOOL)arg4 isCached:(BOOL)arg5 ;
-(BOOL)useProcessLocalCache;
-(NSMutableArray *)deviceQueryParameters;
-(void)setDownloadCompletionCalled:(BOOL)arg1 ;
@end

