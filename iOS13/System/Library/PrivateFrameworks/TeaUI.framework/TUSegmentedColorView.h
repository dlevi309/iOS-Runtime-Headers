/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface TUSegmentedColorView : UIView {

	 startColor;
	 endColor;
	 numberOfSegments;
	 direction;

}

@property (retain,nonatomic) UIColor * startColor; 
@property (retain,nonatomic) UIColor * endColor; 
@property (assign,nonatomic) long long numberOfSegments; 
@property (assign,nonatomic) long long direction; 
-(id)initWithCoder:(id)arg1 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(long long)numberOfSegments;
-(void)setStartColor:(UIColor *)arg1 ;
-(void)setEndColor:(UIColor *)arg1 ;
-(UIColor *)startColor;
-(UIColor *)endColor;
-(void)setNumberOfSegments:(long long)arg1 ;
@end

