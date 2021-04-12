/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIImage.h>

@class UIColor;

@interface SKUICompressedImage : UIImage {

	long long _cornerType;
	double _cornerRadius;
	double _borderWidth;
	UIColor* _borderColor;

}

@property (assign,nonatomic) long long cornerType;               //@synthesize cornerType=_cornerType - In the implementation block
@property (assign,nonatomic) double cornerRadius;                //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double borderWidth;                 //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
-(UIColor *)borderColor;
-(double)cornerRadius;
-(id)description;
-(double)borderWidth;
-(void)setCornerRadius:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(long long)cornerType;
-(void)setCornerType:(long long)arg1 ;
@end

