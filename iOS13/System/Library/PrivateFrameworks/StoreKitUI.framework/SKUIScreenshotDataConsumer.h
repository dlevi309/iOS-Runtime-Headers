/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStyledImageDataConsumer.h>

@interface SKUIScreenshotDataConsumer : SKUIStyledImageDataConsumer {

	BOOL _forcesPortrait;

}

@property (assign,nonatomic) BOOL forcesPortrait;              //@synthesize forcesPortrait=_forcesPortrait - In the implementation block
+(id)consumer;
+(id)consumerWithScreenshotSize:(CGSize)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(void)setForcesPortrait:(BOOL)arg1 ;
-(id)imageForColor:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)forcesPortrait;
@end

