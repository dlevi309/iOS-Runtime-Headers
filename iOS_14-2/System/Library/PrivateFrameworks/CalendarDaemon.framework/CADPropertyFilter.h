/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADFilter.h>

@class NSString, NSDate;

@interface CADPropertyFilter : CADFilter {

	long long _property;
	long long _comparison;
	NSString* _stringValue;
	long long _integerValue;
	NSDate* _dateValue;

}

@property (nonatomic,readonly) long long property;                  //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) long long comparison;                //@synthesize comparison=_comparison - In the implementation block
@property (nonatomic,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) long long integerValue;              //@synthesize integerValue=_integerValue - In the implementation block
@property (nonatomic,readonly) NSDate * dateValue;                  //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL isString; 
@property (nonatomic,readonly) BOOL isInteger; 
@property (nonatomic,readonly) BOOL isDate; 
+(BOOL)supportsSecureCoding;
-(BOOL)ekPredicateFilterMatches:(id)arg1 ;
-(NSDate *)dateValue;
-(BOOL)validate;
-(long long)property;
-(long long)integerValue;
-(long long)comparison;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(BOOL)isDate;
-(id)initWithProperty:(long long)arg1 comparison:(long long)arg2 integerValue:(long long)arg3 ;
-(id)initWithProperty:(long long)arg1 comparison:(long long)arg2 stringValue:(id)arg3 ;
-(id)initWithProperty:(long long)arg1 comparison:(long long)arg2 dateValue:(id)arg3 ;
-(BOOL)isString;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isInteger;
-(BOOL)applicableToEntityType:(int)arg1 ;
-(id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4 ;
-(BOOL)validateWithRequiredPropertyType:(int)arg1 ;
@end

