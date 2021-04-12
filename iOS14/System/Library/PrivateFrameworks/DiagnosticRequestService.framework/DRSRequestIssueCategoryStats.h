/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DRSRequestStats.h>

@class NSDictionary, NSString;

@interface DRSRequestIssueCategoryStats : DRSRequestStats

@property (nonatomic,readonly) NSDictionary * perIssueDescriptionStats; 
@property (nonatomic,readonly) NSString * issueCategory; 
+(id)keyName;
+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg1 ;
-(NSString *)issueCategory;
-(NSDictionary *)perIssueDescriptionStats;
@end

