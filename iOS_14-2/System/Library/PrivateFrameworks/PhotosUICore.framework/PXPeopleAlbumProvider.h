/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXPeopleSectionedDataSourceChangeObserver.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PHPhotoLibrary, PXPeopleSectionedDataSource, PXPeopleProgressManager, NSMutableDictionary, NSString;

@interface PXPeopleAlbumProvider : NSObject <PXPeopleSectionedDataSourceChangeObserver, PXPhotoLibraryUIChangeObserver> {

	BOOL _didInitiateReCacheRequest;
	BOOL _didInitiatePeopleCountFetchRequest;
	BOOL _didPrepareDataSource;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _cacheIsolationQueue;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	PHPhotoLibrary* _photoLibrary;
	Ai _currentRequestId;
	PXPeopleSectionedDataSource* _peopleDataSource;
	PXPeopleProgressManager* _progressMgr;
	/*^block*/id _requestCompletion;
	long long _cachedPeopleCount;
	NSMutableDictionary* _imageCache;
	CGSize _imageSize;

}

@property (nonatomic,readonly) PXPeopleSectionedDataSource * peopleDataSource;              //@synthesize peopleDataSource=_peopleDataSource - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                              //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) PXPeopleProgressManager * progressMgr;                         //@synthesize progressMgr=_progressMgr - In the implementation block
@property (nonatomic,copy) id requestCompletion;                                            //@synthesize requestCompletion=_requestCompletion - In the implementation block
@property (assign,nonatomic) long long cachedPeopleCount;                                   //@synthesize cachedPeopleCount=_cachedPeopleCount - In the implementation block
@property (assign) Ai currentRequestId;                                                     //@synthesize currentRequestId=_currentRequestId - In the implementation block
@property (retain) NSMutableDictionary * imageCache;                                        //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,readonly) BOOL isCountAvailable; 
@property (nonatomic,readonly) long long peopleCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(CGSize)imageSize;
-(id)init;
-(BOOL)isCountAvailable;
-(id)peopleViewController;
-(void)peopleSectionedDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2 ;
-(void)setProgressMgr:(PXPeopleProgressManager *)arg1 ;
-(void)imageCacheDidChanged:(id)arg1 ;
-(long long)peopleCount;
-(void)_asyncAddImagesToCacheWithPersons:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_appWillEnterForeground;
-(PXPeopleSectionedDataSource *)peopleDataSource;
-(void)setCurrentRequestId:(Ai)arg1 ;
-(void)requestAlbumImagesWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)imageCache;
-(PXPeopleProgressManager *)progressMgr;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
-(void)_prepareIfNeeded;
-(BOOL)_shouldShowInterstitialProgress;
-(long long)cachedPeopleCount;
-(Ai)currentRequestId;
-(void)_updateCachedCountIfNeeded;
-(void)_invalidateCache;
-(id)requestCompletion;
-(void)setImageSize:(CGSize)arg1 ;
-(void)_reCacheImagesCompletion:(/*^block*/id)arg1 ;
-(void)setCachedPeopleCount:(long long)arg1 ;
-(void)_handleRequestResult:(id)arg1 forRequestID:(A)arg2 person:(int)arg3 atIndex:(id)arg4 error:(long long)arg5 completion:(id)arg6 :(/*^block*/id)arg7 ;
-(void)peopleSectionedDataSourceMembersChangedNonIncrementally:(id)arg1 ;
-(void)setRequestCompletion:(id)arg1 ;
-(void)dealloc;
-(id)_visiblePersons;
@end

