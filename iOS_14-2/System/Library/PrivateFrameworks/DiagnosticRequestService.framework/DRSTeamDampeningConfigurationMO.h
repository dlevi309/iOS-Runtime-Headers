/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, DRSDampeningConfigurationMO, DRSDampeningManagerMO;

@interface DRSTeamDampeningConfigurationMO : NSManagedObject

@property (nonatomic,copy) NSString * teamID; 
@property (nonatomic,retain) NSSet * categoryConfigurations; 
@property (nonatomic,retain) DRSDampeningConfigurationMO * defaultConfiguration; 
@property (nonatomic,retain) DRSDampeningManagerMO * parentDampeningManager; 
+(id)fetchRequest;
@end

