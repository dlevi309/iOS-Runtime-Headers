/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)dividerColor;
-(void)setDividerColor:(UIColor *)arg1 ;
-(void)setDividerOrientation:(long long)arg1 ;
-(void)setDividerSize:(double)arg1 ;
-(long long)dividerOrientation;
-(double)dividerSize;
@end

