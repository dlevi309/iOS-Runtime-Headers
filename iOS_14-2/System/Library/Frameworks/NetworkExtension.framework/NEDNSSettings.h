/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface NEDNSSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	BOOL _matchDomainsNoSearch;
	NSArray* _servers;
	NSArray* _searchDomains;
	NSString* _domainName;
	NSArray* _matchDomains;

}

@property (readonly) long long dnsProtocol; 
@property (readonly) NSArray * servers;                    //@synthesize servers=_servers - In the implementation block
@property (copy) NSArray * searchDomains;                  //@synthesize searchDomains=_searchDomains - In the implementation block
@property (copy) NSString * domainName;                    //@synthesize domainName=_domainName - In the implementation block
@property (copy) NSArray * matchDomains;                   //@synthesize matchDomains=_matchDomains - In the implementation block
@property (assign) BOOL matchDomainsNoSearch;              //@synthesize matchDomainsNoSearch=_matchDomainsNoSearch - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createDNSSettingsFromLegacyDictionary:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setMatchDomains:(NSArray *)arg1 ;
-(NSString *)domainName;
-(NSArray *)matchDomains;
-(id)copyLegacyDictionary;
-(long long)dnsProtocol;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(void)setDomainName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)servers;
-(BOOL)overlapsWithSettings:(id)arg1 ;
-(BOOL)matchDomainsNoSearch;
-(id)initWithServers:(id)arg1 ;
-(void)setMatchDomainsNoSearch:(BOOL)arg1 ;
-(void)setSearchDomains:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)searchDomains;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

