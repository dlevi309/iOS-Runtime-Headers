/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NETunnelNetworkSettings.h>

@class NSArray;

@interface NETransparentProxyNetworkSettings : NETunnelNetworkSettings {

	NSArray* _includedNetworkRules;
	NSArray* _excludedNetworkRules;

}

@property (copy) NSArray * includedNetworkRules;              //@synthesize includedNetworkRules=_includedNetworkRules - In the implementation block
@property (copy) NSArray * excludedNetworkRules;              //@synthesize excludedNetworkRules=_excludedNetworkRules - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)includedNetworkRules;
-(NSArray *)excludedNetworkRules;
-(void)setIncludedNetworkRules:(NSArray *)arg1 ;
-(void)setExcludedNetworkRules:(NSArray *)arg1 ;
-(BOOL)validateNetworkRule:(id)arg1 collectErrors:(id)arg2 ;
@end

