/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBDomainAttributeManaging <NSObject>
@required
-(id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id*)arg4;
-(id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2;
-(id)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2;
-(BOOL)containsAttributeWithDomain:(id)arg1 andName:(id)arg2;
-(id)allEntitlements;
-(BOOL)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3;

@end

