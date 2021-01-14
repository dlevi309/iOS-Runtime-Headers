/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FPItemID : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _providerID;
	NSString* _domainIdentifier;

}

@property (nonatomic,readonly) BOOL isPlaceholder; 
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * providerDomainID; 
@property (nonatomic,readonly) NSString * providerID;                      //@synthesize providerID=_providerID - In the implementation block
@property (nonatomic,readonly) NSString * domainIdentifier;                //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * providerIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)rootItemIDWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2 ;
+(id)rootItemIDWithProviderDomainID:(id)arg1 ;
+(id)csIdentifierFromFPIdentifier:(id)arg1 domainIdentifier:(id)arg2 ;
+(id)fpIdentifierFromCoreSpotlightIdentifier:(id)arg1 domainIdentifier:(id)arg2 ;
+(id)stringByRemovingPrefix:(id)arg1 fromIdentifier:(id)arg2 ;
+(id)coreSpotlightEncodedDomainIdentifier:(id)arg1 ;
+(void)getDomainIdentifier:(id*)arg1 andIdentifier:(id*)arg2 fromCoreSpotlightIdentifier:(id)arg3 ;
-(NSString *)providerIdentifier;
-(NSString *)providerID;
-(BOOL)isEqualToItemID:(id)arg1 ;
-(NSString *)domainIdentifier;
-(BOOL)isPlaceholder;
-(id)initWithProviderID:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3 ;
-(void)setProviderDomainID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithProviderDomainID:(id)arg1 itemIdentifier:(id)arg2 ;
-(NSString *)providerDomainID;
-(id)coreSpotlightIdentifier;
-(id)description;
-(id)initWithSearchableItem:(id)arg1 ;
-(id)initWithProviderID:(id)arg1 domainIdentifier:(id)arg2 coreSpotlightIdentifier:(id)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

