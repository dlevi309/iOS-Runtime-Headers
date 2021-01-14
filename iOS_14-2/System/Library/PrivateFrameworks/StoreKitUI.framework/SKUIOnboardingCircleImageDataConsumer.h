/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>

@class UIColor;

@interface SKUIOnboardingCircleImageDataConsumer : SKUIImageDataConsumer {

	CGSize _outputSize;
	UIColor* _tintColor;
	BOOL _usesSaturationFilter;

}

@property (assign,nonatomic) CGSize outputSize;                      //@synthesize outputSize=_outputSize - In the implementation block
@property (nonatomic,copy) UIColor * tintColor;                      //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) BOOL usesSaturationFilter;              //@synthesize usesSaturationFilter=_usesSaturationFilter - In the implementation block
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setOutputSize:(CGSize)arg1 ;
-(UIColor *)tintColor;
-(CGSize)outputSize;
-(id)imageForImage:(id)arg1 ;
-(void)setUsesSaturationFilter:(BOOL)arg1 ;
-(BOOL)usesSaturationFilter;
-(id)_saturationBackgroundImageWithSize:(CGSize)arg1 ;
@end

