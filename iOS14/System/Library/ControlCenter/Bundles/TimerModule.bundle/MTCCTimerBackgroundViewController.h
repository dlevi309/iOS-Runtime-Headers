/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/TimerModule.bundle/TimerModule
*/

#import <TimerModule/TimerModule-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@protocol MTCCTimerBackgroundViewControllerDelegate;
@class MTCCTimer, MTCCRoundButton, UIView, UILabel, CADisplayLink, NSDateComponentsFormatter, NSString;

@interface MTCCTimerBackgroundViewController : UIViewController <_UICursorInteractionDelegate> {

	id<MTCCTimerBackgroundViewControllerDelegate> _delegate;
	MTCCTimer* _timer;
	MTCCRoundButton* _button;
	UIView* _headerView;
	UILabel* _titleLabel;
	UILabel* _timeLabel;
	CADisplayLink* _displayLink;
	NSDateComponentsFormatter* _dateComponentsFormatter;

}

@property (nonatomic,retain) MTCCRoundButton * button;                                                   //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                        //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                                        //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * dateComponentsFormatter;                        //@synthesize dateComponentsFormatter=_dateComponentsFormatter - In the implementation block
@property (assign,nonatomic,__weak) id<MTCCTimerBackgroundViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MTCCTimer * timer;                                                            //@synthesize timer=_timer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(MTCCRoundButton *)button;
-(UILabel *)timeLabel;
-(void)setHeaderView:(UIView *)arg1 ;
-(MTCCTimer *)timer;
-(void)buttonTapped:(id)arg1 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(id)cursorInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)setTimer:(MTCCTimer *)arg1 ;
-(id)init;
-(id<MTCCTimerBackgroundViewControllerDelegate>)delegate;
-(void)setButton:(MTCCRoundButton *)arg1 ;
-(void)_updateLabels;
-(void)displayLinkTick:(id)arg1 ;
-(void)setDelegate:(id<MTCCTimerBackgroundViewControllerDelegate>)arg1 ;
-(void)setDateComponentsFormatter:(NSDateComponentsFormatter *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(UIView *)headerView;
-(void)handleContentSizeChange:(id)arg1 ;
-(NSDateComponentsFormatter *)dateComponentsFormatter;
-(void)_reloadForCurrentState;
-(void)dealloc;
@end

