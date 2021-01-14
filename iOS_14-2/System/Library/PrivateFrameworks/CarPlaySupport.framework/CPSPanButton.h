/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIButton.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, NSString;

@interface CPSPanButton : UIButton <UIGestureRecognizerDelegate> {

	long long _direction;
	UIView* _backgroundView;

}

@property (nonatomic,retain) UIView * backgroundView;               //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) long long direction;                 //@synthesize direction=_direction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)direction;
-(void)_updateColors;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(id)initWithDirection:(long long)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setupPanImages;
@end

