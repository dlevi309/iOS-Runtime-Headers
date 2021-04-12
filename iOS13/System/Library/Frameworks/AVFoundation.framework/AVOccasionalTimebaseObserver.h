/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTimebaseObserver.h>

@class NSArray;

@interface AVOccasionalTimebaseObserver : AVTimebaseObserver {

	NSArray* _times;
	/*^block*/id _block;

}
-(void)dealloc;
-(void)_fireBlock;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 times:(id)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_effectiveRateChanged;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(SCD_Struct_AV7)_nextFiringTimeAfterTime:(SCD_Struct_AV7)arg1 ;
-(SCD_Struct_AV7)_previousFiringTimeBeforeTime:(SCD_Struct_AV7)arg1 ;
@end

