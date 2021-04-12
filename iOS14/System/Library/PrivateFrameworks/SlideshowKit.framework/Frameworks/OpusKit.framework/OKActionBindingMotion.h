/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableDictionary, CMMotionManager, CMAttitude, NSOperationQueue, UILongPressGestureRecognizer, NSString;

@interface OKActionBindingMotion : OKActionBinding <UIGestureRecognizerDelegate> {

	unsigned long long _numberOfTouchesRequired;
	double _motionInterval;
	NSMutableDictionary* _motionContext;
	BOOL _shouldForwardMotion;
	CMMotionManager* _motionManager;
	CMAttitude* _motionAttitudeReference;
	NSOperationQueue* _motionQueue;
	double _lastYaw;
	double _lastRoll;
	double _lastPitch;
	double _lastRotationX;
	double _lastRotationY;
	double _lastRotationZ;
	CGPoint _lastLocation;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (retain) CMAttitude * motionAttitudeReference;                              //@synthesize motionAttitudeReference=_motionAttitudeReference - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;              //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) double motionInterval;                                   //@synthesize motionInterval=_motionInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(void)handleLongPress:(id)arg1 ;
-(unsigned long long)numberOfTouchesRequired;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(CMAttitude *)motionAttitudeReference;
-(void)setMotionAttitudeReference:(CMAttitude *)arg1 ;
-(void)setMotionInterval:(double)arg1 ;
-(double)motionInterval;
@end

