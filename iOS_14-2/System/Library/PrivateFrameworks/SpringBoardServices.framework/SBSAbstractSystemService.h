/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSAbstractFacilityService.h>

@class SBSSystemServiceClient;

@interface SBSAbstractSystemService : SBSAbstractFacilityService

@property (nonatomic,readonly) SBSSystemServiceClient * client; 
+(Class)serviceFacilityClientClass;
-(SBSSystemServiceClient *)client;
@end

