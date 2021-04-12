/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXDisplayAsset.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PXImportDisplayDelegate;
@class NSString, PHImportAsset, PXImportAssetCollection, PHImportAssetDataRequest, NSError, NSDate, NSMutableDictionary, NSNumber, NSDictionary;

@interface PXImportItemViewModel : PXObservable <PXDisplayAsset, NSCopying> {

	NSString* _collectionIdentifier;
	BOOL _selected;
	BOOL _selectable;
	BOOL _duplicate;
	BOOL _isDeleted;
	id<PXImportDisplayDelegate> _displayDelegate;
	PHImportAsset* _importAsset;
	PXImportAssetCollection* _assetCollection;
	NSString* _kind;
	PHImportAssetDataRequest* _thumbnailRequest;
	NSError* _thumbnailError;
	double _imageProcessingStartTime;
	double _imageProcessingEndTime;
	long long _state;
	long long _thumbnailIndex;
	NSDate* _importDate;
	NSString* _deleteSession;
	NSMutableDictionary* _imageRepresentationsBySize;
	NSMutableDictionary* _assetRequestsBySize;
	NSMutableDictionary* _thumbnailRequestsBySize;
	CGSize _largeThumbnailSize;
	CGSize _thumbnailSize;

}

@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * localCreationDate; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) BOOL representsBurst; 
@property (nonatomic,readonly) BOOL isInCloud; 
@property (nonatomic,readonly) BOOL isEligibleForAutoPlayback; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) Class defaultImageProviderClass; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) long long playbackStyle; 
@property (nonatomic,readonly) long long playbackVariation; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) unsigned long long thumbnailVersion; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSNumber * hdrGain; 
@property (nonatomic,readonly) unsigned long long burstSelectionTypes; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) NSDate * importDate; 
@property (nonatomic,readonly) BOOL isAutoPlaybackEligibilityEstimated; 
@property (nonatomic,readonly) unsigned long long thumbnailIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableDictionary * imageRepresentationsBySize;                //@synthesize imageRepresentationsBySize=_imageRepresentationsBySize - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetRequestsBySize;                       //@synthesize assetRequestsBySize=_assetRequestsBySize - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * thumbnailRequestsBySize;                   //@synthesize thumbnailRequestsBySize=_thumbnailRequestsBySize - In the implementation block
@property (nonatomic,readonly) id uuid; 
@property (nonatomic,readonly) NSString * fileName; 
@property (nonatomic,readonly) NSDate * fileCreationDate; 
@property (assign,nonatomic,__weak) id<PXImportDisplayDelegate> displayDelegate;              //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (nonatomic,readonly) PHImportAsset * importAsset;                                   //@synthesize importAsset=_importAsset - In the implementation block
@property (assign,nonatomic,__weak) PXImportAssetCollection * assetCollection;                //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) long long badgeType; 
@property (nonatomic,readonly) BOOL isPanoramicImage; 
@property (nonatomic,readonly) NSString * kind;                                               //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) BOOL isMediaAsset; 
@property (nonatomic,readonly) BOOL isNotYetImported; 
@property (assign,nonatomic) CGSize largeThumbnailSize;                                       //@synthesize largeThumbnailSize=_largeThumbnailSize - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                            //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,readonly) NSString * debugDisplayName; 
@property (assign,nonatomic,__weak) PHImportAssetDataRequest * thumbnailRequest;              //@synthesize thumbnailRequest=_thumbnailRequest - In the implementation block
@property (nonatomic,retain) NSError * thumbnailError;                                        //@synthesize thumbnailError=_thumbnailError - In the implementation block
@property (assign,nonatomic) double imageProcessingStartTime;                                 //@synthesize imageProcessingStartTime=_imageProcessingStartTime - In the implementation block
@property (assign,nonatomic) double imageProcessingEndTime;                                   //@synthesize imageProcessingEndTime=_imageProcessingEndTime - In the implementation block
@property (getter=isSelected,nonatomic,readonly) BOOL selected;                               //@synthesize selected=_selected - In the implementation block
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable;                           //@synthesize selectable=_selectable - In the implementation block
@property (getter=isDuplicate,nonatomic,readonly) BOOL duplicate;                             //@synthesize duplicate=_duplicate - In the implementation block
@property (nonatomic,readonly) long long state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long thumbnailIndex;                                      //@synthesize thumbnailIndex=_thumbnailIndex - In the implementation block
@property (nonatomic,readonly) NSDate * importDate;                                           //@synthesize importDate=_importDate - In the implementation block
@property (nonatomic,readonly) NSString * deleteSession;                                      //@synthesize deleteSession=_deleteSession - In the implementation block
@property (nonatomic,readonly) BOOL isDeleted;                                                //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,readonly) NSDictionary * imageRepresentations; 
+(id)alreadyImportedGroupIdentifier;
+(id)dateFormatter;
+(id)importAssetsFromModels:(id)arg1 ;
+(BOOL)hasPanoramaImageDimensions:(CGSize)arg1 ;
-(BOOL)isFavorite;
-(id)accessibilityLabel;
-(NSMutableDictionary *)imageRepresentationsBySize;
-(void)setImageRepresentationsBySize:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)assetRequestsBySize;
-(void)setAssetRequestsBySize:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)thumbnailRequestsBySize;
-(void)setThumbnailRequestsBySize:(NSMutableDictionary *)arg1 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(NSString *)uuid;
-(id)groupIdentifier;
-(long long)mediaType;
-(id)init;
-(BOOL)isInCloud;
-(BOOL)isSelected;
-(void)setDisplayDelegate:(id<PXImportDisplayDelegate>)arg1 ;
-(NSDate *)localCreationDate;
-(unsigned long long)thumbnailIndex;
-(CGSize)thumbnailSize;
-(double)aspectRatio;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelectable;
-(long long)playbackVariation;
-(CGRect)bestCropRectForAspectRatio:(double)arg1 ;
-(BOOL)isEligibleForAutoPlayback;
-(Class)defaultImageProviderClass;
-(NSString *)kind;
-(NSString *)fileName;
-(BOOL)representsBurst;
-(NSDate *)fileCreationDate;
-(BOOL)isDeleted;
-(NSString *)description;
-(long long)badgeType;
-(void)setSelectable:(BOOL)arg1 ;
-(long long)playbackStyle;
-(NSDate *)creationDate;
-(long long)isContentEqualTo:(id)arg1 ;
-(void)setAssetCollection:(PXImportAssetCollection *)arg1 ;
-(NSDate *)importDate;
-(unsigned long long)pixelHeight;
-(id<PXImportDisplayDelegate>)displayDelegate;
-(void)setImportDate:(NSDate *)arg1 ;
-(unsigned long long)mediaSubtypes;
-(BOOL)isMediaAsset;
-(BOOL)isNotYetImported;
-(PXImportAssetCollection *)assetCollection;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)isPanoramicImage;
-(long long)state;
-(id)mutableChangeObject;
-(void)setIsDeleted:(BOOL)arg1 ;
-(id)initWithImportAsset:(id)arg1 ;
-(PHImportAsset *)importAsset;
-(NSString *)debugDisplayName;
-(BOOL)isDuplicate;
-(CGSize)largeThumbnailSize;
-(double)duration;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)pixelWidth;
-(id)initWithKind:(id)arg1 selectable:(BOOL)arg2 ;
-(BOOL)isEqualToImportItemViewModel:(id)arg1 ;
-(void)setDuplicate:(BOOL)arg1 ;
-(void)addImageRepresentation:(id)arg1 ;
-(NSString *)deleteSession;
-(void)setDeleteSession:(NSString *)arg1 ;
-(NSDictionary *)imageRepresentations;
-(id)assetDataRequestForRequestSize:(unsigned long long)arg1 ;
-(void)setAssetDataRequest:(id)arg1 forRequestSize:(unsigned long long)arg2 ;
-(void)removeAssetDataRequestForRequestSize:(unsigned long long)arg1 ;
-(id)thumbnailRequestsForRequestSize:(unsigned long long)arg1 ;
-(void)addThumbnailRequest:(id)arg1 ;
-(PHImportAssetDataRequest *)thumbnailRequest;
-(void)removeThumbnailRequest:(id)arg1 ;
-(void)setLargeThumbnailSize:(CGSize)arg1 ;
-(void)setThumbnailRequest:(PHImportAssetDataRequest *)arg1 ;
-(NSError *)thumbnailError;
-(void)setThumbnailError:(NSError *)arg1 ;
-(double)imageProcessingStartTime;
-(void)setImageProcessingStartTime:(double)arg1 ;
-(double)imageProcessingEndTime;
-(void)setImageProcessingEndTime:(double)arg1 ;
@end

