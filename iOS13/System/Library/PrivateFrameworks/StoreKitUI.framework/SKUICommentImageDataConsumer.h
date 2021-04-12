/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStyledImageDataConsumer.h>

@interface SKUICommentImageDataConsumer : SKUIStyledImageDataConsumer {

	/*^block*/id _completionBlock;

}

@property (copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(id)_scaledImageWithBounds:(CGSize)arg1 contentRect:(CGRect)arg2 drawBlock:(/*^block*/id)arg3 ;
@end

