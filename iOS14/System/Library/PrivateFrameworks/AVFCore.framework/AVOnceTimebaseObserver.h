/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVTimebaseObserver.h>

@interface AVOnceTimebaseObserver : AVTimebaseObserver {

	SCD_Struct_AV6 _fireTime;
	/*^block*/id _block;
	BOOL _didFire;

}

@property (nonatomic,readonly) BOOL didFire; 
-(void)_handleTimeDiscontinuity;
-(void)_effectiveRateChanged;
-(BOOL)didFire;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 fireTime:(SCD_Struct_AV6)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)invalidate;
-(void)_resetNextFireTime;
-(void)_fireBlock;
-(void)dealloc;
@end

