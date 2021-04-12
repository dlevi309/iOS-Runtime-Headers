/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/


#import <ClockKitUI/ClockKitUI-Structs.h>
@class NSCache, NSLock;

@interface CLKUIAlmanacCache : NSObject {

	NSCache* _cache;
	NSLock* _lock;

}
+(id)sharedInstance;
-(id)init;
-(id)almanacForLocation:(SCD_Struct_CL1)arg1 time:(double)arg2 altitudeInDegrees:(double)arg3 ;
-(id)_locked_almanacForLocation:(SCD_Struct_CL1)arg1 altitude:(double)arg2 time:(double)arg3 ;
-(void)_locked_setAlmanac:(id)arg1 forLocation:(SCD_Struct_CL1)arg2 altitude:(double)arg3 ;
@end

