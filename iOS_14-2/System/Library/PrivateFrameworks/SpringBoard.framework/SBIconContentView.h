/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface SBIconContentView : UIView {

	long long _orientation;
	UIView* _contentView;

}

@property (assign,nonatomic) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) UIView * contentView;               //@synthesize contentView=_contentView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithOrientation:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setContentView:(UIView *)arg1 ;
-(long long)orientation;
-(UIView *)contentView;
-(void)setOrientation:(long long)arg1 ;
@end

