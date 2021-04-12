/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDashColor:(UIColor *)arg1 ;
-(void)setDashSize:(CGSize)arg1 ;
-(void)setDashSpacing:(double)arg1 ;
-(UIColor *)dashColor;
-(CGSize)dashSize;
-(double)dashSpacing;
@end

