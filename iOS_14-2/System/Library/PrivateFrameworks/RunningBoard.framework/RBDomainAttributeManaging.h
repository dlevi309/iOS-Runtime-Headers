/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBDomainAttributeManaging <NSObject>
@required
-(id)additionalRestrictionsForDomain:(id)arg1 andName:(id)arg2;
-(id)allEntitlements;
-(id)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2;
-(id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2;
-(id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id*)arg4;
-(id)targetEntitlementsForDomain:(id)arg1 andName:(id)arg2;
-(BOOL)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3;
-(BOOL)containsAttributeWithDomain:(id)arg1 andName:(id)arg2;

@end

