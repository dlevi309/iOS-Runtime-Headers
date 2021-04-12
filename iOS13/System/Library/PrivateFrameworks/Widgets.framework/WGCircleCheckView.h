/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, WGCheckView;

@interface WGCircleCheckView : UIView {

	UIImageView* _circleView;
	WGCheckView* _checkView;

}

@property (getter=_circleView,nonatomic,retain) UIImageView * circleView;              //@synthesize circleView=_circleView - In the implementation block
@property (getter=_checkView,nonatomic,retain) WGCheckView * checkView;                //@synthesize checkView=_checkView - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_checkView;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(BOOL)_isFrozen;
-(void)_setFrozen:(BOOL)arg1 ;
-(void)setCircleView:(UIImageView *)arg1 ;
-(id)_circleView;
-(void)_setChecked:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_configureCircleViewIfNecessary;
-(void)_configureCheckViewIfNecessary;
-(void)setCheckView:(WGCheckView *)arg1 ;
@end

