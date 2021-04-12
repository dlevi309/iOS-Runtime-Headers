/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCheckView:(WGCheckView *)arg1 ;
-(id)_checkView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(BOOL)_isFrozen;
-(void)_setFrozen:(BOOL)arg1 ;
-(void)setCircleView:(UIImageView *)arg1 ;
-(id)_circleView;
-(void)_setChecked:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_configureCircleViewIfNecessary;
-(void)_configureCheckViewIfNecessary;
@end

