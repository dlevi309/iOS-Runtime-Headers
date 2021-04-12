/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CMMotionTimeRange *)timeRange;
-(NSString *)deviceId;
-(id)initWithTimeRange:(id)arg1 deviceId:(id)arg2 ;
@end

