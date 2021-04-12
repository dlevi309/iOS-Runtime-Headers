/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	UILongPressGestureRecognizer* _longPressRecognizer;

}

@property (assign,nonatomic) long long syncState;                                                      //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * positiveFeedbackGenerator;                    //@synthesize positiveFeedbackGenerator=_positiveFeedbackGenerator - In the implementation block
@property (nonatomic,retain) UINotificationFeedbackGenerator * negativeFeedbackGenerator;              //@synthesize negativeFeedbackGenerator=_negativeFeedbackGenerator - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressRecognizer;                       //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
@property (assign,getter=isSyncingEnabled,nonatomic) BOOL syncingEnabled;                              //@synthesize syncingEnabled=_syncingEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<MediaControlsMasterVolumeSliderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSyncingEnabled:(BOOL)arg1 ;
-(long long)syncState;
-(void)setSyncState:(long long)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isSyncingEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILongPressGestureRecognizer *)longPressRecognizer;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id<MediaControlsMasterVolumeSliderDelegate>)delegate;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(UIImpactFeedbackGenerator *)positiveFeedbackGenerator;
-(void)setLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)setDelegate:(id<MediaControlsMasterVolumeSliderDelegate>)arg1 ;
-(UINotificationFeedbackGenerator *)negativeFeedbackGenerator;
-(void)layoutSubviews;
-(void)setPositiveFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)shrinkThumbAfterDelay:(double)arg1 ;
-(id)createThumbView;
-(void)setNegativeFeedbackGenerator:(UINotificationFeedbackGenerator *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
@end

