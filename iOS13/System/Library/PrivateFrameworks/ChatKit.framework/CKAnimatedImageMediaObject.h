/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageMediaObject.h>

@interface CKAnimatedImageMediaObject : CKImageMediaObject
+(id)UTITypes;
+(Class)__ck_attachmentItemClass;
-(id)notificationCenter;
-(id)generateAndPersistAnimatedPreviewFromImageData:(id)arg1 forWidth:(double)arg2 withTransferGUID:(id)arg3 isSticker:(BOOL)arg4 ;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)needsAnimation;
-(BOOL)validatePreviewFormat;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(id)generateThumbnailsForWidth:(double)arg1 isSticker:(BOOL)arg2 orientation:(char)arg3 ;
-(id)savedAnimatedPreviewFromURL:(id)arg1 forOrientation:(char)arg2 ;
-(/*^block*/id)imageEdgeEnhancementBlockIfNecessary;
-(id)thumbnailAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 imageData:(id)arg3 isSticker:(BOOL)arg4 orientation:(char)arg5 ;
-(id)scaledThumbnailFromThumbnail:(id)arg1 forWidth:(double)arg2 isSticker:(BOOL)arg3 ;
-(id)animatedImageForWidth:(double)arg1 ;
-(void)prewarmPreviewForWidth:(double)arg1 orientation:(char)arg2 ;
-(void)saveAnimatedPreview:(id)arg1 toURL:(id)arg2 forOrientation:(char)arg3 ;
@end

