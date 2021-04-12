/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)entitlementsForProcess:(id)arg1 ;
-(id)allEntitlements;
-(BOOL)hasEntitlementDomain:(unsigned long long)arg1 ;
-(void)purgeEntitlementsForProcess:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
@end

