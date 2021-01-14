/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSDate;

@interface SANoteSearch : SADomainCommand

@property (nonatomic,copy) NSString * contentQuery; 
@property (nonatomic,copy) NSDate * fromDate; 
@property (nonatomic,copy) NSDate * toDate; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)toDate;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)contentQuery;
-(void)setContentQuery:(NSString *)arg1 ;
-(void)setFromDate:(NSDate *)arg1 ;
-(NSDate *)fromDate;
-(void)setToDate:(NSDate *)arg1 ;
@end

