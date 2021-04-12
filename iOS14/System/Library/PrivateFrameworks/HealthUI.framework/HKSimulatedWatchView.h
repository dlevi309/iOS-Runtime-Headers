/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface HKSimulatedWatchView : UIView {

	UIView* _containerView;
	UIView* _watchScreenView;

}

@property (nonatomic,retain) UIView * containerView;                //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * watchScreenView;              //@synthesize watchScreenView=_watchScreenView - In the implementation block
-(void)setContainerView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)containerView;
-(id)initWithIconImage:(id)arg1 titleText:(id)arg2 detailText:(id)arg3 tintColor:(id)arg4 ;
-(id)initWithWatchView:(id)arg1 ;
-(UIView *)watchScreenView;
-(void)setWatchScreenView:(UIView *)arg1 ;
@end

