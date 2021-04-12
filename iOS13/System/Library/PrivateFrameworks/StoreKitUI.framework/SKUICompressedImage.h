/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)borderColor;
-(long long)cornerType;
-(void)setCornerType:(long long)arg1 ;
@end

