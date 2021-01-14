/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSAbstractFacilityService.h>

@class SBSApplicationClient;

@interface SBSAbstractApplicationService : SBSAbstractFacilityService

@property (nonatomic,readonly) SBSApplicationClient * client; 
+(Class)serviceFacilityClientClass;
-(SBSApplicationClient *)client;
@end

