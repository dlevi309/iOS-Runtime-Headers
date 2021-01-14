/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSDate, NSString;

@interface SAReminderSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * completionStatus; 
@property (nonatomic,copy) NSDate * dueAfter; 
@property (nonatomic,copy) NSDate * dueBefore; 
@property (nonatomic,copy) NSString * listName; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * timeZoneId; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)subject;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setListName:(NSString *)arg1 ;
-(void)setDueAfter:(NSDate *)arg1 ;
-(NSDate *)dueAfter;
-(NSNumber *)completionStatus;
-(void)setCompletionStatus:(NSNumber *)arg1 ;
-(void)setDueBefore:(NSDate *)arg1 ;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSDate *)dueBefore;
-(NSString *)timeZoneId;
-(NSString *)listName;
-(void)setSubject:(NSString *)arg1 ;
@end

