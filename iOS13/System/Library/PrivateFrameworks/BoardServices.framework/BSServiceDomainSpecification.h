/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSDictionary, NSOrderedSet, NSSet;

@interface BSServiceDomainSpecification : NSObject <BSDescriptionProviding> {

	NSString* _identifier;
	NSString* _machName;
	NSDictionary* _servicesByIdentifier;
	NSOrderedSet* _orderedServices;

}

@property (nonatomic,copy,readonly) NSOrderedSet * _orderedServices;              //@synthesize orderedServices=_orderedServices - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * machName;                          //@synthesize machName=_machName - In the implementation block
@property (nonatomic,copy,readonly) NSSet * services; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(NSString *)identifier;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 machName:(id)arg2 servicesByIdentifier:(id)arg3 ;
-(NSSet *)services;
-(id)serviceForIdentifier:(id)arg1 ;
-(id)_domainWithAdditionalServices:(id)arg1 ;
-(NSString *)machName;
-(NSOrderedSet *)_orderedServices;
@end

