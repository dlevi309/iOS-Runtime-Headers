/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSAbstractFacilityService.h>

@class SBSApplicationClient;

@interface SBSAbstractApplicationService : SBSAbstractFacilityService

@property (nonatomic,readonly) SBSApplicationClient * client; 
+(Class)serviceFacilityClientClass;
-(SBSApplicationClient *)client;
@end

