/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)dynamicBackgroundColor;
-(long long)direction;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)backgroundView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)_updateColors;
-(id)initWithDirection:(long long)arg1 ;
-(void)_setupPanImages;
@end

