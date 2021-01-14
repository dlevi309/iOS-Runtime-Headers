/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSMutableDictionary, NSDate, NSMutableSet, PHPhotoLibrary;

@interface PHImportDuplicateChecker : NSObject {

	NSMutableDictionary* _avchdAssetIdentifierCache;
	NSMutableDictionary* _sizeNameCache;
	NSMutableDictionary* _assetIdentifierCache;
	NSDate* _lastChange;
	NSMutableSet* _updatedDupInfos;
	PHPhotoLibrary* _library;

}

@property (nonatomic,retain) PHPhotoLibrary * library;              //@synthesize library=_library - In the implementation block
+(id)_dateWithDate:(id)arg1 ;
+(id)_fetchAssetInfoFromLibrary:(id)arg1 forFileSizes:(id)arg2 ;
-(PHPhotoLibrary *)library;
-(id)initWithLibrary:(id)arg1 ;
-(unsigned long long)_populateCachesWithAssetsInfos:(id)arg1 ;
-(void)_updateAssetsFromDupInfos;
-(void)_setDupInfo:(id)arg1 forFingerprint:(id)arg2 inCache:(id)arg3 ;
-(void)_populateCachesWithAssetInfo:(id)arg1 ;
-(id)_filterDuplicatesForItem:(id)arg1 duplicateSet:(id)arg2 considerItemsInTrash:(BOOL)arg3 ;
-(id)_findMatchingAssetsForItem:(id)arg1 inSet:(id)arg2 matchingDate:(id*)arg3 confidence:(unsigned char*)arg4 ;
-(BOOL)_findFingerprint:(id)arg1 forItem:(id)arg2 inCache:(id)arg3 considerTrash:(BOOL)arg4 ;
-(id)_checkForDuplicate:(id)arg1 considerItemsInTheTrash:(BOOL)arg2 ;
-(void)findDuplicatesOfItems:(id)arg1 considerItemsInTrash:(BOOL)arg2 forEach:(/*^block*/id)arg3 atEnd:(/*^block*/id)arg4 ;
-(void)setLibrary:(PHPhotoLibrary *)arg1 ;
@end

