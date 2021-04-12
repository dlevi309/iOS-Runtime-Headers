/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSDate, NSString;

@interface SACalendarEventSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * events; 
@property (nonatomic,copy) NSDate * snippetEndDate; 
@property (nonatomic,copy) NSDate * snippetStartDate; 
@property (nonatomic,copy) NSString * timeZoneId; 
+(id)eventSnippet;
+(id)eventSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
-(id)encodedClassName;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSString *)timeZoneId;
-(NSDate *)snippetEndDate;
-(void)setSnippetEndDate:(NSDate *)arg1 ;
-(NSDate *)snippetStartDate;
-(void)setSnippetStartDate:(NSDate *)arg1 ;
@end

