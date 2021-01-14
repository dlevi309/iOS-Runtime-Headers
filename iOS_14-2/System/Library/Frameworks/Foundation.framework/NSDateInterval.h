/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface NSDateInterval : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSDate * startDate; 
@property (copy,readonly) NSDate * endDate; 
@property (readonly) double duration; 
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSDate *)endDate;
-(long long)compare:(id)arg1 ;
-(BOOL)containsDate:(id)arg1 ;
-(id)init;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 duration:(double)arg2 ;
-(id)intersectionWithDateInterval:(id)arg1 ;
-(id)description;
-(BOOL)isEqualToDateInterval:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)intersectsDateInterval:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

