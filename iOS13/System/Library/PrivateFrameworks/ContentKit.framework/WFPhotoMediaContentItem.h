/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFFileType, PHAsset;

@interface WFPhotoMediaContentItem : WFGenericFileContentItem <WFContentItemClass> {

	WFFileType* _preferredFileType;

}

@property (nonatomic,retain) WFFileType * preferredFileType;              //@synthesize preferredFileType=_preferredFileType - In the implementation block
@property (nonatomic,readonly) PHAsset * asset; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)ownedPasteboardTypes;
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 contentSource:(id)arg4 ;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)filterDescription;
+(id)pluralFilterDescription;
+(id)defaultSourceForRepresentation:(id)arg1 ;
+(BOOL)hasLibrary;
+(id)itemWithAssetIdentifier:(id)arg1 ;
+(id)itemWithAssetIdentifier:(id)arg1 assetFile:(id)arg2 ;
+(id)itemWithAssetIdentifier:(id)arg1 assetFile:(id)arg2 nameIfKnown:(id)arg3 ;
+(id)itemWithAssetIdentifier:(id)arg1 assetFile:(id)arg2 nameIfKnown:(id)arg3 contentSource:(id)arg4 ;
+(id)itemsWithBurstIdentifier:(id)arg1 ;
+(void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)photoAlbums;
+(id)remoteItemWithAssetIdentifier:(id)arg1 named:(id)arg2 ;
+(BOOL)isAvailableOnPlatform:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)size;
-(id)orientation;
-(id)duration;
-(id)isHidden;
-(id)model;
-(id)width;
-(id)height;
-(id)mediaType;
-(PHAsset *)asset;
-(id)isFavorite;
-(id)isLivePhoto;
-(id)isBurst;
-(id)imageManager;
-(id)make;
-(id)outputTypes;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListThumbnail:(/*^block*/id)arg1 forSize:(CGSize)arg2 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)getPreferredFileExtension:(/*^block*/id)arg1 ;
-(void)getPreferredFileSize:(/*^block*/id)arg1 ;
-(id)additionalRepresentationsForSerialization;
-(WFFileType *)preferredFileType;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
-(BOOL)isScreenshot;
-(id)assetResourceManager;
-(void)getMetadata:(/*^block*/id)arg1 ;
-(void)getFrameRate:(/*^block*/id)arg1 ;
-(id)metadataIfLocallyAvailable;
-(BOOL)isPhotoType:(id)arg1 ;
-(id)photoTypes;
-(void)getThumbnail:(/*^block*/id)arg1 ofSize:(CGSize)arg2 ;
-(void)retrieveAssetResource:(id)arg1 withNetworkAccess:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)retrieveFileWithImageManager:(/*^block*/id)arg1 forType:(id)arg2 ;
-(id)preferredAssetResourceForType:(id)arg1 ;
-(void)generateAVAsset:(/*^block*/id)arg1 networkAccessAllowed:(BOOL)arg2 ;
-(id)fullSizeAssetResourcesInResources:(id)arg1 ;
-(id)assetRepresentationTypes;
-(id)intermediaryTypesForCoercionToItemClass:(Class)arg1 ;
-(void)setPreferredFileType:(WFFileType *)arg1 ;
@end

