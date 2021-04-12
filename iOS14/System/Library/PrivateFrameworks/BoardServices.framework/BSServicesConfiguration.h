/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSDictionary, NSOrderedSet, NSSet, NSString;

@interface BSServicesConfiguration : NSObject <BSDescriptionProviding> {

	NSDictionary* _domainsByIdentifier;
	NSOrderedSet* _orderedDomains;

}

@property (nonatomic,copy,readonly) NSSet * domains; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)domainForIdentifier:(id)arg1 ;
-(NSString *)description;
-(id)domainsContainingServiceIdentifier:(id)arg1 ;
-(NSSet *)domains;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)domainForMachName:(id)arg1 ;
@end

