/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageAttachmentItem.h>

@class NSURL;

@interface CKAnimatedImageAttachmentItem : CKImageAttachmentItem {

	NSURL* _animatedPreviewURL;
	CGSize _imageSize;

}

@property (nonatomic,retain) NSURL * animatedPreviewURL;              //@synthesize animatedPreviewURL=_animatedPreviewURL - In the implementation block
@property (assign) CGSize imageSize;                                  //@synthesize imageSize=_imageSize - In the implementation block
+(BOOL)shouldScaleUpPreview;
+(id)UTITypes;
-(CGSize)size;
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)animatedPreviewURL;
-(id)_savedPreviewFromURL:(id)arg1 ;
-(id)_newImageData;
-(id)thumbnailAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 withImageData:(id)arg3 ;
-(id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 ;
-(void)setAnimatedPreviewURL:(NSURL *)arg1 ;
@end

