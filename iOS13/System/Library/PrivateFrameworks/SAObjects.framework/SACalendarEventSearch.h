/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)limit;
-(void)setLimit:(NSNumber *)arg1 ;
-(NSString *)location;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(NSArray *)participants;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(NSString *)timeZoneId;
@end

