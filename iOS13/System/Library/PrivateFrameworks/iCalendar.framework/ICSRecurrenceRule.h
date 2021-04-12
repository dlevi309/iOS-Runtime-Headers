/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ICSWriting.h>

@class NSMutableDictionary, ICSDateValue, NSNumber, NSArray;

@interface ICSRecurrenceRule : NSObject <NSSecureCoding, ICSWriting> {

	unsigned long long _freq;
	NSMutableDictionary* _parameters;

}

@property (assign,nonatomic) unsigned long long freq; 
@property (nonatomic,retain) ICSDateValue * until; 
@property (assign,nonatomic) NSNumber * count; 
@property (assign,nonatomic) NSNumber * interval; 
@property (nonatomic,retain) NSArray * bysecond; 
@property (nonatomic,retain) NSArray * byminute; 
@property (nonatomic,retain) NSArray * byhour; 
@property (nonatomic,retain) NSArray * byday; 
@property (nonatomic,retain) NSArray * bymonthday; 
@property (nonatomic,retain) NSArray * byyearday; 
@property (nonatomic,retain) NSArray * byweekno; 
@property (nonatomic,retain) NSArray * bymonth; 
@property (nonatomic,retain) NSArray * bysetpos; 
@property (assign,nonatomic) NSNumber * wkst; 
+(BOOL)supportsSecureCoding;
+(id)recurrenceRuleFromICSCString:(const char*)arg1 withTokenizer:(id)arg2 ;
+(id)recurrenceRuleFromICSString:(id)arg1 ;
-(NSNumber *)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCount:(NSNumber *)arg1 ;
-(NSNumber *)interval;
-(void)setInterval:(NSNumber *)arg1 ;
-(id)parameterValueForName:(id)arg1 ;
-(unsigned long long)freq;
-(NSNumber *)wkst;
-(ICSDateValue *)until;
-(NSArray *)byday;
-(NSArray *)bymonthday;
-(NSArray *)bymonth;
-(NSArray *)byweekno;
-(NSArray *)byyearday;
-(NSArray *)bysetpos;
-(void)setParameterValue:(id)arg1 forName:(id)arg2 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(id)initWithFrequency:(unsigned long long)arg1 ;
-(void)setWkst:(NSNumber *)arg1 ;
-(void)setUntil:(ICSDateValue *)arg1 ;
-(void)setByday:(NSArray *)arg1 ;
-(void)setBymonth:(NSArray *)arg1 ;
-(void)setBymonthday:(NSArray *)arg1 ;
-(void)setByweekno:(NSArray *)arg1 ;
-(void)setByyearday:(NSArray *)arg1 ;
-(void)setBysetpos:(NSArray *)arg1 ;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1 ;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(void)removeParameterValueForName:(id)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(NSArray *)byhour;
-(NSArray *)byminute;
-(NSArray *)bysecond;
-(void)cleanUpForStartDate:(id)arg1 ;
-(id)occurrencesForStartDate:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 inTimeZone:(id)arg4 ;
-(void)setFreq:(unsigned long long)arg1 ;
-(void)setBysecond:(NSArray *)arg1 ;
-(void)setByminute:(NSArray *)arg1 ;
-(void)setByhour:(NSArray *)arg1 ;
@end

