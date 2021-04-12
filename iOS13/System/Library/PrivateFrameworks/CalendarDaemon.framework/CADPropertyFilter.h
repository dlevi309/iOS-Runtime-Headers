/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)integerValue;
-(NSDate *)dateValue;
-(BOOL)validate;
-(long long)property;
-(BOOL)isInteger;
-(BOOL)isDate;
-(long long)comparison;
-(BOOL)isString;
-(id)initWithProperty:(long long)arg1 comparison:(long long)arg2 integerValue:(long long)arg3 ;
-(id)initWithProperty:(long long)arg1 comparison:(long long)arg2 stringValue:(id)arg3 ;
-(id)initWithProperty:(long long)arg1 comparison:(long long)arg2 dateValue:(id)arg3 ;
-(BOOL)applicableToEntityType:(int)arg1 ;
-(id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4 ;
-(BOOL)validateWithRequiredPropertyType:(int)arg1 ;
@end

