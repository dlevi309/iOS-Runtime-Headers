/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMediaObject.h>

@class CKImageData, NSURL, NSString, PHLivePhoto, UIImage;

@interface CKImageMediaObject : CKMediaObject {

	CKImageData* _imageData;
	CKImageData* _backgroundImageData;
	NSURL* _appendedBundleURL;
	CGSize _originalSize;
	NSString* _irisVideoPath;
	BOOL _isSticker;
	PHLivePhoto* _livePhoto;
	UIImage* _thumbnail;

}

@property (nonatomic,readonly) BOOL isSticker;                       //@synthesize isSticker=_isSticker - In the implementation block
@property (nonatomic,readonly) CKImageData * imageData; 
@property (nonatomic,retain) UIImage * thumbnail;                    //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) BOOL isIrisAsset; 
@property (nonatomic,readonly) PHLivePhoto * livePhoto;              //@synthesize livePhoto=_livePhoto - In the implementation block
+(id)fallbackFilenamePrefix;
+(BOOL)isPreviewable;
+(Class)imageDataClass;
+(Class)__ck_attachmentItemClass;
+(id)UTITypes;
-(void)export:(id)arg1 ;
-(PHLivePhoto *)livePhoto;
-(CGSize)bbSize;
-(int)mediaType;
-(UIImage *)thumbnail;
-(id)pasteboardItemProvider;
-(BOOL)validatePreviewFormat;
-(id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(NSRange)arg2 ;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(id)getIrisVideoPath;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)location;
-(BOOL)isSticker;
-(BOOL)canExport;
-(id)metricsCollectorMediaType;
-(BOOL)canShareItem;
-(BOOL)isIrisAsset;
-(id)calculateIrisVideoPath;
-(CKImageData *)imageData;
-(id)initWithTransfer:(id)arg1 isFromMe:(BOOL)arg2 suppressPreview:(BOOL)arg3 forceInlinePreview:(BOOL)arg4 ;
-(CGSize)originalSize;
-(id)previewItemTitle;
-(id)previewItemURL;
-(id)attachmentSummary:(unsigned long long)arg1 ;
-(void)setThumbnail:(UIImage *)arg1 ;
@end

