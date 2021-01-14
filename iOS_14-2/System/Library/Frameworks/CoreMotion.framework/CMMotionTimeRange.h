/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSDate;

@interface CMMotionTimeRange : CMLogItem {

	NSDate* fStartDate;
	NSDate* fEndDate;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
+(BOOL)supportsSecureCoding;
+(id)CMMotionTimeRangeFromCLMotionTimeRange:(SCD_Struct_CM17)arg1 ;
+(SCD_Struct_CM17)CLMotionTimeRangeFromCMMotionTimeRange:(id)arg1 ;
-(NSDate *)endDate;
-(id)initWithStartDate:(double)arg1 endDate:(double)arg2 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

