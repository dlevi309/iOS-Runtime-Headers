/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CMPedometerEvent : NSObject <NSSecureCoding, NSCopying> {

	NSDate* fDate;
	long long fType;

}

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) long long type; 
+(BOOL)supportsSecureCoding;
+(id)eventStringFromType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithEventDate:(id)arg1 type:(long long)arg2 ;
-(id)description;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

