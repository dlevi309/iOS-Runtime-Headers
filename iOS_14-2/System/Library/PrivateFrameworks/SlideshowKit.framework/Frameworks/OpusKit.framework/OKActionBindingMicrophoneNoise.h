/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableDictionary, AVCaptureSession, NSTimer, UILongPressGestureRecognizer, NSString;

@interface OKActionBindingMicrophoneNoise : OKActionBinding <UIGestureRecognizerDelegate> {

	unsigned long long _numberOfTouchesRequired;
	double _interval;
	NSMutableDictionary* _actionContext;
	AVCaptureSession* _session;
	NSTimer* _timer;
	float _lastMeanAudioLevel;
	BOOL _shouldForwardMotion;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	CGPoint _lastLocation;

}

@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;              //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)unload;
-(void)setInterval:(double)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(double)interval;
-(void)handleLongPress:(id)arg1 ;
-(unsigned long long)numberOfTouchesRequired;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(void)_updateAudioLevels:(id)arg1 ;
@end

