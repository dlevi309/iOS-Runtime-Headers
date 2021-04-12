/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCMicroGamepad.h>
#import <libobjc.A.dylib/_GCACHomeButtonDelegate.h>
#import <libobjc.A.dylib/DigitizerValueChangedDelegate.h>

@class GCControllerDirectionPad, _GCACHomeButton, NSDate, NSString;

@interface _GCAppleTVRemoteControllerProfile : GCMicroGamepad <_GCACHomeButtonDelegate, DigitizerValueChangedDelegate> {

	_GCACHomeButton* _acHome;
	double _windowX;
	double _windowY;
	double _windowSize;
	double _deadzoneSize;
	double _windowBufferSize[4];
	unsigned _digitizerTouchState;
	unsigned _sampleCount;
	unsigned _accumInputSampleCount;
	double _prevLogTime;
	int _orientation;
	int _candidateOrientation;
	NSDate* _candidateOrientationTimestamp;
	unsigned long long _owner;

}

@property (assign,nonatomic) unsigned long long owner;              //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) GCControllerDirectionPad * dpad; 
+(int)updateDevice:(IOHIDDeviceRef)arg1 withButtonDebounceTime:(unsigned char)arg2 withDelay:(BOOL)arg3 ;
-(id)name;
-(void)setOwner:(unsigned long long)arg1 ;
-(unsigned long long)owner;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(unsigned)sampleRate;
-(void)setPlayerIndex:(long long)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)initWithController:(id)arg1 dpadFlippedY:(BOOL)arg2 ;
-(void)toggleSuspendResume;
-(id)menuButton;
-(void)appWillResignActive;
-(void)appDidBecomeActive;
-(void)digitizerTouchEvent:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(BOOL)arg5 ;
-(void)digitizerTouchUp:(id)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(BOOL)arg3 ;
-(void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(BOOL)arg5 ;
-(void)getPositionInSlidingWindowForRealX:(double)arg1 realY:(double)arg2 outXInWindow:(double*)arg3 outYInWindow:(double*)arg4 ;
-(void)initCommon:(id)arg1 ;
-(void)processOrientationData:(id)arg1 ;
-(BOOL)ownershipClaimingElementsZero;
-(void)handleReport:(unsigned)arg1 data:(id)arg2 ;
@end

