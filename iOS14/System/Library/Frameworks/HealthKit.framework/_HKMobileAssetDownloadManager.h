/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableSet, NSObject, NSString, MADownloadOptions;

@interface _HKMobileAssetDownloadManager : NSObject {

	NSMutableArray* _pendingOperations;
	NSMutableSet* _downloadingQueryParams;
	NSObject*<OS_dispatch_queue> _queue;
	_HKMobileAssetDownloadManager* _retainedSelf;
	BOOL _shouldQueryLocalAssetsFirst;
	BOOL _shouldAutoDownloadRemoteAssets;
	long long _maxNumberOfRetriesAllowed;
	NSString* _mobileAssetTypeName;
	/*^block*/id _errorHandler;
	MADownloadOptions* _mobileAssetDownloadOptions;
	/*^block*/id _mobileAssetDownloadCompletionHandler;

}

@property (assign,nonatomic) BOOL shouldQueryLocalAssetsFirst;                          //@synthesize shouldQueryLocalAssetsFirst=_shouldQueryLocalAssetsFirst - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoDownloadRemoteAssets;                       //@synthesize shouldAutoDownloadRemoteAssets=_shouldAutoDownloadRemoteAssets - In the implementation block
@property (assign,nonatomic) long long maxNumberOfRetriesAllowed;                       //@synthesize maxNumberOfRetriesAllowed=_maxNumberOfRetriesAllowed - In the implementation block
@property (nonatomic,copy,readonly) NSString * mobileAssetTypeName;                     //@synthesize mobileAssetTypeName=_mobileAssetTypeName - In the implementation block
@property (nonatomic,copy) id errorHandler;                                             //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) MADownloadOptions * mobileAssetDownloadOptions;              //@synthesize mobileAssetDownloadOptions=_mobileAssetDownloadOptions - In the implementation block
@property (nonatomic,copy) id mobileAssetDownloadCompletionHandler;                     //@synthesize mobileAssetDownloadCompletionHandler=_mobileAssetDownloadCompletionHandler - In the implementation block
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(id)mobileAssetDownloadCompletionHandler;
-(void)downloadAssetsWithQueryParams:(id)arg1 ;
-(void)removeMobileAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_errorWithDomain:(id)arg1 code:(long long)arg2 ;
-(NSString *)mobileAssetTypeName;
-(void)setShouldQueryLocalAssetsFirst:(BOOL)arg1 ;
-(void)fetchAssetsWithQueryParams:(id)arg1 onlyLocal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)description;
-(void)_queue_fetchAssetsWithQuery:(id)arg1 onlyLocal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMaxNumberOfRetriesAllowed:(long long)arg1 ;
-(id)initWithMobileAssetTypeName:(id)arg1 queue:(id)arg2 ;
-(void)_callDownloadCompletionHandlerWithAssets:(id)arg1 queryParams:(id)arg2 ;
-(void)_queue_downloadAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_fetchAssetsWithLocalInformation:(BOOL)arg1 shouldRequery:(BOOL)arg2 queryParams:(id)arg3 ;
-(void)_callErrorHandlerWithError:(id)arg1 ;
-(BOOL)shouldQueryLocalAssetsFirst;
-(void)setShouldAutoDownloadRemoteAssets:(BOOL)arg1 ;
-(void)setMobileAssetDownloadCompletionHandler:(id)arg1 ;
-(void)setMobileAssetDownloadOptions:(MADownloadOptions *)arg1 ;
-(id)_generateAssetQueryFromQueryParams:(id)arg1 ;
-(long long)maxNumberOfRetriesAllowed;
-(BOOL)shouldAutoDownloadRemoteAssets;
-(void)downloadMobileAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MADownloadOptions *)mobileAssetDownloadOptions;
-(void)dealloc;
@end

