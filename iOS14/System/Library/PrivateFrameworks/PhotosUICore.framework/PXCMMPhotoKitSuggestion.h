/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXMediaTypeAggregating.h>
#import <libobjc.A.dylib/PXCMMSuggestion.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PXDisplayAsset, PXUIImageProvider;
@class NSString, PHAssetCollection, PHFetchResult, PXAssetCollectionActionManager;

@interface PXCMMPhotoKitSuggestion : NSObject <PXMediaTypeAggregating, PXCMMSuggestion, NSCopying> {

	NSString* _title;
	NSString* _subtitle;
	id<PXDisplayAsset> _posterAsset;
	id<PXUIImageProvider> _posterMediaProvider;
	PHAssetCollection* _assetCollection;
	PHFetchResult* _previewAssetsFetchResult;
	PHFetchResult* _peopleSuggestionsFetchResult;

}

@property (nonatomic,readonly) long long aggregateMediaType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                                        //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) PHFetchResult * previewAssetsFetchResult;                                   //@synthesize previewAssetsFetchResult=_previewAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) PHFetchResult * peopleSuggestionsFetchResult;                               //@synthesize peopleSuggestionsFetchResult=_peopleSuggestionsFetchResult - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) id<PXDisplayAsset> posterAsset;                                             //@synthesize posterAsset=_posterAsset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> posterMediaProvider;                                  //@synthesize posterMediaProvider=_posterMediaProvider - In the implementation block
@property (nonatomic,readonly) id<PXPeopleFetchResult> peopleFetchResult; 
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager; 
@property (nonatomic,readonly) BOOL containsUnverifiedPersons; 
+(id)fastSuggestionWithAssetCollection:(id)arg1 ;
+(id)sharedCachingImageManager;
+(id)suggestionWithAssetCollection:(id)arg1 ;
+(id)_fetchPreviewAssetsForAssetCollection:(id)arg1 ;
+(id)_fetchPeopleSuggestionsForAssetCollection:(id)arg1 ;
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(id)contextForActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 ;
-(void)markAsActiveIfNeeded;
-(id)diagnosticsItem;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(long long)aggregateMediaType;
-(PHFetchResult *)previewAssetsFetchResult;
-(NSString *)subtitle;
-(id)suggestionWithUpdatedPreviewAssetsFetchResult:(id)arg1 ;
-(id)suggestionWithUpdatedPeopleSuggestionsFetchResult:(id)arg1 ;
-(PHFetchResult *)peopleSuggestionsFetchResult;
-(void)decline;
-(long long)count;
-(NSString *)description;
-(BOOL)containsUnverifiedPersons;
-(PHAssetCollection *)assetCollection;
-(NSString *)identifier;
-(id<PXPeopleFetchResult>)peopleFetchResult;
-(id)initWithAssetCollection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

