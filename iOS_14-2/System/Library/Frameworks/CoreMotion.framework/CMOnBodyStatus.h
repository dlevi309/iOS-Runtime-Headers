/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMOnBodyStatus : CMLogItem {

	int fResult;
	int fConfidence;

}

@property (nonatomic,readonly) long long result; 
@property (nonatomic,readonly) long long confidence; 
+(BOOL)supportsSecureCoding;
-(long long)confidence;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)result;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOnBodyResult:(int)arg1 confidence:(int)arg2 timestamp:(double)arg3 ;
@end

