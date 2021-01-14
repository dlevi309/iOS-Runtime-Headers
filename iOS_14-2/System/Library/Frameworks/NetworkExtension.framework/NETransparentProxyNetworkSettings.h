/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NETunnelNetworkSettings.h>

@class NSArray;

@interface NETransparentProxyNetworkSettings : NETunnelNetworkSettings {

	BOOL _isFullyTransparent;
	NSArray* _includedNetworkRules;
	NSArray* _excludedNetworkRules;

}

@property (assign) BOOL isFullyTransparent;                   //@synthesize isFullyTransparent=_isFullyTransparent - In the implementation block
@property (copy) NSArray * includedNetworkRules;              //@synthesize includedNetworkRules=_includedNetworkRules - In the implementation block
@property (copy) NSArray * excludedNetworkRules;              //@synthesize excludedNetworkRules=_excludedNetworkRules - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)includedNetworkRules;
-(NSArray *)excludedNetworkRules;
-(BOOL)isFullyTransparent;
-(void)setIncludedNetworkRules:(NSArray *)arg1 ;
-(void)setExcludedNetworkRules:(NSArray *)arg1 ;
-(void)setIsFullyTransparent:(BOOL)arg1 ;
-(BOOL)validateNetworkRule:(id)arg1 collectErrors:(id)arg2 ;
@end

