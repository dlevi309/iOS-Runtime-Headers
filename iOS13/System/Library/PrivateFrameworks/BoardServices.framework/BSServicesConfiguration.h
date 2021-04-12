/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSDictionary, NSOrderedSet, NSSet, NSString;

@interface BSServicesConfiguration : NSObject <BSDescriptionProviding> {

	NSDictionary* _domainsByIdentifier;
	NSOrderedSet* _orderedDomains;

}

@property (nonatomic,copy,readonly) NSOrderedSet * _orderedDomains;              //@synthesize orderedDomains=_orderedDomains - In the implementation block
@property (nonatomic,copy,readonly) NSSet * domains; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
-(id)init;
-(NSString *)description;
-(NSSet *)domains;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithDomainsByIdentifier:(id)arg1 ;
-(id)domainsContainingServiceIdentifier:(id)arg1 ;
-(id)domainForIdentifier:(id)arg1 ;
-(id)domainForMachName:(id)arg1 ;
-(NSOrderedSet *)_orderedDomains;
@end

