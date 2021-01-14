/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMMotionTimeRange, NSString;

@interface CMVehicleStateData : NSObject <NSSecureCoding, NSCopying> {

	CMMotionTimeRange* fTimeRange;
	NSString* fDeviceId;

}

@property (nonatomic,readonly) CMMotionTimeRange * timeRange; 
@property (nonatomic,readonly) NSString * deviceId; 
+(BOOL)supportsSecureCoding;
-(CMMotionTimeRange *)timeRange;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceId;
-(id)initWithTimeRange:(id)arg1 deviceId:(id)arg2 ;
-(void)dealloc;
@end

