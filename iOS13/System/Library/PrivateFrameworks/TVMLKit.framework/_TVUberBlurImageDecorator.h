/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageDecorator.h>

@class UIColor;

@interface _TVUberBlurImageDecorator : TVImageDecorator {

	UIColor* _gradientColor;
	unsigned long long _blurType;
	unsigned long long _blurStyle;

}

@property (nonatomic,retain) UIColor * gradientColor;                   //@synthesize gradientColor=_gradientColor - In the implementation block
@property (assign,nonatomic) unsigned long long blurType;               //@synthesize blurType=_blurType - In the implementation block
@property (assign,nonatomic) unsigned long long blurStyle;              //@synthesize blurStyle=_blurStyle - In the implementation block
-(unsigned long long)blurStyle;
-(void)setBlurStyle:(unsigned long long)arg1 ;
-(UIColor *)gradientColor;
-(void)setGradientColor:(UIColor *)arg1 ;
-(id)decoratorIdentifier;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(unsigned long long)blurType;
-(void)setBlurType:(unsigned long long)arg1 ;
@end

