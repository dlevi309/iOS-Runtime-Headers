/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)defaultValue;
-(void)setDefaultValue:(NSDate *)arg1 ;
-(void)setCurrentValue:(NSDate *)arg1 ;
-(BOOL)requireDay;
-(BOOL)requireMonth;
-(BOOL)requireYear;
-(id)getCurrentValue;
-(void)setRequireDay:(BOOL)arg1 ;
-(void)setRequireMonth:(BOOL)arg1 ;
-(void)setRequireYear:(BOOL)arg1 ;
@end

