/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString;

@interface SAEmailSearch : SADomainCommand

@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSString * fromEmail; 
@property (nonatomic,copy) NSDate * startDate; 
@property (assign,nonatomic) int status; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * toEmail; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(int)status;
-(id)groupIdentifier;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)encodedClassName;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(NSString *)timeZoneId;
-(NSString *)fromEmail;
-(void)setFromEmail:(NSString *)arg1 ;
-(NSString *)toEmail;
-(void)setToEmail:(NSString *)arg1 ;
@end

