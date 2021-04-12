/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDate *)toDate;
-(NSDate *)fromDate;
-(void)setFromDate:(NSDate *)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
-(BOOL)requiresResponse;
-(NSString *)contentQuery;
-(void)setContentQuery:(NSString *)arg1 ;
@end

