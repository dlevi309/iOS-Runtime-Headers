/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(NSNumber *)completionStatus;
-(void)setCompletionStatus:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSDate *)dueBefore;
-(NSDate *)dueAfter;
-(void)setDueAfter:(NSDate *)arg1 ;
-(void)setDueBefore:(NSDate *)arg1 ;
-(BOOL)requiresResponse;
-(NSString *)timeZoneId;
-(NSString *)listName;
-(void)setListName:(NSString *)arg1 ;
@end

