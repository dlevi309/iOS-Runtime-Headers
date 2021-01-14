/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)UTITypes;
+(BOOL)shouldScaleUpPreview;
-(CGSize)imageSize;
-(CGSize)size;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)animatedPreviewURL;
-(id)animatedPreviewURL:(BOOL)arg1 ;
-(id)_savedPreviewFromURL:(id)arg1 ;
-(id)_newImageData;
-(id)thumbnailAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 withImageData:(id)arg3 ;
-(id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 ;
-(void)setAnimatedPreviewURL:(NSURL *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
@end

