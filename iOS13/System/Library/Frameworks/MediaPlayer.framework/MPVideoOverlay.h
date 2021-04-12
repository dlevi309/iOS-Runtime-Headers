/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MPVideoOverlay.h>
#import <libobjc.A.dylib/MPDetailSliderDelegate.h>

@protocol MPVideoControllerProtocol, MPVideoOverlayDelegate;
@class MPAVItem, MPAVController, MPDetailSlider, NSMutableDictionary, UINavigationBar, NSString;

@interface MPVideoOverlay : UIView <MPVideoOverlay, MPDetailSliderDelegate> {

	id<MPVideoControllerProtocol> _videoViewController;
	id<MPVideoOverlayDelegate> _delegate;
	MPAVItem* _item;
	MPAVController* _player;
	MPDetailSlider* _scrubControl;
	long long _interfaceOrientation;
	BOOL _controlsAutohideDisabled;
	BOOL _wantsTick;
	unsigned long long _desiredParts;
	unsigned long long _visibleParts;
	unsigned long long _disabledParts;
	NSMutableDictionary* _tickTimeEvents;
	double _lastTickTime;

}

@property (assign,nonatomic,__weak) id<MPVideoControllerProtocol> videoViewController;              //@synthesize videoViewController=_videoViewController - In the implementation block
@property (assign,nonatomic) BOOL allowsWirelessPlayback; 
@property (assign,nonatomic) BOOL navigationBarHidden; 
@property (nonatomic,retain) MPAVController * player;                                               //@synthesize player=_player - In the implementation block
@property (nonatomic,retain,readonly) UINavigationBar * navigationBar; 
@property (assign,nonatomic,__weak) id<MPVideoOverlayDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                                       //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) unsigned long long desiredParts;                                       //@synthesize desiredParts=_desiredParts - In the implementation block
@property (assign,nonatomic) unsigned long long visibleParts;                                       //@synthesize visibleParts=_visibleParts - In the implementation block
@property (assign,nonatomic) unsigned long long disabledParts;                                      //@synthesize disabledParts=_disabledParts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MPVideoOverlayDelegate>)delegate;
-(void)setDelegate:(id<MPVideoOverlayDelegate>)arg1 ;
-(MPAVItem *)item;
-(void)setItem:(MPAVItem *)arg1 ;
-(double)_duration;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(UINavigationBar *)navigationBar;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(BOOL)allowsWirelessPlayback;
-(void)setAllowsWirelessPlayback:(BOOL)arg1 ;
-(unsigned long long)desiredParts;
-(void)setDesiredParts:(unsigned long long)arg1 ;
-(unsigned long long)disabledParts;
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(unsigned long long)visibleParts;
-(void)setVisibleParts:(unsigned long long)arg1 ;
-(void)registerForPlayerNotifications;
-(void)unregisterForPlayerNotifications;
-(void)startTicking;
-(void)stopTicking;
-(void)_itemDurationDidChangeNotification:(id)arg1 ;
-(BOOL)navigationBarHidden;
-(id<MPVideoControllerProtocol>)videoViewController;
-(void)detailSliderTrackingDidBegin:(id)arg1 ;
-(void)detailSliderTrackingDidEnd:(id)arg1 ;
-(void)detailSliderTrackingDidCancel:(id)arg1 ;
-(void)detailSlider:(id)arg1 didChangeValue:(float)arg2 ;
-(BOOL)updateTimeBasedValues;
-(void)showAlternateTracks;
-(void)hideAlternateTracks;
-(void)setVideoViewController:(id<MPVideoControllerProtocol>)arg1 ;
-(void)_endSliderTracking;
-(void)_tickNotification:(id)arg1 ;
-(void)performSelector:(SEL)arg1 whenTickingPastTime:(double)arg2 ;
-(void)cancelPreviousPerformTickEventsForSelector:(SEL)arg1 ;
-(double)_playableDuration;
@end

