/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)isLocationShiftRequiredForCoordinate:(SCD_Struct_CL5)arg1 ;
+(id)sharedLocationShifter;
-(id)init;
-(GEOLocationShifter *)locationShifter;
-(SCD_Struct_CL5)shiftedCoordinateForOriginalCoordinate:(SCD_Struct_CL5)arg1 ;
-(NSObject*<OS_dispatch_queue>)locationShiftQueue;
@end

