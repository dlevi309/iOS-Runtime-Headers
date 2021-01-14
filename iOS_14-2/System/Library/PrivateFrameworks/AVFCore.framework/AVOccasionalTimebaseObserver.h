/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVTimebaseObserver.h>

@class NSArray;

@interface AVOccasionalTimebaseObserver : AVTimebaseObserver {

	NSArray* _times;
	/*^block*/id _block;

}
-(void)_handleTimeDiscontinuity;
-(void)_effectiveRateChanged;
-(SCD_Struct_AV6)_nextFiringTimeAfterTime:(SCD_Struct_AV6)arg1 ;
-(SCD_Struct_AV6)_previousFiringTimeBeforeTime:(SCD_Struct_AV6)arg1 ;
-(void)_resetNextFireTime;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 times:(id)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_fireBlock;
-(void)dealloc;
@end

