/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _SWCApplicationIdentifier, _SWCDomain, NSString, NSNumber;

@interface _SWCServiceSpecifier : NSObject <SWCRedactedDescription, NSSecureCoding, NSCopying> {

	_SWCApplicationIdentifier* _applicationIdentifier;
	_SWCDomain* _domain;
	NSString* _serviceType;

}

@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * applicationIdentifierPrefix; 
@property (getter=isDomainWildcard,readonly) BOOL domainWildcard; 
@property (readonly) NSString * domainHost; 
@property (readonly) NSNumber * domainPort; 
@property (readonly) char domainModeOfOperation; 
@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) _SWCApplicationIdentifier * SWCApplicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (readonly) _SWCDomain * SWCDomain;                                            //@synthesize domain=_domain - In the implementation block
@property (getter=isFullySpecified,readonly) BOOL fullySpecified; 
@property (readonly) NSString * serviceType;                                            //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) NSString * applicationIdentifier; 
@property (readonly) NSString * domain; 
+(id)serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id*)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)_serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id*)arg3 ;
+(id)serviceSpecifiersWithEntitlementValue:(id)arg1 error:(id*)arg2 ;
-(id)initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3 ;
-(NSString *)applicationIdentifierPrefix;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)debugDescription;
-(NSString *)domain;
-(NSString *)applicationIdentifier;
-(id)description;
-(BOOL)isValid;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isFullySpecified;
-(id)_initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3 ;
-(_SWCApplicationIdentifier *)SWCApplicationIdentifier;
-(_SWCDomain *)SWCDomain;
-(NSString *)domainHost;
-(BOOL)isDomainWildcard;
-(NSNumber *)domainPort;
-(char)domainModeOfOperation;
-(BOOL)domainEncompassesDomain:(id)arg1 ;
-(BOOL)domainEncompassesDomainOfServiceSpecifier:(id)arg1 ;
-(NSString *)serviceType;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

