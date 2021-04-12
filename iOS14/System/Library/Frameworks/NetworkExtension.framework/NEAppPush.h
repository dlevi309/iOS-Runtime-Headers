/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray, NSString;

@interface NEAppPush : NSObject <NSSecureCoding, NSCopying> {

	BOOL _enabled;
	NSDictionary* _providerConfiguration;
	NSArray* _matchSSIDs;
	NSString* _pluginType;
	NSString* _providerBundleIdentifier;

}

@property (getter=isEnabled) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (copy) NSDictionary * providerConfiguration;              //@synthesize providerConfiguration=_providerConfiguration - In the implementation block
@property (copy) NSArray * matchSSIDs;                              //@synthesize matchSSIDs=_matchSSIDs - In the implementation block
@property (copy) NSString * pluginType;                             //@synthesize pluginType=_pluginType - In the implementation block
@property (copy) NSString * providerBundleIdentifier;               //@synthesize providerBundleIdentifier=_providerBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)init;
-(NSString *)pluginType;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPluginType:(NSString *)arg1 ;
-(NSDictionary *)providerConfiguration;
-(NSString *)providerBundleIdentifier;
-(void)setProviderBundleIdentifier:(NSString *)arg1 ;
-(void)setProviderConfiguration:(NSDictionary *)arg1 ;
-(id)description;
-(BOOL)overlapsWithConfiguration:(id)arg1 ;
-(NSArray *)matchSSIDs;
-(void)setMatchSSIDs:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

