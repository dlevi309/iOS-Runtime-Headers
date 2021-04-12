/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBEntitlementManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@class NSMapTable, NSSet, NSDictionary, NSString;

@interface RBEntitlementManager : NSObject <RBEntitlementManaging, RBStateCapturing> {

	os_unfair_lock_s _lock;
	NSMapTable* _entitlementsByIdentifier;
	NSSet* _availableEntitlements;
	NSDictionary* _restrictedEntitlements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
+(id)_hardCodedEntitlements;
-(NSString *)debugDescription;
-(id)captureState;
-(id)entitlementsForProcess:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(id)allEntitlements;
-(id)_entitlementsForProcess:(id)arg1 ;
-(BOOL)_secTask:(SecTaskRef)arg1 hasEntitlement:(id)arg2 ;
-(void)_removeRestrictedEntitlements:(id)arg1 forProcess:(id)arg2 ;
-(id)initWithDomainAttributeEntitlements:(id)arg1 ;
@end

