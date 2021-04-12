/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@protocol CKFileTransfer, OS_dispatch_group;
@class NSURL, NSString, UITraitCollection, NSObject, NSData, NSDictionary;

@interface CKMediaObject : NSObject <QLPreviewItem> {

	BOOL _isFromMe;
	BOOL _suppressPreviewForUnknownSender;
	BOOL _forceInlinePreviewGeneration;
	id<CKFileTransfer> _transfer;
	UITraitCollection* _transcriptTraitCollection;
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
@property (assign,nonatomic) unsigned long long oopPreviewRequestCount;                                 //@synthesize oopPreviewRequestCount=_oopPreviewRequestCount - In the implementation block
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
@property (nonatomic,readonly) BOOL generatePreviewOutOfProcess; 
@property (nonatomic,readonly) BOOL validatePreviewFormat; 
@property (nonatomic,retain) UITraitCollection * transcriptTraitCollection;                             //@synthesize transcriptTraitCollection=_transcriptTraitCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
+(BOOL)shouldScaleUpPreview;
+(id)UTITypes;
+(BOOL)shouldShadePreview;
+(id)iconCache;
+(id)attachmentSummary:(unsigned long long)arg1 ;
+(id)fallbackFilenamePrefix;
+(id)mediaClasses;
+(BOOL)isPreviewable;
+(BOOL)shouldUseTranscoderGeneratedPreviewSize;
+(Class)__ck_attachmentItemClass;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSData *)data;
-(BOOL)isDirectory;
-(id)title;
-(NSString *)filename;
-(NSURL *)fileURL;
-(id)location;
-(id)subtitle;
-(int)mediaType;
-(NSString *)mimeType;
-(id)icon;
-(BOOL)isFromMe;
-(void)setIsFromMe:(BOOL)arg1 ;
-(NSDictionary *)transcoderUserInfo;
-(id)fileManager;
-(NSURL *)previewItemURL;
-(void)export:(id)arg1 ;
-(UITraitCollection *)transcriptTraitCollection;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(NSString *)UTIType;
-(BOOL)canShareItem;
-(id)pasteboardItem;
-(BOOL)needsAnimation;
-(BOOL)canExport;
-(id<CKFileTransfer>)transfer;
-(BOOL)shouldBeQuickLooked;
-(BOOL)suppressPreviewForUnknownSender;
-(Class)balloonViewClassForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)composeImagesForEntryContentViewWidth:(double)arg1 ;
-(BOOL)shouldShowViewer;
-(NSString *)transferGUID;
-(id)initWithTransfer:(id)arg1 isFromMe:(BOOL)arg2 suppressPreview:(BOOL)arg3 forceInlinePreview:(BOOL)arg4 ;
-(void)setTransfer:(id<CKFileTransfer>)arg1 ;
-(void)setSuppressPreviewForUnknownSender:(BOOL)arg1 ;
-(void)setForceInlinePreviewGeneration:(BOOL)arg1 ;
-(BOOL)forceInlinePreviewGeneration;
-(NSObject*<OS_dispatch_group>)highQualityFetchInProgressGroup;
-(void)fetchHighQualityFile:(/*^block*/id)arg1 ;
-(NSURL *)cachedHighQualityFileURL;
-(void)setHighQualityFetchInProgressGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setCachedHighQualityFileURL:(NSURL *)arg1 ;
-(BOOL)generatePreviewOutOfProcess;
-(BOOL)validatePreviewFormat;
-(BOOL)isPromisedItem;
-(void)setTranscriptTraitCollection:(UITraitCollection *)arg1 ;
-(unsigned long long)oopPreviewRequestCount;
-(void)setOopPreviewRequestCount:(unsigned long long)arg1 ;
-(BOOL)transcoderPreviewGenerationFailed;
-(NSString *)previewFilenameExtension;
-(id)savedPreviewFromURL:(id)arg1 forOrientation:(char)arg2 ;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(BOOL)isPreviewable;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(CGSize)bbSize;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(Class)previewBalloonViewClass;
-(Class)coloredBalloonViewClass;
-(id)previewCacheKeyWithOrientation:(char)arg1 ;
-(id)previewDispatchCache;
-(id)previewCachesFileURLWithOrientation:(char)arg1 extension:(id)arg2 ;
-(id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(char)arg3 ;
-(void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(char)arg3 ;
-(void)generateOOPPreviewForWidth:(double)arg1 orientation:(char)arg2 ;
-(void)prewarmPreviewForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)_qlThumbnailGeneratorSharedGenerator;
-(CGSize)transcoderGeneratedSizeForConstraints:(IMPreviewConstraints)arg1 ;
-(void)cacheAndPersistPreview:(id)arg1 orientation:(char)arg2 ;
-(BOOL)shouldShowDisclosure;
-(id)fileSizeString;
-(id)downloadProgressImage;
-(id)downloadProgressString;
-(id)richIcon;
-(Class)inlineStickerBalloonViewClass;
-(BOOL)validPreviewExistsAtURL:(id)arg1 ;
-(IMPreviewConstraints)_previewConstraintsForWidth:(double)arg1 ;
-(id)_transcodeControllerSharedInstance;
-(void)_sampleImageEdges:(id)arg1 usingRect:(CGRect)arg2 forMostlyWhitePixels:(unsigned long long*)arg3 otherPixels:(unsigned long long*)arg4 ;
-(IMPreviewConstraints)transcodingPreviewConstraints;
-(CGSize)transcodingPreviewPxSize;
-(id)ASTCDataFromImage:(id)arg1 ;
-(id)JPEGDataFromImage:(id)arg1 ;
@end

