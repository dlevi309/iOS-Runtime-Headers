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

@interface NEIPv4Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	BOOL _overridePrimary;
	NSArray* _addresses;
	NSArray* _subnetMasks;
	NSArray* _includedRoutes;
	NSArray* _excludedRoutes;
	long long _configMethod;
	NSString* _router;

}

@property (assign) long long configMethod;               //@synthesize configMethod=_configMethod - In the implementation block
@property (copy) NSString * router;                      //@synthesize router=_router - In the implementation block
@property (assign) BOOL overridePrimary;                 //@synthesize overridePrimary=_overridePrimary - In the implementation block
@property (readonly) NSArray * addresses;                //@synthesize addresses=_addresses - In the implementation block
@property (readonly) NSArray * subnetMasks;              //@synthesize subnetMasks=_subnetMasks - In the implementation block
@property (copy) NSArray * includedRoutes;               //@synthesize includedRoutes=_includedRoutes - In the implementation block
@property (copy) NSArray * excludedRoutes;               //@synthesize excludedRoutes=_excludedRoutes - In the implementation block
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
-(id)initWithAddresses:(id)arg1 subnetMasks:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)configMethod;
-(NSArray *)subnetMasks;
-(NSArray *)includedRoutes;
-(NSArray *)excludedRoutes;
-(BOOL)overridePrimary;
-(void)setConfigMethod:(long long)arg1 ;
-(void)setRouter:(NSString *)arg1 ;
-(void)setExcludedRoutes:(NSArray *)arg1 ;
-(void)setOverridePrimary:(BOOL)arg1 ;
-(BOOL)hasDefaultRoute;
@end

