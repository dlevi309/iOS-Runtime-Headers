/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAVMediaObject.h>

@class UIImage, AVURLAsset;

@interface CKMovieMediaObject : CKAVMediaObject {

	BOOL _hasVideoTrack;
	BOOL _checkedVideoInfo;
	BOOL _isAutoloopVideo;
	BOOL _isJellyfishVideo;
	BOOL _isAutoloopVideoInitialized;
	BOOL _isJellyfishInitialized;
	UIImage* _thumbnail;
	AVURLAsset* _asset;
	CGSize _pxSize;

}

@property (assign,nonatomic) BOOL hasVideoTrack;                           //@synthesize hasVideoTrack=_hasVideoTrack - In the implementation block
@property (assign,nonatomic) CGSize pxSize;                                //@synthesize pxSize=_pxSize - In the implementation block
@property (assign,nonatomic) BOOL checkedVideoInfo;                        //@synthesize checkedVideoInfo=_checkedVideoInfo - In the implementation block
@property (nonatomic,retain) AVURLAsset * asset;                           //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL isAutoloopVideo;                         //@synthesize isAutoloopVideo=_isAutoloopVideo - In the implementation block
@property (assign,nonatomic) BOOL isJellyfishVideo;                        //@synthesize isJellyfishVideo=_isJellyfishVideo - In the implementation block
@property (assign,nonatomic) BOOL isAutoloopVideoInitialized;              //@synthesize isAutoloopVideoInitialized=_isAutoloopVideoInitialized - In the implementation block
@property (assign,nonatomic) BOOL isJellyfishInitialized;                  //@synthesize isJellyfishInitialized=_isJellyfishInitialized - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                          //@synthesize thumbnail=_thumbnail - In the implementation block
+(id)fallbackFilenamePrefix;
+(BOOL)isPreviewable;
+(id)playButtonPreviewForUIImage:(id)arg1 scale:(double)arg2 contentAlignmentInsets:(UIEdgeInsets)arg3 ;
+(CGImageRef)playButtonPreviewForCGImage:(CGImageRef)arg1 scale:(double)arg2 isFromMe:(BOOL)arg3 ;
+(Class)__ck_attachmentItemClass;
+(id)UTITypes;
-(void)export:(id)arg1 ;
-(void)setAsset:(AVURLAsset *)arg1 ;
-(BOOL)isJellyfishVideo;
-(void)setIsJellyfishVideo:(BOOL)arg1 ;
-(Class)balloonViewClassForWidth:(double)arg1 orientation:(char)arg2 ;
-(CGSize)bbSize;
-(CGSize)pxSize;
-(int)mediaType;
-(UIImage *)thumbnail;
-(BOOL)validatePreviewFormat;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(void)setPxSize:(CGSize)arg1 ;
-(AVURLAsset *)asset;
-(Class)previewBalloonViewClass;
-(BOOL)hasVideoTrack;
-(id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(char)arg3 ;
-(id)previewCacheKeyWithOrientation:(char)arg1 ;
-(BOOL)isAutoloopVideo;
-(BOOL)isAutoloopVideoInitialized;
-(void)setIsAutoloopVideoInitialized:(BOOL)arg1 ;
-(BOOL)_assetContainsMetadataKey:(id)arg1 ;
-(BOOL)isJellyfishInitialized;
-(BOOL)hasNoVideoTrack;
-(void)prewarmPreviewForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)checkedVideoInfo;
-(void)updateVideoInfo;
-(void)setCheckedVideoInfo:(BOOL)arg1 ;
-(void)setHasVideoTrack:(BOOL)arg1 ;
-(void)setIsAutoloopVideo:(BOOL)arg1 ;
-(void)setIsJellyfishInitialized:(BOOL)arg1 ;
-(BOOL)canExport;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)metricsCollectorMediaType;
-(id)previewItemTitle;
-(id)attachmentSummary:(unsigned long long)arg1 ;
-(void)setThumbnail:(UIImage *)arg1 ;
@end

