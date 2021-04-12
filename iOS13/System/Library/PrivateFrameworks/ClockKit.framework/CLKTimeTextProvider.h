/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
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
+(id)textProviderWithDate:(id)arg1 timeZone:(id)arg2 ;
+(id)textProviderWithDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(void)setDate:(NSDate *)arg1 ;
-(void)_validate;
-(id)JSONObjectRepresentation;
-(id)_timeAttributedTextWithStyle:(id)arg1 dropMinutes:(BOOL)arg2 dropDesignator:(BOOL)arg3 ;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(BOOL)disallowBothMinutesAndDesignator;
-(void)setDisallowBothMinutesAndDesignator:(BOOL)arg1 ;
-(BOOL)prefersDesignatorToMinutes;
-(void)setPrefersDesignatorToMinutes:(BOOL)arg1 ;
@end

