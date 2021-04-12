/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSNumber, NSString, NSArray;

@interface SACalendarEventSearch : SADomainCommand

@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSNumber * limit; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSArray * participants; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * title; 
+(id)eventSearch;
+(id)eventSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)notes;
-(void)setLimit:(NSNumber *)arg1 ;
-(NSDate *)endDate;
-(NSNumber *)limit;
-(id)groupIdentifier;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)encodedClassName;
-(void)setNotes:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(NSDate *)startDate;
-(NSString *)location;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSArray *)participants;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSString *)timeZoneId;
-(NSString *)title;
@end

