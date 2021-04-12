/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NSTimer;

@interface CACMicStatusView : UIView {

	BOOL _swapPalette;
	long long _micStatus;
	double _micPowerLevel;
	UIImageView* _statusIndicatorImageView;
	NSTimer* _statusIndicatorAnimationTimer;

}

@property (nonatomic,retain) UIImageView * statusIndicatorImageView;               //@synthesize statusIndicatorImageView=_statusIndicatorImageView - In the implementation block
@property (nonatomic,retain) NSTimer * statusIndicatorAnimationTimer;              //@synthesize statusIndicatorAnimationTimer=_statusIndicatorAnimationTimer - In the implementation block
@property (assign,nonatomic) long long micStatus;                                  //@synthesize micStatus=_micStatus - In the implementation block
@property (assign,nonatomic) double micPowerLevel;                                 //@synthesize micPowerLevel=_micPowerLevel - In the implementation block
@property (assign,nonatomic) BOOL swapPalette;                                     //@synthesize swapPalette=_swapPalette - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)imageBundle;
-(UIImageView *)statusIndicatorImageView;
-(void)setStatusIndicatorImageView:(UIImageView *)arg1 ;
-(void)drawBase;
-(void)setMicStatus:(long long)arg1 ;
-(void)transitionToIdle;
-(void)transitionToListening;
-(void)transitionToRecording;
-(long long)micStatus;
-(void)stopRecordingAnimation;
-(BOOL)swapPalette;
-(NSTimer *)statusIndicatorAnimationTimer;
-(void)setStatusIndicatorAnimationTimer:(NSTimer *)arg1 ;
-(void)setSwapPalette:(BOOL)arg1 ;
-(double)micPowerLevel;
-(void)setMicPowerLevel:(double)arg1 ;
@end

