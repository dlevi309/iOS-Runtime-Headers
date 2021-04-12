/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <libobjc.A.dylib/PHAssetRepresentationDownloadObserver.h>

@protocol ProjectAssetManagerDelegate;
@class Project, NSDictionary, MBProjectClipsLoader, NSArray, NSSet, NSString;

@interface ProjectAssetManager : NSObject <PHAssetRepresentationDownloadObserver> {

	BOOL _downloading;
	BOOL _automaticallyStartDownloads;
	BOOL _cacheRepairableEditItems;
	double _downloadProgress;
	Project* _project;
	id<ProjectAssetManagerDelegate> _delegate;
	NSDictionary* _movieMatches;
	MBProjectClipsLoader* _sharedClipsLoader;
	NSArray* _cachedRepairableEditItems;
	unsigned long long _numberOfWorkItems;
	unsigned long long _numberOfCompletedWorkItems;
	NSSet* _offlineAssetRepresentations;

}

@property (assign,nonatomic,__weak) Project * project;                                     //@synthesize project=_project - In the implementation block
@property (nonatomic,retain) NSDictionary * movieMatches;                                  //@synthesize movieMatches=_movieMatches - In the implementation block
@property (nonatomic,retain) MBProjectClipsLoader * sharedClipsLoader;                     //@synthesize sharedClipsLoader=_sharedClipsLoader - In the implementation block
@property (assign,nonatomic) BOOL cacheRepairableEditItems;                                //@synthesize cacheRepairableEditItems=_cacheRepairableEditItems - In the implementation block
@property (nonatomic,retain) NSArray * cachedRepairableEditItems;                          //@synthesize cachedRepairableEditItems=_cachedRepairableEditItems - In the implementation block
@property (assign) unsigned long long numberOfWorkItems;                                   //@synthesize numberOfWorkItems=_numberOfWorkItems - In the implementation block
@property (assign) unsigned long long numberOfCompletedWorkItems;                          //@synthesize numberOfCompletedWorkItems=_numberOfCompletedWorkItems - In the implementation block
@property (assign,nonatomic) double downloadProgress;                                      //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,getter=isDownloading,nonatomic) BOOL downloading;                        //@synthesize downloading=_downloading - In the implementation block
@property (nonatomic,retain) NSSet * offlineAssetRepresentations;                          //@synthesize offlineAssetRepresentations=_offlineAssetRepresentations - In the implementation block
@property (assign,nonatomic) BOOL automaticallyStartDownloads;                             //@synthesize automaticallyStartDownloads=_automaticallyStartDownloads - In the implementation block
@property (assign,nonatomic,__weak) id<ProjectAssetManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<ProjectAssetManagerDelegate>)delegate;
-(void)setDelegate:(id<ProjectAssetManagerDelegate>)arg1 ;
-(BOOL)isDownloading;
-(id)initWithProject:(id)arg1 ;
-(void)cancelDownloads;
-(double)downloadProgress;
-(void)setDownloadProgress:(double)arg1 ;
-(void)setDownloading:(BOOL)arg1 ;
-(Project *)project;
-(void)setProject:(Project *)arg1 ;
-(BOOL)hasMissingAssets;
-(void)connectivityDidChange:(id)arg1 ;
-(void)projectDidFinishAllEditing:(id)arg1 ;
-(BOOL)cacheRepairableEditItems;
-(NSArray *)cachedRepairableEditItems;
-(void)setCachedRepairableEditItems:(NSArray *)arg1 ;
-(id)repairableEditItems;
-(id)editItemsMatchingCriteria:(long long)arg1 breakOnFirst:(BOOL)arg2 ;
-(id)assetURLsMatchingCriteria:(long long)arg1 breakOnFirst:(BOOL)arg2 ;
-(unsigned long long)numberOfAssetsMatchingCriteria:(long long)arg1 ;
-(void)downloadOfflineAssetsIfNecessary;
-(BOOL)hasOfflineAssets;
-(BOOL)automaticallyStartDownloads;
-(void)setOfflineAssetRepresentations:(NSSet *)arg1 ;
-(void)updateDownloadProgress;
-(void)setAutomaticallyStartDownloads:(BOOL)arg1 ;
-(NSSet *)offlineAssetRepresentations;
-(void)_updateDownloadProgress;
-(id)predicateForDuration:(double)arg1 ;
-(id)predicateForCreationDate:(id)arg1 tolerance:(double)arg2 ;
-(id)fetchOptionsForEditItem:(id)arg1 creationDateTolerance:(double)arg2 ;
-(id)mismatchedEditItems;
-(id)matchingAssetsForEditItem:(id)arg1 creationDateTolerance:(double)arg2 ;
-(void)setSharedClipsLoader:(MBProjectClipsLoader *)arg1 ;
-(MBProjectClipsLoader *)sharedClipsLoader;
-(void)repairEditItems:(id)arg1 ;
-(void)setCacheRepairableEditItems:(BOOL)arg1 ;
-(void)setNumberOfWorkItems:(unsigned long long)arg1 ;
-(void)setNumberOfCompletedWorkItems:(unsigned long long)arg1 ;
-(id)matchLocalMovies;
-(id)matchLibraryAssets;
-(unsigned long long)numberOfCompletedWorkItems;
-(void)postProgressNotification;
-(unsigned long long)numberOfWorkItems;
-(id)filePathForAdjustedVideoIdentifierURL:(id)arg1 ;
-(id)projectOriginalImageForIdentifierURL:(id)arg1 ;
-(id)localOriginalImageForIdentifierURL:(id)arg1 ;
-(void)downloadStateOfAssetRepresentationDidChange:(id)arg1 previousState:(unsigned long long)arg2 currentState:(unsigned long long)arg3 ;
-(void)downloadOfAssetRepresentation:(id)arg1 didProgress:(double)arg2 ;
-(unsigned long long)numberOfMissingAssets;
-(void)hasAssetsInPhotosTrash:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfMismatchedAssets;
-(id)mismatchedDurationEditItems;
-(BOOL)hasMismatchedAssets;
-(BOOL)hasMismatchedDurationAssets;
-(BOOL)hasModifiedAssets;
-(unsigned long long)numberOfOfflineAssets;
-(id)offlineEditItems;
-(void)repairMissingAssets;
-(void)repairMismatchedAssets;
-(BOOL)hasProjectAssetForIdentifierURL:(id)arg1 ;
-(id)originalImageForIdentifierURL:(id)arg1 ;
-(NSDictionary *)movieMatches;
-(void)setMovieMatches:(NSDictionary *)arg1 ;
-(id)missingEditItems;
@end

