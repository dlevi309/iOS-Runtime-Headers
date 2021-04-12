/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/RBEntitlementManaging.h>
#import <libobjc.A.dylib/RBEntitlementPossessing.h>

@class NSString;

@interface RBIgnoreAllEntitlementsManager : NSObject <RBEntitlementManaging, RBEntitlementPossessing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasEntitlement:(id)arg1 ;
-(BOOL)hasEntitlementDomain:(unsigned long long)arg1 ;
-(id)entitlementsForProcess:(id)arg1 ;
-(id)allEntitlements;
@end

