/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NETunnelNetworkSettings.h>

@class NEIPv4Settings, NEIPv6Settings, NSNumber;

@interface NEPacketTunnelNetworkSettings : NETunnelNetworkSettings {

	NEIPv4Settings* _IPv4Settings;
	NEIPv6Settings* _IPv6Settings;
	NSNumber* _tunnelOverheadBytes;
	NSNumber* _MTU;

}

@property (copy) NEIPv4Settings * IPv4Settings;               //@synthesize IPv4Settings=_IPv4Settings - In the implementation block
@property (copy) NEIPv6Settings * IPv6Settings;               //@synthesize IPv6Settings=_IPv6Settings - In the implementation block
@property (copy) NSNumber * tunnelOverheadBytes;              //@synthesize tunnelOverheadBytes=_tunnelOverheadBytes - In the implementation block
@property (copy) NSNumber * MTU;                              //@synthesize MTU=_MTU - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMTU:(NSNumber *)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setIPv4Settings:(NEIPv4Settings *)arg1 ;
-(void)setIPv6Settings:(NEIPv6Settings *)arg1 ;
-(NEIPv4Settings *)IPv4Settings;
-(NEIPv6Settings *)IPv6Settings;
-(NSNumber *)tunnelOverheadBytes;
-(NSNumber *)MTU;
-(void)setTunnelOverheadBytes:(NSNumber *)arg1 ;
@end

