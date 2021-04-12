/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(void)setEvents:(NSArray *)arg1 ;
-(NSDate *)snippetEndDate;
-(void)setSnippetEndDate:(NSDate *)arg1 ;
-(NSDate *)snippetStartDate;
-(void)setSnippetStartDate:(NSDate *)arg1 ;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSString *)timeZoneId;
-(NSArray *)events;
@end

