/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)interval;
-(void)setInterval:(long long)arg1 ;
-(NSDate *)endDate;
-(id)groupIdentifier;
-(void)setEndDate:(NSDate *)arg1 ;
-(int)frequency;
-(void)setFrequency:(int)arg1 ;
-(id)encodedClassName;
-(long long)endCount;
-(void)setEndCount:(long long)arg1 ;
@end

