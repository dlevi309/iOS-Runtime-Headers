/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)CMMotionTimeRangeFromCLMotionTimeRange:(SCD_Struct_CM324)arg1 ;
+(SCD_Struct_CM324)CLMotionTimeRangeFromCMMotionTimeRange:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithStartDate:(double)arg1 endDate:(double)arg2 ;
@end

