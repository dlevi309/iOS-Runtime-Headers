/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <CoreIDV/DIAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface DIAttributeDate : DIAttribute <NSSecureCoding> {

	BOOL _requireDay;
	BOOL _requireMonth;
	BOOL _requireYear;
	NSDate* defaultValue;
	NSDate* currentValue;

}

@property (assign,nonatomic) BOOL requireDay;                                         //@synthesize requireDay=_requireDay - In the implementation block
@property (assign,nonatomic) BOOL requireMonth;                                       //@synthesize requireMonth=_requireMonth - In the implementation block
@property (assign,nonatomic) BOOL requireYear;                                        //@synthesize requireYear=_requireYear - In the implementation block
@property (nonatomic,copy) NSDate * defaultValue; 
@property (getter=getCurrentValue,nonatomic,copy) NSDate * currentValue; 
+(BOOL)supportsSecureCoding;
-(void)setDefaultValue:(NSDate *)arg1 ;
-(id)init;
-(NSDate *)defaultValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)requireDay;
-(BOOL)requireMonth;
-(BOOL)requireYear;
-(void)setCurrentValue:(NSDate *)arg1 ;
-(id)getCurrentValue;
-(void)setRequireDay:(BOOL)arg1 ;
-(void)setRequireMonth:(BOOL)arg1 ;
-(void)setRequireYear:(BOOL)arg1 ;
@end

