/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)initWithEventDate:(id)arg1 type:(long long)arg2 ;
@end

