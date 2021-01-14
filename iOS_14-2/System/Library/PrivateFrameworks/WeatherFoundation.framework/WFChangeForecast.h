/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface WFChangeForecast : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _date;
	NSString* _descriptionSameTimeZone;
	NSString* _descriptionDifferentTimeZone;

}

@property (nonatomic,copy,readonly) NSDate * date;                                   //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * descriptionSameTimeZone;                   //@synthesize descriptionSameTimeZone=_descriptionSameTimeZone - In the implementation block
@property (nonatomic,readonly) NSString * descriptionDifferentTimeZone;              //@synthesize descriptionDifferentTimeZone=_descriptionDifferentTimeZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDate:(id)arg1 descriptionSameTimeZone:(id)arg2 descriptionDifferentTimeZone:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)descriptionSameTimeZone;
-(NSString *)descriptionDifferentTimeZone;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

