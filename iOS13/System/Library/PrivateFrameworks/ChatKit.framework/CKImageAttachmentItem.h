/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAttachmentItem.h>

@interface CKImageAttachmentItem : CKAttachmentItem {

	BOOL _backgroundEnqueued;
	BOOL _useDefaultSize;
	CGSize _imageSize;

}

@property (assign) CGSize imageSize;                               //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) BOOL backgroundEnqueued;              //@synthesize backgroundEnqueued=_backgroundEnqueued - In the implementation block
@property (assign,nonatomic) BOOL useDefaultSize;                  //@synthesize useDefaultSize=_useDefaultSize - In the implementation block
+(id)UTITypes;
-(CGSize)size;
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(id)imageData;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(void)startDeferredSetup;
-(id)_newImageData;
-(BOOL)backgroundEnqueued;
-(CGSize)_calculateImageSize;
-(void)setUseDefaultSize:(BOOL)arg1 ;
-(BOOL)useDefaultSize;
-(void)setBackgroundEnqueued:(BOOL)arg1 ;
@end

