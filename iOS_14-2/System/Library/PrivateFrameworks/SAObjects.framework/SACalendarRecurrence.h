/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDate, NSString;

@interface SACalendarRecurrence : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long endCount; 
@property (nonatomic,copy) NSDate * endDate; 
@property (assign,nonatomic) int frequency; 
@property (assign,nonatomic) long long interval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recurrence;
+(id)recurrenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setFrequency:(int)arg1 ;
-(int)frequency;
-(NSDate *)endDate;
-(void)setInterval:(long long)arg1 ;
-(id)groupIdentifier;
-(long long)interval;
-(id)encodedClassName;
-(void)setEndDate:(NSDate *)arg1 ;
-(long long)endCount;
-(void)setEndCount:(long long)arg1 ;
@end

