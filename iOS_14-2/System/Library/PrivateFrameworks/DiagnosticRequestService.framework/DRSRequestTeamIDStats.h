/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DRSRequestStats.h>

@class NSDictionary, NSString;

@interface DRSRequestTeamIDStats : DRSRequestStats

@property (nonatomic,readonly) NSDictionary * perIssueCategoryStats; 
@property (nonatomic,readonly) NSString * teamID; 
+(id)keyName;
+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg1 ;
-(NSString *)teamID;
-(NSDictionary *)perIssueCategoryStats;
@end

