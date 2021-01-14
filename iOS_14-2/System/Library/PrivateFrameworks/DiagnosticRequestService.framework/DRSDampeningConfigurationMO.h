/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <CoreData/NSManagedObject.h>

@class NSString, DRSTeamDampeningConfigurationMO, DRSDampeningManagerMO;

@interface DRSDampeningConfigurationMO : NSManagedObject

@property (assign,nonatomic) double acceptanceRate; 
@property (assign,nonatomic) long long countCap; 
@property (assign,nonatomic) double hysteresis; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) DRSTeamDampeningConfigurationMO * defaultTeamConfiguration; 
@property (nonatomic,retain) DRSDampeningManagerMO * parentDampeningManagerResource; 
@property (nonatomic,retain) DRSDampeningManagerMO * parentDampeningManagerSignature; 
@property (nonatomic,retain) DRSTeamDampeningConfigurationMO * parentTeamConfiguration; 
+(id)fetchRequest;
@end

