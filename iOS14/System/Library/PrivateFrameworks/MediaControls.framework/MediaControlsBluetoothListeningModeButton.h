/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <MediaControls/MediaControlsExpandableButton.h>

@class NSSet, MediaControlsHapticPlayer, UIColor, NSString;

@interface MediaControlsBluetoothListeningModeButton : MediaControlsExpandableButton {

	NSSet* _availableListeningModes;
	MediaControlsHapticPlayer* _hapticPlayer;
	UIColor* _offColor;

}

@property (nonatomic,retain) MediaControlsHapticPlayer * hapticPlayer;              //@synthesize hapticPlayer=_hapticPlayer - In the implementation block
@property (nonatomic,retain) UIColor * offColor;                                    //@synthesize offColor=_offColor - In the implementation block
@property (nonatomic,retain) NSSet * availableListeningModes;                       //@synthesize availableListeningModes=_availableListeningModes - In the implementation block
@property (nonatomic,retain) NSString * selectedListeningMode; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)_springAnimate:(/*^block*/id)arg1 ;
-(void)setSelectedListeningMode:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAvailableListeningModes:(NSSet *)arg1 ;
-(NSString *)selectedListeningMode;
-(void)playRequiresBothBudsInEarErrorHaptic;
-(void)playFailedValueChangedEventHaptic;
-(id)initForControlCenter;
-(void)playValueChangedEventHaptic;
-(void)setSelectedListeningMode:(NSString *)arg1 ;
-(void)playFailedValueChangedEventHapticWithMessage:(id)arg1 ;
-(NSSet *)availableListeningModes;
-(MediaControlsHapticPlayer *)hapticPlayer;
-(void)setHapticPlayer:(MediaControlsHapticPlayer *)arg1 ;
-(UIColor *)offColor;
-(void)setOffColor:(UIColor *)arg1 ;
@end

