/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLAssetContainer.h>
#import <libobjc.A.dylib/PLAssetChangeObserver.h>

@class NSString, PLPhotoLibrary, NSOrderedSet, NSIndexSet, NSMutableIndexSet, PLManagedAsset, NSArray, NSDate;

@interface PLAvalanche : NSObject <PLAssetContainer, PLAssetChangeObserver> {

	NSString* _uuid;
	PLPhotoLibrary* _photoLibrary;
	NSOrderedSet* _assets;
	NSIndexSet* __originalAutoPickIndexes;
	NSMutableIndexSet* __autoPickIndexes;
	NSIndexSet* __originalUserFavoriteIndexes;
	NSMutableIndexSet* __userFavoriteIndexes;
	unsigned long long __originalStackIndex;
	unsigned long long __stackIndex;
	PLManagedAsset* __aNewPick;
	PLManagedAsset* __anOldPick;
	/*^block*/id __completionHandler;

}

@property (nonatomic,retain) NSOrderedSet * assets;                                          //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSIndexSet * _originalAutoPickIndexes;                          //@synthesize _originalAutoPickIndexes=__originalAutoPickIndexes - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * _autoPickIndexes;                           //@synthesize _autoPickIndexes=__autoPickIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * _originalUserFavoriteIndexes;                      //@synthesize _originalUserFavoriteIndexes=__originalUserFavoriteIndexes - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * _userFavoriteIndexes;                       //@synthesize _userFavoriteIndexes=__userFavoriteIndexes - In the implementation block
@property (assign,nonatomic) unsigned long long _originalStackIndex;                         //@synthesize _originalStackIndex=__originalStackIndex - In the implementation block
@property (assign,nonatomic) unsigned long long _stackIndex;                                 //@synthesize _stackIndex=__stackIndex - In the implementation block
@property (setter=_setANewPick:,nonatomic,retain) PLManagedAsset * _aNewPick;                //@synthesize _aNewPick=__aNewPick - In the implementation block
@property (setter=_setAnOldPick:,nonatomic,retain) PLManagedAsset * _anOldPick;              //@synthesize _anOldPick=__anOldPick - In the implementation block
@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;              //@synthesize _completionHandler=__completionHandler - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary;                                //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)revalidateAvalancheAssets:(id)arg1 inLibrary:(id)arg2 deleteNonPicks:(BOOL)arg3 allowDissolve:(BOOL)arg4 ;
+(id)supportedSavedAssetTypes;
+(BOOL)_allowMPSmodificationForBurstChangesOnLibrary:(id)arg1 ;
+(void)removeFavoriteStatus:(id)arg1 ;
+(id)_fetchRequestForAssetsWithAvalancheUUID:(id)arg1 ;
+(unsigned long long)countForAssetsWithAvalancheUUID:(id)arg1 inLibrary:(id)arg2 ;
+(BOOL)isValidBurstWithAssets:(id)arg1 ;
+(id)_assetAmongAssets:(id)arg1 fromIndexes:(id)arg2 excludingIndexes:(id)arg3 ;
+(BOOL)shouldOnlyShowAvalanchePicks;
+(CGRect)frameOfTopImageInStackForStackFrame:(CGRect)arg1 ;
+(void)handleUpdatesForContextWillSave:(id)arg1 ;
+(id)_visibleIndexesAmongAssets:(id)arg1 fromUserFavoriteIndexes:(id)arg2 stackIndex:(unsigned long long)arg3 ;
+(void)disolveBurstForAssets:(id)arg1 permanently:(BOOL)arg2 ;
+(id)updatePropertiesForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 deleteNonPicks:(BOOL)arg5 setFirstPick:(BOOL)arg6 allowDissolve:(BOOL)arg7 ;
+(void)updateMembershipForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 deleteNonPicks:(BOOL)arg5 allowDissolve:(BOOL)arg6 inLibrary:(id)arg7 ;
+(unsigned long long)_calculateStackAssetForAssetCount:(unsigned long long)arg1 autoPicks:(id)arg2 userFavorites:(id)arg3 ;
+(BOOL)shouldHideAvalanchesFromPhotoStream;
+(id)assetsWithAvalancheUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(unsigned long long)assetsCount;
-(NSOrderedSet *)assets;
-(unsigned long long)videosCount;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(NSString *)localizedTitle;
-(NSString *)uuid;
-(PLManagedAsset *)keyAsset;
-(PLPhotoLibrary *)photoLibrary;
-(unsigned long long)photosCount;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(void)applyTrashedState:(short)arg1 ;
-(NSArray *)localizedLocationNames;
-(NSString *)description;
-(void)_recalculateStackAsset;
-(void)addUserFavorite:(id)arg1 ;
-(void)removeUserFavorite:(id)arg1 ;
-(BOOL)isUserFavorite:(id)arg1 ;
-(BOOL)isAutoPick:(id)arg1 ;
-(unsigned long long)_stackIndex;
-(id)proposedStackAssetAfterRemovingFavorite:(id)arg1 ;
-(NSIndexSet *)_originalAutoPickIndexes;
-(void)set_originalAutoPickIndexes:(NSIndexSet *)arg1 ;
-(NSMutableIndexSet *)_autoPickIndexes;
-(void)set_autoPickIndexes:(NSMutableIndexSet *)arg1 ;
-(NSIndexSet *)_originalUserFavoriteIndexes;
-(void)set_originalUserFavoriteIndexes:(NSIndexSet *)arg1 ;
-(NSMutableIndexSet *)_userFavoriteIndexes;
-(void)set_userFavoriteIndexes:(NSMutableIndexSet *)arg1 ;
-(unsigned long long)_originalStackIndex;
-(void)set_originalStackIndex:(unsigned long long)arg1 ;
-(void)set_stackIndex:(unsigned long long)arg1 ;
-(void)_setANewPick:(id)arg1 ;
-(PLManagedAsset *)_anOldPick;
-(void)_setAnOldPick:(id)arg1 ;
-(void)setAssets:(NSOrderedSet *)arg1 ;
-(id)stackAsset;
-(unsigned long long)approximateCount;
-(BOOL)canShowAvalancheStacks;
-(id)userFavorites;
-(id)initWithUUID:(id)arg1 photoLibrary:(id)arg2 ;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)canShowComments;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(PLManagedAsset *)arg1 ;
-(id)_completionHandler;
-(BOOL)isEmpty;
-(void)assetsDidChange:(id)arg1 ;
-(id)autoPicks;
-(void)applyChangesAndDeleteNonPicks:(BOOL)arg1 currentContainer:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)title;
-(void)dealloc;
-(PLManagedAsset *)_aNewPick;
@end

