/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@protocol OS_dispatch_queue;
#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class NSObject, GEOLocationShifter;

@interface CLSLocationShifter : NSObject {

	NSObject*<OS_dispatch_queue> _locationShiftQueue;
	GEOLocationShifter* _locationShifter;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> locationShiftQueue;              //@synthesize locationShiftQueue=_locationShiftQueue - In the implementation block
@property (nonatomic,readonly) GEOLocationShifter * locationShifter;                         //@synthesize locationShifter=_locationShifter - In the implementation block
+(BOOL)isLocationShiftRequiredForCoordinate:(SCD_Struct_CL4)arg1 ;
+(id)sharedLocationShifter;
-(id)init;
-(SCD_Struct_CL4)shiftedCoordinateForOriginalCoordinate:(SCD_Struct_CL4)arg1 ;
-(GEOLocationShifter *)locationShifter;
-(NSObject*<OS_dispatch_queue>)locationShiftQueue;
@end

