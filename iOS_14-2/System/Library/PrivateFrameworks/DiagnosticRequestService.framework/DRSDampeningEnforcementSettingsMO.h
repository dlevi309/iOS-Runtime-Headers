/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <CoreData/NSManagedObject.h>

@class DRSDampeningManagerMO;

@interface DRSDampeningEnforcementSettingsMO : NSManagedObject

@property (assign,nonatomic) BOOL enforcesResourceCap; 
@property (assign,nonatomic) BOOL enforcesResourceDownsampling; 
@property (assign,nonatomic) BOOL enforcesResourceHysteresis; 
@property (assign,nonatomic) BOOL enforcesSignatureCap; 
@property (assign,nonatomic) BOOL enforcesSignatureDownsampling; 
@property (assign,nonatomic) BOOL enforcesSignatureHysteresis; 
@property (assign,nonatomic) BOOL enforcesTotalCap; 
@property (nonatomic,retain) DRSDampeningManagerMO * parentDampeningManager; 
+(id)fetchRequest;
@end

