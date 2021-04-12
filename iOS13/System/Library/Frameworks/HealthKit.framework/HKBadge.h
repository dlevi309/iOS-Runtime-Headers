/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface HKBadge : NSObject <NSCopying, NSSecureCoding> {

	long long _count;
	long long _type;

}

@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSNumber * keyValueRepresentation; 
@property (nonatomic,readonly) long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) id<NSObject> value; 
@property (getter=isErrorBadge,nonatomic,readonly) BOOL errorBadge; 
@property (getter=isIndicatorBadge,nonatomic,readonly) BOOL indicatorBadge; 
@property (getter=isNumberBadge,nonatomic,readonly) BOOL numberBadge; 
@property (getter=isZeroBadge,nonatomic,readonly) BOOL zeroBadge; 
+(BOOL)supportsSecureCoding;
+(id)numberBadgeWithCount:(long long)arg1 ;
+(id)zeroBadge;
+(id)indicatorBadge;
+(id)errorBadge;
+(id)badgeFromKeyValueRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id<NSObject>)value;
-(id)initWithType:(long long)arg1 count:(long long)arg2 ;
-(BOOL)isZeroBadge;
-(BOOL)isNumberBadge;
-(id)badgeByAggregatingWithBadge:(id)arg1 ;
-(id)badgeByIncrementingByCount:(long long)arg1 ;
-(BOOL)isErrorBadge;
-(BOOL)isIndicatorBadge;
-(NSNumber *)keyValueRepresentation;
@end

