/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)imageSize;
-(CGSize)size;
-(CGSize)_calculateImageSize;
-(void)setUseDefaultSize:(BOOL)arg1 ;
-(BOOL)backgroundEnqueued;
-(BOOL)useDefaultSize;
-(void)setBackgroundEnqueued:(BOOL)arg1 ;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(void)startDeferredSetup;
-(id)imageData;
-(id)_newImageData;
-(void)setImageSize:(CGSize)arg1 ;
@end

