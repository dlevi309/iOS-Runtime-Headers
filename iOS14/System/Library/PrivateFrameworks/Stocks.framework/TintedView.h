/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIColor;

@interface TintedView : UIView {

	UIImage* _image;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIImage * image;                  //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)init;
-(UIImage *)image;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)tintColor;
@end

