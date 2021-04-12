/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface SBIconContentView : UIView {

	long long _orientation;
	UIView* _contentView;

}

@property (assign,nonatomic) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) UIView * contentView;               //@synthesize contentView=_contentView - In the implementation block
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithOrientation:(long long)arg1 ;
@end

