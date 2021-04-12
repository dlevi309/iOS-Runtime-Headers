/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSNumber;

@interface CMAltitudeData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) NSNumber * relativeAltitude; 
@property (nonatomic,readonly) NSNumber * pressure; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)pressure;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAltitude:(float)arg1 andTimestamp:(double)arg2 atBaseAltitude:(float)arg3 ;
-(NSNumber *)relativeAltitude;
-(id)initWithTimestamp:(double)arg1 pressure:(float)arg2 relativeAltitude:(float)arg3 ;
-(void)dealloc;
@end

