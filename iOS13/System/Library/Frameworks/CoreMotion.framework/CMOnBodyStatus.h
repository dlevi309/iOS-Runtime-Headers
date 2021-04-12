/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)result;
-(long long)confidence;
-(id)initWithOnBodyResult:(int)arg1 confidence:(int)arg2 timestamp:(double)arg3 ;
@end

