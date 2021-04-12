/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <MediaControls/MediaControlsVolumeSlider.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MediaControlsMasterVolumeSliderDelegate;
@class UIView, UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UILongPressGestureRecognizer, NSString;

@interface MediaControlsMasterVolumeSlider : MediaControlsVolumeSlider <UIGestureRecognizerDelegate> {

	UIView* _growingThumbView;
	double _forcePercent;
	float _initialX;
	BOOL _syncingEnabled;
	id<MediaControlsMasterVolumeSliderDelegate> _delegate;
	long long _syncState;
	UIImpactFeedbackGenerator* _positiveFeedbackGenerator;
	UINotificationFeedbackGenerator* _negativeFeedbackGenerator;
	UILongPressGestureRecognizer* _gestureRecognizer;

}

@property (assign,nonatomic) long long syncState;                                                      //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * positiveFeedbackGenerator;                    //@synthesize positiveFeedbackGenerator=_positiveFeedbackGenerator - In the implementation block
@property (nonatomic,retain) UINotificationFeedbackGenerator * negativeFeedbackGenerator;              //@synthesize negativeFeedbackGenerator=_negativeFeedbackGenerator - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * gestureRecognizer;                         //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,getter=isSyncingEnabled,nonatomic) BOOL syncingEnabled;                              //@synthesize syncingEnabled=_syncingEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<MediaControlsMasterVolumeSliderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MediaControlsMasterVolumeSliderDelegate>)delegate;
-(void)setDelegate:(id<MediaControlsMasterVolumeSliderDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)gestureRecognizer;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)createThumbView;
-(void)handleLongPress:(id)arg1 ;
-(long long)syncState;
-(BOOL)isSyncingEnabled;
-(void)setSyncState:(long long)arg1 ;
-(void)setSyncingEnabled:(BOOL)arg1 ;
-(void)shrinkThumbAfterDelay:(double)arg1 ;
-(UIImpactFeedbackGenerator *)positiveFeedbackGenerator;
-(void)setPositiveFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(UINotificationFeedbackGenerator *)negativeFeedbackGenerator;
-(void)setNegativeFeedbackGenerator:(UINotificationFeedbackGenerator *)arg1 ;
@end

