/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

