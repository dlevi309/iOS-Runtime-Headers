/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCAssetDataProvider, OS_dispatch_group, FCAssetHandleDelegate;
@class NSError, NSURL, FCOperation, NSHashTable, NSObject, NSDate, NFUnfairLock, FCInterestToken, NSString, NTPBAsset;

@interface FCAssetHandle : NSObject {

	id<FCAssetDataProvider> _dataProvider;
	NSError* _downloadError;
	NSURL* _remoteURL;
	FCOperation* _fetchOperation;
	NSHashTable* _downloadRequests;
	NSObject*<OS_dispatch_group> _fetchGroup;
	unsigned long long _countOfPenalizedDownloadAttempts;
	NSDate* _dateOfLastDownloadAttempt;
	NFUnfairLock* _stateLock;
	id<FCAssetHandleDelegate> _delegate;
	FCInterestToken* _holdToken;
	NSString* _assetKey;
	long long _lifetimeHint;
	NSString* _rawFilePath;
	NTPBAsset* _assetMetadata;

}

@property (retain) id<FCAssetDataProvider> dataProvider;                             //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) FCOperation * fetchOperation;                           //@synthesize fetchOperation=_fetchOperation - In the implementation block
@property (nonatomic,retain) NSHashTable * downloadRequests;                         //@synthesize downloadRequests=_downloadRequests - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchGroup;                //@synthesize fetchGroup=_fetchGroup - In the implementation block
@property (assign) unsigned long long countOfPenalizedDownloadAttempts;              //@synthesize countOfPenalizedDownloadAttempts=_countOfPenalizedDownloadAttempts - In the implementation block
@property (retain) NSDate * dateOfLastDownloadAttempt;                               //@synthesize dateOfLastDownloadAttempt=_dateOfLastDownloadAttempt - In the implementation block
@property (nonatomic,retain) NFUnfairLock * stateLock;                               //@synthesize stateLock=_stateLock - In the implementation block
@property (nonatomic,retain) NSURL * remoteURL;                                      //@synthesize remoteURL=_remoteURL - In the implementation block
@property (assign,nonatomic,__weak) id<FCAssetHandleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FCInterestToken * holdToken;                            //@synthesize holdToken=_holdToken - In the implementation block
@property (nonatomic,copy) NSString * assetKey;                                      //@synthesize assetKey=_assetKey - In the implementation block
@property (assign,nonatomic) long long lifetimeHint;                                 //@synthesize lifetimeHint=_lifetimeHint - In the implementation block
@property (copy) NSString * rawFilePath;                                             //@synthesize rawFilePath=_rawFilePath - In the implementation block
@property (retain) NTPBAsset * assetMetadata;                                        //@synthesize assetMetadata=_assetMetadata - In the implementation block
@property (retain) NSError * downloadError;                                          //@synthesize downloadError=_downloadError - In the implementation block
@property (copy,readonly) NSString * filePath; 
@property (nonatomic,copy,readonly) NSString * uniqueKey; 
-(NSString *)uniqueKey;
-(NSString *)filePath;
-(void)setDataProvider:(id<FCAssetDataProvider>)arg1 ;
-(void)setAssetKey:(NSString *)arg1 ;
-(NSURL *)remoteURL;
-(FCInterestToken *)holdToken;
-(id<FCAssetHandleDelegate>)delegate;
-(id)initWithDataProvider:(id)arg1 ;
-(void)setDelegate:(id<FCAssetHandleDelegate>)arg1 ;
-(id<FCAssetDataProvider>)dataProvider;
-(FCOperation *)fetchOperation;
-(long long)lifetimeHint;
-(void)setFetchOperation:(FCOperation *)arg1 ;
-(id)_downloadIfNeededWithPriority:(long long)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_canRetryDownload;
-(NSHashTable *)downloadRequests;
-(void)setDownloadRequests:(NSHashTable *)arg1 ;
-(void)_completeFetchWithDataProvider:(id)arg1 error:(id)arg2 ;
-(void)_removeDownloadRequest:(id)arg1 ;
-(void)_revisitDownloadRequestPriorities;
-(id)downloadIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)rawFilePath;
-(unsigned long long)countOfPenalizedDownloadAttempts;
-(void)setCountOfPenalizedDownloadAttempts:(unsigned long long)arg1 ;
-(void)setDateOfLastDownloadAttempt:(NSDate *)arg1 ;
-(void)setLifetimeHint:(long long)arg1 ;
-(NSString *)assetKey;
-(NTPBAsset *)assetMetadata;
-(void)setAssetMetadata:(NTPBAsset *)arg1 ;
-(NSDate *)dateOfLastDownloadAttempt;
-(id)downloadIfNeededWithPriority:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)downloadIfNeededWithGroup:(id)arg1 ;
-(id)downloadIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)fetchDataProviderWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchDataProviderWithPriority:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRawFilePath:(NSString *)arg1 ;
-(void)setFetchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NFUnfairLock *)stateLock;
-(void)setStateLock:(NFUnfairLock *)arg1 ;
-(NSObject*<OS_dispatch_group>)fetchGroup;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(void)setDownloadError:(NSError *)arg1 ;
-(NSError *)downloadError;
-(void)setHoldToken:(FCInterestToken *)arg1 ;
-(void)dealloc;
@end

