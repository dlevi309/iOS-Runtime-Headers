/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DRSRequestStats.h>

@class NSDictionary;

@interface DRSRequestAllStats : DRSRequestStats

@property (nonatomic,readonly) NSDictionary * perBuildStats; 
+(id)keyName;
+(id)statsForRequests:(id)arg1 ;
+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg1 ;
-(id)init;
-(NSDictionary *)perBuildStats;
-(id)terminalRequestProtobufRepresentation;
@end

