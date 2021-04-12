/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface PKRightAngleRotatingView : UIView {

	UIView* _rotatedView;
	long long _orientation;

}

@property (nonatomic,readonly) UIView * rotatedView;              //@synthesize rotatedView=_rotatedView - In the implementation block
@property (assign,nonatomic) long long orientation;               //@synthesize orientation=_orientation - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_dimensionsAreRotated;
-(id)initWithRotatedView:(id)arg1 ;
-(UIView *)rotatedView;
-(long long)orientation;
-(void)sizeToFit;
-(void)setOrientation:(long long)arg1 ;
-(void)updateTransform;
@end

