/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAVMediaObject.h>

@class UIImage, AVURLAsset;

@interface CKMovieMediaObject : CKAVMediaObject {

	BOOL _hasVideoTrack;
	BOOL _checkedVideoInfo;
	BOOL _isAutoloopVideo;
	BOOL _isAppleAutoloopVideo;
	BOOL _isJellyfishVideo;
	BOOL _isAutoloopVideoInitialized;
	BOOL _isAppleAutoloopVideoInitialized;
	BOOL _isJellyfishInitialized;
	UIImage* _thumbnail;
	AVURLAsset* _asset;
	CGSize _pxSize;

}

@property (assign,nonatomic) BOOL hasVideoTrack;                                //@synthesize hasVideoTrack=_hasVideoTrack - In the implementation block
@property (assign,nonatomic) CGSize pxSize;                                     //@synthesize pxSize=_pxSize - In the implementation block
@property (assign,nonatomic) BOOL checkedVideoInfo;                             //@synthesize checkedVideoInfo=_checkedVideoInfo - In the implementation block
@property (nonatomic,retain) AVURLAsset * asset;                                //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL isAutoloopVideo;                              //@synthesize isAutoloopVideo=_isAutoloopVideo - In the implementation block
@property (assign,nonatomic) BOOL isAppleAutoloopVideo;                         //@synthesize isAppleAutoloopVideo=_isAppleAutoloopVideo - In the implementation block
@property (assign,nonatomic) BOOL isJellyfishVideo;                             //@synthesize isJellyfishVideo=_isJellyfishVideo - In the implementation block
@property (assign,nonatomic) BOOL isAutoloopVideoInitialized;                   //@synthesize isAutoloopVideoInitialized=_isAutoloopVideoInitialized - In the implementation block
@property (assign,nonatomic) BOOL isAppleAutoloopVideoInitialized;              //@synthesize isAppleAutoloopVideoInitialized=_isAppleAutoloopVideoInitialized - In the implementation block
@property (assign,nonatomic) BOOL isJellyfishInitialized;                       //@synthesize isJellyfishInitialized=_isJellyfishInitialized - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                               //@synthesize thumbnail=_thumbnail - In the implementation block
+(CGImageRef)playButtonPreviewForCGImage:(CGImageRef)arg1 scale:(double)arg2 isFromMe:(BOOL)arg3 ;
+(id)UTITypes;
+(id)attachmentSummary:(unsigned long long)arg1 ;
+(id)fallbackFilenamePrefix;
+(BOOL)isPreviewable;
+(id)playButtonPreviewForUIImage:(id)arg1 scale:(double)arg2 contentAlignmentInsets:(UIEdgeInsets)arg3 ;
+(Class)__ck_attachmentItemClass;
-(int)mediaType;
-(AVURLAsset *)asset;
-(void)setAsset:(AVURLAsset *)arg1 ;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(BOOL)isAutoloopVideo;
-(id)previewItemTitle;
-(void)export:(id)arg1 ;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)canExport;
-(BOOL)isJellyfishVideo;
-(void)setIsJellyfishVideo:(BOOL)arg1 ;
-(Class)balloonViewClassForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)validatePreviewFormat;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(CGSize)bbSize;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(Class)previewBalloonViewClass;
-(id)previewCacheKeyWithOrientation:(char)arg1 ;
-(id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(char)arg3 ;
-(BOOL)isAutoloopVideoInitialized;
-(BOOL)_assetContainsMetadataKey:(id)arg1 ;
-(void)setIsAutoloopVideoInitialized:(BOOL)arg1 ;
-(BOOL)isAppleAutoloopVideoInitialized;
-(void)setIsAppleAutoloopVideoInitialized:(BOOL)arg1 ;
-(BOOL)isJellyfishInitialized;
-(BOOL)isAppleAutoloopVideo;
-(BOOL)hasNoVideoTrack;
-(CGSize)pxSize;
-(BOOL)checkedVideoInfo;
-(void)updateVideoInfo;
-(void)setCheckedVideoInfo:(BOOL)arg1 ;
-(BOOL)hasVideoTrack;
-(void)setHasVideoTrack:(BOOL)arg1 ;
-(void)setPxSize:(CGSize)arg1 ;
-(void)setIsAutoloopVideo:(BOOL)arg1 ;
-(void)setIsAppleAutoloopVideo:(BOOL)arg1 ;
-(void)setIsJellyfishInitialized:(BOOL)arg1 ;
@end

