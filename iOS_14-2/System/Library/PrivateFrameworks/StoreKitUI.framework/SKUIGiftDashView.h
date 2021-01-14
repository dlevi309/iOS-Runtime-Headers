/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface SKUIGiftDashView : UIView {

	UIColor* _dashColor;
	CGSize _dashSize;
	double _dashSpacing;

}

@property (nonatomic,copy) UIColor * dashColor;               //@synthesize dashColor=_dashColor - In the implementation block
@property (assign,nonatomic) CGSize dashSize;                 //@synthesize dashSize=_dashSize - In the implementation block
@property (assign,nonatomic) double dashSpacing;              //@synthesize dashSpacing=_dashSpacing - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)dashSize;
-(void)setDashColor:(UIColor *)arg1 ;
-(void)setDashSize:(CGSize)arg1 ;
-(void)setDashSpacing:(double)arg1 ;
-(UIColor *)dashColor;
-(double)dashSpacing;
@end

