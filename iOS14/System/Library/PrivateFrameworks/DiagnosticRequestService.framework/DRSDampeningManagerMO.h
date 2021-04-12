/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <CoreData/NSManagedObject.h>

@class DRSDampeningConfigurationMO, DRSDampeningEnforcementSettingsMO, NSSet;

@interface DRSDampeningManagerMO : NSManagedObject

@property (assign,nonatomic) long long totalCap; 
@property (nonatomic,retain) DRSDampeningConfigurationMO * defaultSignatureConfiguration; 
@property (nonatomic,retain) DRSDampeningEnforcementSettingsMO * enforcementSettings; 
@property (nonatomic,retain) NSSet * resourceConfigurations; 
@property (nonatomic,retain) NSSet * teamConfigurations; 
+(id)fetchRequest;
@end

