/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDate, NSString;

@interface SACalendar : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)calendar;
+(id)calendarWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setDate:(NSDate *)arg1 ;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSString *)timeZoneId;
-(NSDate *)date;
@end

