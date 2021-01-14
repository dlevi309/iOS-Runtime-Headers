/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel, UIStackView;

@interface HUActivityLoadingView : UIView {

	UIActivityIndicatorView* _activityIndicatorView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIStackView* _titleSpinnerStackView;
	UIStackView* _mainStackView;

}

@property (nonatomic,readonly) UIStackView * titleSpinnerStackView;                          //@synthesize titleSpinnerStackView=_titleSpinnerStackView - In the implementation block
@property (nonatomic,readonly) UIStackView * mainStackView;                                  //@synthesize mainStackView=_mainStackView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                          //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailTextLabel;                                    //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
+(id)watchedKeyPaths;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)detailTextLabel;
-(UIStackView *)mainStackView;
-(UIActivityIndicatorView *)activityIndicatorView;
-(UILabel *)textLabel;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 activityIndicatorStyle:(long long)arg2 ;
-(UIStackView *)titleSpinnerStackView;
-(void)_watchLabelsForContentAndResizeIfNecessary;
@end

