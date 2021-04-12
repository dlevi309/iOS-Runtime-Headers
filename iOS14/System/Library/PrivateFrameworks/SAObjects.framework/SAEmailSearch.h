/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)subject;
-(NSDate *)endDate;
-(id)groupIdentifier;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)toEmail;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSString *)fromEmail;
-(void)setFromEmail:(NSString *)arg1 ;
-(void)setToEmail:(NSString *)arg1 ;
-(void)setStatus:(int)arg1 ;
-(NSString *)timeZoneId;
-(void)setSubject:(NSString *)arg1 ;
-(int)status;
@end

