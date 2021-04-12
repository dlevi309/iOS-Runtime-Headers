/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol DBSDeviceAppIconSizeOptionViewDelegate;
@class UIStackView, DBSDeviceAppIconSizeAnimationView, UILabel, DBSCheckmarkView, UIImpactFeedbackGenerator, SBSHomeScreenService, NSString;

@interface DBSDeviceAppIconSizeOptionView : UIView <UIGestureRecognizerDelegate> {

	BOOL _highlight;
	id<DBSDeviceAppIconSizeOptionViewDelegate> _delegate;
	unsigned long long _appIconSizeOption;
	UIStackView* __stackView;
	DBSDeviceAppIconSizeAnimationView* __packageView;
	UILabel* __label;
	DBSCheckmarkView* __checkmarkView;
	UIImpactFeedbackGenerator* __feedbackGenerator;
	SBSHomeScreenService* __homeScreenService;

}

@property (nonatomic,retain) UIStackView * _stackView;                                                //@synthesize _stackView=__stackView - In the implementation block
@property (nonatomic,retain) DBSDeviceAppIconSizeAnimationView * _packageView;                        //@synthesize _packageView=__packageView - In the implementation block
@property (nonatomic,retain) UILabel * _label;                                                        //@synthesize _label=__label - In the implementation block
@property (nonatomic,retain) DBSCheckmarkView * _checkmarkView;                                       //@synthesize _checkmarkView=__checkmarkView - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * _feedbackGenerator;                          //@synthesize _feedbackGenerator=__feedbackGenerator - In the implementation block
@property (assign,getter=highlighted,nonatomic) BOOL highlight;                                       //@synthesize highlight=_highlight - In the implementation block
@property (nonatomic,retain) SBSHomeScreenService * _homeScreenService;                               //@synthesize _homeScreenService=__homeScreenService - In the implementation block
@property (assign,nonatomic,__weak) id<DBSDeviceAppIconSizeOptionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long appIconSizeOption;                                  //@synthesize appIconSizeOption=_appIconSizeOption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<DBSDeviceAppIconSizeOptionViewDelegate>)delegate;
-(void)setDelegate:(id<DBSDeviceAppIconSizeOptionViewDelegate>)arg1 ;
-(UILabel *)_label;
-(void)reload;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)highlighted;
-(UIStackView *)_stackView;
-(UIImpactFeedbackGenerator *)_feedbackGenerator;
-(void)startAnimation;
-(void)stopAnimation;
-(void)setHighlight:(BOOL)arg1 ;
-(DBSCheckmarkView *)_checkmarkView;
-(DBSDeviceAppIconSizeAnimationView *)_packageView;
-(void)_configureView;
-(void)set_feedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)set_label:(UILabel *)arg1 ;
-(void)set_checkmarkView:(DBSCheckmarkView *)arg1 ;
-(void)set_stackView:(UIStackView *)arg1 ;
-(void)_userDidTapOnView:(id)arg1 ;
-(SBSHomeScreenService *)_homeScreenService;
-(void)set_homeScreenService:(SBSHomeScreenService *)arg1 ;
-(unsigned long long)appIconSizeOption;
-(void)set_packageView:(DBSDeviceAppIconSizeAnimationView *)arg1 ;
-(void)_updateViewForCurrentDeviceAppIconSize;
-(id)initWithFrame:(CGRect)arg1 appIconSizeOption:(unsigned long long)arg2 ;
@end

