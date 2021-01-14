/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GEOXPCSerializable.h>

@class NSData, NSString, geo_isolater;

@interface GEOApplicationAuditToken : NSObject <NSSecureCoding, GEOXPCSerializable> {

	NSData* _tokenData;
	NSString* _proxiedBundleId;
	NSString* _resolvedBundleId;
	NSString* _resolvedNetworkAttributionBundleId;
	geo_isolater* _isolater;
	BOOL _proxiedExternalBundleId;
	NSString* _secondaryIdentifier;

}

@property (getter=_secondaryIdentifier,nonatomic,copy,readonly) NSString * secondaryIdentifier;              //@synthesize secondaryIdentifier=_secondaryIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * proxiedBundleId;                                                   //@synthesize proxiedBundleId=_proxiedBundleId - In the implementation block
@property (getter=isProxiedExternalBundleId,nonatomic,readonly) BOOL proxiedExternalBundleId;                //@synthesize proxiedExternalBundleId=_proxiedExternalBundleId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)currentProcessAuditToken;
-(id)_secondaryIdentifier;
-(id)initWithXPCConnection:(id)arg1 ;
-(id)init;
-(id)bundleId;
-(id)initWithProxiedApplicationBundleId:(id)arg1 ;
-(id)initWithSecondaryIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(id)bundleIdForNetworkAttribution;
-(id)publicLogDescription;
-(id)_bundleIdForAuditToken;
-(NSString *)description;
-(id)initWithAuditTokenData:(id)arg1 ;
-(id)backingTokenData;
-(id)initWithProxiedExternalApplicationBundleId:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)isProxiedExternalBundleId;
-(NSString *)proxiedBundleId;
-(id)initWithNSXPCConnection:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

