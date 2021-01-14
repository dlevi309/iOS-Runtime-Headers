/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)captureState;
-(id)entitlementsForProcess:(id)arg1 ;
-(id)allEntitlements;
-(NSString *)debugDescription;
-(NSString *)stateCaptureTitle;
-(id)initWithDomainAttributeEntitlements:(id)arg1 ;
-(void)purgeEntitlementsForProcess:(id)arg1 ;
@end

