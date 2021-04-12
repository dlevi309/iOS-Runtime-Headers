/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTimebaseObserver.h>

@interface AVOnceTimebaseObserver : AVTimebaseObserver {

	SCD_Struct_AV7 _fireTime;
	/*^block*/id _block;
	BOOL _didFire;

}

@property (nonatomic,readonly) BOOL didFire; 
-(void)dealloc;
-(void)invalidate;
-(void)_fireBlock;
-(void)_effectiveRateChanged;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 fireTime:(SCD_Struct_AV7)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)didFire;
@end

