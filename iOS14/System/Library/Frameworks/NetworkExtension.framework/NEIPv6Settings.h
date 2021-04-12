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

@interface NEIPv6Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	NSArray* _addresses;
	NSArray* _networkPrefixLengths;
	NSArray* _includedRoutes;
	NSArray* _excludedRoutes;
	long long _configMethod;
	NSString* _router;

}

@property (assign) long long configMethod;                        //@synthesize configMethod=_configMethod - In the implementation block
@property (copy) NSString * router;                               //@synthesize router=_router - In the implementation block
@property (readonly) NSArray * addresses;                         //@synthesize addresses=_addresses - In the implementation block
@property (readonly) NSArray * networkPrefixLengths;              //@synthesize networkPrefixLengths=_networkPrefixLengths - In the implementation block
@property (copy) NSArray * includedRoutes;                        //@synthesize includedRoutes=_includedRoutes - In the implementation block
@property (copy) NSArray * excludedRoutes;                        //@synthesize excludedRoutes=_excludedRoutes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NSArray *)addresses;
-(id)copyLegacyDictionary;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)init;
-(NSString *)router;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIncludedRoutes:(NSArray *)arg1 ;
-(id)initWithAddresses:(id)arg1 networkPrefixLengths:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)configMethod;
-(NSArray *)includedRoutes;
-(NSArray *)excludedRoutes;
-(void)setConfigMethod:(long long)arg1 ;
-(void)setRouter:(NSString *)arg1 ;
-(void)setExcludedRoutes:(NSArray *)arg1 ;
-(BOOL)hasDefaultRoute;
-(NSArray *)networkPrefixLengths;
@end

