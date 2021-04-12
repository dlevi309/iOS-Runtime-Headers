/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject {

	unsigned long long _deviceIdentifier;
	SCRCGestureFinger* _finger[8];
	unsigned long long _fingerCount;
	CGPoint _averageLocation;
	double _time;

}

@property (assign,nonatomic) double time;              //@synthesize time=_time - In the implementation block
-(void)dealloc;
-(id)description;
-(double)time;
-(void)setTime:(double)arg1 ;
-(unsigned long long)deviceIdentifier;
-(unsigned long long)fingerCount;
-(id)initWithDeviceIdentifier:(unsigned long long)arg1 ;
-(CGRect)fingerFrame;
-(void)addFingerWithIdentifier:(unsigned long long)arg1 location:(CGPoint)arg2 pressure:(double)arg3 ;
-(void)addStylusWithIdentifier:(unsigned long long)arg1 location:(CGPoint)arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5 ;
-(void)removeFingerWithIdentifier:(unsigned long long)arg1 ;
-(id)fingerAtIndex:(unsigned long long)arg1 ;
-(id)fingerWithIdentifier:(unsigned long long)arg1 ;
-(id)fingerWithoutIdentifier:(unsigned long long)arg1 ;
-(id)fingers;
-(CGPoint)averageLocation;
-(CGPoint)balancedLocation;
-(BOOL)isCancelEvent;
-(CGPoint)magneticLocation;
@end

