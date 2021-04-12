/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)addresses;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setIncludedRoutes:(NSArray *)arg1 ;
-(id)initWithAddresses:(id)arg1 networkPrefixLengths:(id)arg2 ;
-(long long)configMethod;
-(NSString *)router;
-(NSArray *)includedRoutes;
-(NSArray *)excludedRoutes;
-(void)setConfigMethod:(long long)arg1 ;
-(void)setRouter:(NSString *)arg1 ;
-(void)setExcludedRoutes:(NSArray *)arg1 ;
-(BOOL)hasDefaultRoute;
-(NSArray *)networkPrefixLengths;
@end

