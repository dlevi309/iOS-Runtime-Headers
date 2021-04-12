/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)direction;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberOfSegments:(long long)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(UIColor *)endColor;
-(long long)numberOfSegments;
-(UIColor *)startColor;
-(void)drawRect:(CGRect)arg1 ;
-(void)setStartColor:(UIColor *)arg1 ;
-(void)setEndColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

