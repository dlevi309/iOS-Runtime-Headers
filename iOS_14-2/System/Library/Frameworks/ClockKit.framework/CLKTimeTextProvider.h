/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSDateFormatter, NSMutableArray, NSDate, NSTimeZone;

@interface CLKTimeTextProvider : CLKTextProvider {

	NSDateFormatter* _dateFormatter;
	NSMutableArray* _sizingFallbackBlocks;
	BOOL _disallowBothMinutesAndDesignator;
	BOOL _prefersDesignatorToMinutes;
	NSDate* _date;
	NSTimeZone* _timeZone;

}

@property (assign,nonatomic) BOOL disallowBothMinutesAndDesignator;              //@synthesize disallowBothMinutesAndDesignator=_disallowBothMinutesAndDesignator - In the implementation block
@property (assign,nonatomic) BOOL prefersDesignatorToMinutes;                    //@synthesize prefersDesignatorToMinutes=_prefersDesignatorToMinutes - In the implementation block
@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                              //@synthesize timeZone=_timeZone - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)textProviderWithDate:(id)arg1 ;
+(id)textProviderWithDate:(id)arg1 timeZone:(id)arg2 ;
-(NSTimeZone *)timeZone;
-(id)initWithDate:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)_validate;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDate:(id)arg1 timeZone:(id)arg2 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDisallowBothMinutesAndDesignator:(BOOL)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(void)setPrefersDesignatorToMinutes:(BOOL)arg1 ;
-(id)JSONObjectRepresentation;
-(id)_timeAttributedTextWithStyle:(id)arg1 dropMinutes:(BOOL)arg2 dropDesignator:(BOOL)arg3 ;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(BOOL)disallowBothMinutesAndDesignator;
-(BOOL)prefersDesignatorToMinutes;
@end

