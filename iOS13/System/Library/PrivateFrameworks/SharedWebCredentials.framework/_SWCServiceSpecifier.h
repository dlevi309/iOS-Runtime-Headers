/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _SWCApplicationIdentifier, _SWCDomain, NSString;

@interface _SWCServiceSpecifier : NSObject <SWCRedactedDescription, NSSecureCoding, NSCopying> {

	_SWCApplicationIdentifier* _applicationIdentifier;
	_SWCDomain* _domain;
	NSString* _serviceType;

}

@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * applicationIdentifierPrefix; 
@property (getter=isDomainWildcard,readonly) BOOL domainWildcard; 
@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) _SWCApplicationIdentifier * SWCApplicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (readonly) _SWCDomain * SWCDomain;                                            //@synthesize domain=_domain - In the implementation block
@property (getter=isFullySpecified,readonly) BOOL fullySpecified; 
@property (readonly) NSString * serviceType;                                            //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) NSString * applicationIdentifier; 
@property (readonly) NSString * domain; 
+(BOOL)supportsSecureCoding;
+(id)serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id*)arg3 ;
+(id)serviceSpecifiersWithEntitlementValue:(id)arg1 error:(id*)arg2 ;
+(id)_serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(id)redactedDescription;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)applicationIdentifier;
-(NSString *)applicationIdentifierPrefix;
-(id)initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3 ;
-(NSString *)serviceType;
-(id)_initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3 ;
-(BOOL)isFullySpecified;
-(_SWCApplicationIdentifier *)SWCApplicationIdentifier;
-(_SWCDomain *)SWCDomain;
-(BOOL)isDomainWildcard;
@end

