/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSDictionary, NSString, NSOrderedSet, NSSet;

@interface BSServiceDomainSpecification : NSObject <BSDescriptionProviding> {

	NSDictionary* _servicesByIdentifier;
	NSString* _identifier;
	NSString* _machName;
	NSOrderedSet* _orderedServices;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * machName;                //@synthesize machName=_machName - In the implementation block
@property (nonatomic,copy,readonly) NSSet * services; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)services;
-(id)succinctDescription;
-(id)serviceForIdentifier:(id)arg1 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSString *)machName;
@end

