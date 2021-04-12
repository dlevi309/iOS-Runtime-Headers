/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@protocol CKFileTransfer, OS_dispatch_group;
@class NSURL, NSString, UITraitCollection, NSDate, NSObject, NSData, NSDictionary;

@interface CKMediaObject : NSObject <QLPreviewItem> {

	BOOL _isFromMe;
	BOOL _suppressPreviewForUnknownSender;
	BOOL _allowAutoplay;
	BOOL _forceInlinePreviewGeneration;
	BOOL _cachedValidPreviewExists;
	id<CKFileTransfer> _transfer;
	UITraitCollection* _transcriptTraitCollection;
	NSDate* _time;
	NSURL* _cachedHighQualityFileURL;
	NSObject*<OS_dispatch_group> _highQualityFetchInProgressGroup;
	unsigned long long _oopPreviewRequestCount;

}

@property (nonatomic,copy,readonly) NSString * previewFilenameExtension; 
@property (nonatomic,retain) id<CKFileTransfer> transfer;                                               //@synthesize transfer=_transfer - In the implementation block
@property (nonatomic,retain) NSURL * cachedHighQualityFileURL;                                          //@synthesize cachedHighQualityFileURL=_cachedHighQualityFileURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> highQualityFetchInProgressGroup;              //@synthesize highQualityFetchInProgressGroup=_highQualityFetchInProgressGroup - In the implementation block
@property (assign,nonatomic) BOOL isFromMe;                                                             //@synthesize isFromMe=_isFromMe - In the implementation block
@property (assign,nonatomic) BOOL suppressPreviewForUnknownSender;                                      //@synthesize suppressPreviewForUnknownSender=_suppressPreviewForUnknownSender - In the implementation block
@property (assign,nonatomic) BOOL forceInlinePreviewGeneration;                                         //@synthesize forceInlinePreviewGeneration=_forceInlinePreviewGeneration - In the implementation block
@property (assign,nonatomic) BOOL allowAutoplay;                                                        //@synthesize allowAutoplay=_allowAutoplay - In the implementation block
@property (assign,nonatomic) unsigned long long oopPreviewRequestCount;                                 //@synthesize oopPreviewRequestCount=_oopPreviewRequestCount - In the implementation block
@property (assign,nonatomic) BOOL cachedValidPreviewExists;                                             //@synthesize cachedValidPreviewExists=_cachedValidPreviewExists - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL; 
@property (nonatomic,copy,readonly) NSString * transferGUID; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) NSDictionary * transcoderUserInfo; 
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,copy,readonly) NSString * UTIType; 
@property (nonatomic,readonly) int mediaType; 
@property (nonatomic,readonly) BOOL canShareItem; 
@property (nonatomic,readonly) BOOL needsAnimation; 
@property (nonatomic,readonly) NSString * metricsCollectorMediaType; 
@property (nonatomic,readonly) BOOL generatePreviewOutOfProcess; 
@property (nonatomic,readonly) BOOL validatePreviewFormat; 
@property (nonatomic,retain) UITraitCollection * transcriptTraitCollection;                             //@synthesize transcriptTraitCollection=_transcriptTraitCollection - In the implementation block
@property (nonatomic,retain) NSDate * time;                                                             //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaClasses;
+(id)fallbackFilenamePrefix;
+(BOOL)isPreviewable;
+(BOOL)shouldUseTranscoderGeneratedPreviewSize;
+(Class)__ck_attachmentItemClass;
+(id)iconCache;
+(id)UTITypes;
+(BOOL)shouldScaleUpPreview;
+(BOOL)shouldShadePreview;
+(BOOL)canGeneratePreviewInMVSHostProcess;
-(id)fileManager;
-(void)export:(id)arg1 ;
-(NSDate *)time;
-(void)setTime:(NSDate *)arg1 ;
-(NSString *)mimeType;
-(id)invisibleInkEffectImageWithPreview:(id)arg1 ;
-(Class)balloonViewClassForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)_balloonViewForClassWithWidth:(double)arg1 orientation:(char)arg2 ;
-(id)_composeImageForBalloonView:(id)arg1 colorType:(char)arg2 ;
-(CGSize)bbSize;
-(id)composeImagesForEntryContentViewWidth:(double)arg1 ;
-(int)mediaType;
-(void)setTransfer:(id<CKFileTransfer>)arg1 ;
-(void)setSuppressPreviewForUnknownSender:(BOOL)arg1 ;
-(void)setForceInlinePreviewGeneration:(BOOL)arg1 ;
-(void)setAllowAutoplay:(BOOL)arg1 ;
-(id)initWithTransfer:(id)arg1 isFromMe:(BOOL)arg2 suppressPreview:(BOOL)arg3 forceInlinePreview:(BOOL)arg4 allowAutoplay:(BOOL)arg5 ;
-(NSDictionary *)transcoderUserInfo;
-(BOOL)forceInlinePreviewGeneration;
-(BOOL)isPromisedItem;
-(NSObject*<OS_dispatch_group>)highQualityFetchInProgressGroup;
-(void)fetchHighQualityFile:(/*^block*/id)arg1 ;
-(NSURL *)cachedHighQualityFileURL;
-(void)setCachedHighQualityFileURL:(NSURL *)arg1 ;
-(void)setHighQualityFetchInProgressGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id)pasteboardItemProvider;
-(BOOL)validatePreviewFormat;
-(id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(NSRange)arg2 ;
-(BOOL)generatePreviewOutOfProcess;
-(BOOL)allowAutoplay;
-(BOOL)isPreviewable;
-(void)setTranscriptTraitCollection:(UITraitCollection *)arg1 ;
-(unsigned long long)oopPreviewRequestCount;
-(void)setOopPreviewRequestCount:(unsigned long long)arg1 ;
-(BOOL)cachedValidPreviewExists;
-(void)setCachedValidPreviewExists:(BOOL)arg1 ;
-(BOOL)transcoderPreviewGenerationFailed;
-(NSString *)previewFilenameExtension;
-(id)savedPreviewFromURL:(id)arg1 forOrientation:(char)arg2 ;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)previewDispatchCache;
-(id)_transcodeControllerSharedInstance;
-(Class)previewBalloonViewClass;
-(Class)coloredBalloonViewClass;
-(id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(char)arg3 ;
-(id)previewCacheKeyWithOrientation:(char)arg1 ;
-(id)previewCachesFileURLWithOrientation:(char)arg1 extension:(id)arg2 generateIntermediaries:(BOOL)arg3 ;
-(void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(char)arg3 ;
-(id)location;
-(void)prewarmPreviewForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)_shouldBlacklistFromRichIcon;
-(Class)inlineStickerBalloonViewClass;
-(id)image:(id)arg1 withBackgroundColor:(id)arg2 ;
-(IMPreviewConstraints)_previewConstraintsForWidth:(double)arg1 ;
-(id)ASTCDataFromImage:(id)arg1 ;
-(void)_sampleImageEdges:(id)arg1 usingRect:(CGRect)arg2 forMostlyWhitePixels:(unsigned long long*)arg3 otherPixels:(unsigned long long*)arg4 ;
-(IMPreviewConstraints)transcodingPreviewConstraints;
-(NSString *)filename;
-(CGSize)transcodingPreviewPxSize;
-(id)JPEGDataFromImage:(id)arg1 ;
-(id)generateIconWithURL:(id)arg1 ;
-(id)icon;
-(id)subtitle;
-(id)richIcon;
-(id)_qlThumbnailGeneratorSharedGenerator;
-(BOOL)shouldShowViewer;
-(void)generateOOPPreviewForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)validPreviewExistsAtURL:(id)arg1 ;
-(NSString *)UTIType;
-(UITraitCollection *)transcriptTraitCollection;
-(BOOL)canExport;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(NSURL *)fileURL;
-(NSString *)metricsCollectorMediaType;
-(void)setIsFromMe:(BOOL)arg1 ;
-(NSString *)description;
-(BOOL)canShareItem;
-(NSString *)transferGUID;
-(NSData *)data;
-(id<CKFileTransfer>)transfer;
-(BOOL)needsAnimation;
-(id)initWithTransfer:(id)arg1 isFromMe:(BOOL)arg2 suppressPreview:(BOOL)arg3 forceInlinePreview:(BOOL)arg4 ;
-(BOOL)shouldBeQuickLooked;
-(BOOL)isFromMe;
-(CGSize)transcoderGeneratedSizeForConstraints:(IMPreviewConstraints)arg1 ;
-(BOOL)isDirectory;
-(NSURL *)previewItemURL;
-(BOOL)suppressPreviewForUnknownSender;
-(id)attachmentSummary:(unsigned long long)arg1 ;
-(void)cacheAndPersistPreview:(id)arg1 orientation:(char)arg2 ;
-(BOOL)shouldShowDisclosure;
-(id)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)downloadProgressImage;
-(id)downloadProgressString;
-(id)fileSizeString;
@end

