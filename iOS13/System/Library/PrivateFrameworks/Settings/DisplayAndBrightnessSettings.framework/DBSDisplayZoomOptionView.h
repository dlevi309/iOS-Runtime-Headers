/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol DBSDisplayZoomOptionViewDelegate;
@class UILabel, DBSCheckmarkView, DBSDeviceDisplayZoomAnimationView, UIImpactFeedbackGenerator, NSString;

@interface DBSDisplayZoomOptionView : UIView <UIGestureRecognizerDelegate> {

	BOOL _selected;
	BOOL _highlight;
	unsigned long long _displayZoomOption;
	id<DBSDisplayZoomOptionViewDelegate> _delegate;
	UILabel* _optionNameLabel;
	DBSCheckmarkView* __checkmarkView;
	DBSDeviceDisplayZoomAnimationView* __packageView;
	UIImpactFeedbackGenerator* __feedbackGenerator;

}

@property (nonatomic,retain) UILabel * optionNameLabel;                                         //@synthesize optionNameLabel=_optionNameLabel - In the implementation block
@property (nonatomic,retain) DBSCheckmarkView * _checkmarkView;                                 //@synthesize _checkmarkView=__checkmarkView - In the implementation block
@property (nonatomic,retain) DBSDeviceDisplayZoomAnimationView * _packageView;                  //@synthesize _packageView=__packageView - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * _feedbackGenerator;                    //@synthesize _feedbackGenerator=__feedbackGenerator - In the implementation block
@property (assign,getter=highlighted,nonatomic) BOOL highlight;                                 //@synthesize highlight=_highlight - In the implementation block
@property (nonatomic,readonly) unsigned long long displayZoomOption;                            //@synthesize displayZoomOption=_displayZoomOption - In the implementation block
@property (assign,nonatomic,__weak) id<DBSDisplayZoomOptionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                   //@synthesize selected=_selected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<DBSDisplayZoomOptionViewDelegate>)delegate;
-(void)setDelegate:(id<DBSDisplayZoomOptionViewDelegate>)arg1 ;
-(BOOL)isSelected;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)highlighted;
-(UIImpactFeedbackGenerator *)_feedbackGenerator;
-(void)startAnimation;
-(void)stopAnimation;
-(void)setSelected:(BOOL)arg1 ;
-(void)setHighlight:(BOOL)arg1 ;
-(DBSCheckmarkView *)_checkmarkView;
-(DBSDeviceDisplayZoomAnimationView *)_packageView;
-(void)_configureView;
-(id)initWithFrame:(CGRect)arg1 displayZoomOption:(unsigned long long)arg2 ;
-(unsigned long long)displayZoomOption;
-(void)set_feedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)set_checkmarkView:(DBSCheckmarkView *)arg1 ;
-(void)_userDidTapOnView:(id)arg1 ;
-(void)set_packageView:(DBSDeviceDisplayZoomAnimationView *)arg1 ;
-(UILabel *)optionNameLabel;
-(void)setOptionNameLabel:(UILabel *)arg1 ;
@end

