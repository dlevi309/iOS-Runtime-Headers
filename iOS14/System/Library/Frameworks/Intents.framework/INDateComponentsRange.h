/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INDateComponentsRangeExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents, INRecurrenceRule, NSString, NSNumber, NSDateInterval, NSDate;

@interface INDateComponentsRange : NSObject <INDateComponentsRangeExport, NSCopying, NSSecureCoding> {

	NSDateComponents* _startDateComponents;
	NSDateComponents* _endDateComponents;
	INRecurrenceRule* _recurrenceRule;
	NSString* _userInput;
	NSNumber* _allDay;

}

@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,copy,readonly) NSDate * startDate; 
@property (nonatomic,copy,readonly) NSDate * endDate; 
@property (nonatomic,copy,readonly) NSString * userInput;                                //@synthesize userInput=_userInput - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * allDay;                                   //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * startDateComponents;              //@synthesize startDateComponents=_startDateComponents - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * endDateComponents;                //@synthesize endDateComponents=_endDateComponents - In the implementation block
@property (nonatomic,copy,readonly) INRecurrenceRule * recurrenceRule;                   //@synthesize recurrenceRule=_recurrenceRule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDateInterval *)dateInterval;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(NSNumber *)allDay;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)description;
-(NSString *)userInput;
-(NSDateComponents *)startDateComponents;
-(INRecurrenceRule *)recurrenceRule;
-(unsigned long long)hash;
-(id)_userInput;
-(id)initWithCoder:(id)arg1 ;
-(id)EKRecurrenceRule;
-(id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
-(id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 recurrenceRule:(id)arg3 ;
-(id)initWithDate:(id)arg1 onCalendar:(id)arg2 inTimeZone:(id)arg3 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 onCalendar:(id)arg3 inTimeZone:(id)arg4 ;
-(id)initWithDateInterval:(id)arg1 onCalendar:(id)arg2 inTimeZone:(id)arg3 ;
-(id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 recurrenceRule:(id)arg3 userInput:(id)arg4 allDay:(id)arg5 ;
-(id)initWithEKRecurrenceRule:(id)arg1 ;
-(NSDateComponents *)endDateComponents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

