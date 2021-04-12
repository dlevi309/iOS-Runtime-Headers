/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DRSRequestStats.h>

@class NSDictionary, NSString;

@interface DRSRequestIssueDescriptionStats : DRSRequestStats

@property (nonatomic,readonly) NSDictionary * perOutcomeStats; 
@property (nonatomic,readonly) NSString * issueDescription; 
+(id)keyName;
+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg1 ;
-(NSString *)issueDescription;
-(NSDictionary *)perOutcomeStats;
@end

