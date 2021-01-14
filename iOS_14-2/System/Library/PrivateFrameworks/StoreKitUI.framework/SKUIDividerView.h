/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface SKUIDividerView : UIView {

	long long _dividerOrientation;
	double _dividerSize;

}

@property (nonatomic,retain) UIColor * dividerColor; 
@property (assign,nonatomic) long long dividerOrientation;              //@synthesize dividerOrientation=_dividerOrientation - In the implementation block
@property (assign,nonatomic) double dividerSize;                        //@synthesize dividerSize=_dividerSize - In the implementation block
-(UIColor *)dividerColor;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDividerColor:(UIColor *)arg1 ;
-(double)dividerSize;
-(void)setDividerSize:(double)arg1 ;
-(void)setDividerOrientation:(long long)arg1 ;
-(long long)dividerOrientation;
@end

