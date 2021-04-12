/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class PHFetchResult, NSObject, NSString;

@interface PXPeopleProgressDataSource : NSObject <PXPhotoLibraryUIChangeObserver> {

	BOOL _isFaceProcessingComplete;
	BOOL _countCacheValid;
	BOOL _faceProcessingComplete;
	unsigned long long _cachedUnlockValue;
	unsigned long long _pendingCount;
	unsigned long long _processedCount;
	unsigned long long _totalCount;
	PHFetchResult* _homeResult;
	PHFetchResult* _verifyResult;
	NSObject*<OS_dispatch_queue> _scanningProgressQueue;
	NSObject*<OS_dispatch_queue> _userInteractiveQueue;

}

@property (assign,nonatomic) unsigned long long pendingCount;                                          //@synthesize pendingCount=_pendingCount - In the implementation block
@property (assign,nonatomic) unsigned long long processedCount;                                        //@synthesize processedCount=_processedCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalCount;                                            //@synthesize totalCount=_totalCount - In the implementation block
@property (nonatomic,retain) PHFetchResult * homeResult;                                               //@synthesize homeResult=_homeResult - In the implementation block
@property (nonatomic,retain) PHFetchResult * verifyResult;                                             //@synthesize verifyResult=_verifyResult - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> scanningProgressQueue;                               //@synthesize scanningProgressQueue=_scanningProgressQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> userInteractiveQueue;                                //@synthesize userInteractiveQueue=_userInteractiveQueue - In the implementation block
@property (getter=isCountCacheValid) BOOL countCacheValid;                                             //@synthesize countCacheValid=_countCacheValid - In the implementation block
@property (assign,getter=isFaceProcessingComplete,nonatomic) BOOL faceProcessingComplete;              //@synthesize faceProcessingComplete=_faceProcessingComplete - In the implementation block
@property (assign,nonatomic) unsigned long long cachedUnlockValue;                                     //@synthesize cachedUnlockValue=_cachedUnlockValue - In the implementation block
@property (nonatomic,readonly) unsigned long long totalAssetCount; 
@property (nonatomic,readonly) unsigned long long pendingAssetCount; 
@property (nonatomic,readonly) unsigned long long processedAssetCount; 
@property (nonatomic,readonly) unsigned long long homeMembersCount; 
@property (nonatomic,readonly) BOOL isFaceProcessingComplete;                                          //@synthesize isFaceProcessingComplete=_isFaceProcessingComplete - In the implementation block
@property (nonatomic,readonly) BOOL isPersonPromoterDone; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateProgressIfNeededWithReportBlock:(/*^block*/id)arg1 ;
-(id)init;
-(unsigned long long)totalCount;
-(void)setFaceProcessingComplete:(BOOL)arg1 ;
-(unsigned long long)homeMembersCount;
-(void)setHomeResult:(PHFetchResult *)arg1 ;
-(void)_appWillEnterForeground;
-(NSObject*<OS_dispatch_queue>)userInteractiveQueue;
-(NSObject*<OS_dispatch_queue>)scanningProgressQueue;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(void)setProcessedCount:(unsigned long long)arg1 ;
-(unsigned long long)pendingAssetCount;
-(void)setCachedUnlockValue:(unsigned long long)arg1 ;
-(PHFetchResult *)verifyResult;
-(void)setVerifyResult:(PHFetchResult *)arg1 ;
-(unsigned long long)pendingCount;
-(BOOL)isPersonPromoterDone;
-(void)setTotalCount:(unsigned long long)arg1 ;
-(BOOL)isCountCacheValid;
-(unsigned long long)processedAssetCount;
-(BOOL)isFaceProcessingComplete;
-(BOOL)isFaceProcessingComplete;
-(unsigned long long)totalAssetCount;
-(void)setPendingCount:(unsigned long long)arg1 ;
-(double)_updateProgressFromFaceAnalysisProgressDictionary:(id)arg1 ;
-(void)syncUpdatePeopleProgressWithReportBlock:(/*^block*/id)arg1 ;
-(void)setCountCacheValid:(BOOL)arg1 ;
-(PHFetchResult *)homeResult;
-(unsigned long long)processedCount;
-(void)loadQueryData;
-(unsigned long long)cachedUnlockValue;
-(void)asyncUpdatePeopleProgressWithReportBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

