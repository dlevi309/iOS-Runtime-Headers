/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMediaInfo.h>
#import <TSReading/TSDContainerInfo.h>
#import <TSReading/TSDMixing.h>
#import <TSReading/TSSPresetSource.h>
#import <TSReading/TSSThemedObject.h>
#import <TSReading/TSKTransformableObject.h>
#import <TSReading/TSDReducableInfo.h>

@class TSPData, TSDImageAdjustments, TSDMediaStyle, TSDMaskInfo, TSDBezierPath, NSString, TSDInfoGeometry;

@interface TSDImageInfo : TSDMediaInfo <TSDContainerInfo, TSDMixing, TSSPresetSource, TSSThemedObject, TSKTransformableObject, TSDReducableInfo> {

	TSPData* mImageData;
	TSPData* mThumbnailImageData;
	TSPData* mOriginalImageData;
	BOOL mInterpretsUntaggedImageDataAsGeneric;
	TSDImageAdjustments* mImageAdjustments;
	TSPData* mAdjustedImageData;
	TSPData* mThumbnailAdjustedImageData;
	TSPData* mEnhancedImageData;
	TSDMediaStyle* mStyle;
	TSDMaskInfo* mMaskInfo;
	TSDBezierPath* mInstantAlphaPath;
	TSDBezierPath* mTracedPath;
	CGSize mNaturalSize;

}

@property (nonatomic,retain) TSPData * imageData; 
@property (nonatomic,retain) TSPData * thumbnailImageData; 
@property (nonatomic,retain) TSPData * originalImageData; 
@property (assign,nonatomic) BOOL interpretsUntaggedImageDataAsGeneric; 
@property (nonatomic,readonly) TSDMediaStyle * imageStyle; 
@property (nonatomic,retain) TSDMaskInfo * maskInfo; 
@property (nonatomic,retain) TSDBezierPath * instantAlphaPath; 
@property (nonatomic,copy) TSDImageAdjustments * imageAdjustments; 
@property (nonatomic,retain) TSPData * adjustedImageData; 
@property (nonatomic,retain) TSPData * thumbnailAdjustedImageData; 
@property (nonatomic,retain) TSPData * enhancedImageData; 
@property (nonatomic,readonly) TSDBezierPath * tracedPath; 
@property (assign,nonatomic) CGSize naturalSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
+(void)adjustIncomingImageGeometry:(id)arg1 maskGeometry:(id)arg2 forImageData:(id)arg3 maskedWithInstantAlphaPath:(id)arg4 withNaturalSize:(CGSize)arg5 forTargetImageGeometry:(id)arg6 withTargetMaskGeometry:(id)arg7 ;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4 ;
+(id)bootstrapPropertyMapForPresetIndex:(unsigned long long)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
-(void)dealloc;
-(BOOL)isValid;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(BOOL)isOpaque;
-(CGSize)originalSize;
-(TSDInfoGeometry *)geometry;
-(id)objectForProperty:(int)arg1 ;
-(TSPData *)imageData;
-(CGSize)naturalSize;
-(void)setImageData:(TSPData *)arg1 ;
-(TSPData *)thumbnailImageData;
-(void)setThumbnailImageData:(TSPData *)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(id)mediaFileType;
-(TSPData *)originalImageData;
-(BOOL)isPDF;
-(TSDMediaStyle *)imageStyle;
-(Class)layoutClass;
-(id)copyWithContext:(id)arg1 ;
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(Class)repClass;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(id)childInfos;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(void)setExteriorTextWrap:(id)arg1 ;
-(id)presetKind;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(CGAffineTransform)computeFullTransform;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)imageDatasForReducingFileSizeWithAssociatedHints;
-(CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2 ;
-(Class)styleClass;
-(TSDMaskInfo *)maskInfo;
-(TSDBezierPath *)instantAlphaPath;
-(TSDImageAdjustments *)imageAdjustments;
-(TSPData *)enhancedImageData;
-(TSPData *)adjustedImageData;
-(BOOL)isMasked;
-(CGSize)defaultOriginalSize;
-(void)setOriginalImageData:(TSPData *)arg1 ;
-(id)copyWithContext:(id)arg1 style:(id)arg2 ;
-(id)geometryWithMask;
-(void)setImageAdjustments:(TSDImageAdjustments *)arg1 ;
-(void)setAdjustedImageData:(TSPData *)arg1 ;
-(void)setEnhancedImageData:(TSPData *)arg1 ;
-(void)setInterpretsUntaggedImageDataAsGeneric:(BOOL)arg1 ;
-(id)i_thumbnailForImageData:(id)arg1 ;
-(void)setThumbnailAdjustedImageData:(TSPData *)arg1 ;
-(id)defaultMaskInfoWithContext:(id)arg1 ;
-(id)defaultMaskInfo;
-(void)setMaskInfo:(TSDMaskInfo *)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 originalImageData:(id)arg5 ;
-(BOOL)interpretsUntaggedImageDataAsGeneric;
-(id)mediaDisplayName;
-(CGSize)rawDataSize;
-(void)setInstantAlphaPath:(TSDBezierPath *)arg1 ;
-(BOOL)maskCanBeReset;
-(id)updatedMaskInfoGeometryForImageDraggedBy:(CGPoint)arg1 ;
-(CGPoint)centerForReplacingWithNewMedia;
-(void)updateGeometryToReplaceMediaInfo:(id)arg1 ;
-(TSDBezierPath *)tracedPath;
-(TSPData *)thumbnailAdjustedImageData;
@end

