/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSNumber;

@interface CMKappaData : CMLogItem {

	int fState;

}

@property (nonatomic,readonly) NSNumber * state; 
+(BOOL)supportsSecureCoding;
-(id)initWithState:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

