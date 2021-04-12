/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWHostEndpoint;

@interface NENetworkRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	NWHostEndpoint* _matchRemoteEndpoint;
	unsigned long long _matchRemotePrefix;
	NWHostEndpoint* _matchLocalNetwork;
	unsigned long long _matchLocalPrefix;
	long long _matchProtocol;
	long long _matchDirection;

}

@property (readonly) NWHostEndpoint * matchRemoteEndpoint;              //@synthesize matchRemoteEndpoint=_matchRemoteEndpoint - In the implementation block
@property (readonly) unsigned long long matchRemotePrefix;              //@synthesize matchRemotePrefix=_matchRemotePrefix - In the implementation block
@property (readonly) NWHostEndpoint * matchLocalNetwork;                //@synthesize matchLocalNetwork=_matchLocalNetwork - In the implementation block
@property (readonly) unsigned long long matchLocalPrefix;               //@synthesize matchLocalPrefix=_matchLocalPrefix - In the implementation block
@property (readonly) long long matchProtocol;                           //@synthesize matchProtocol=_matchProtocol - In the implementation block
@property (readonly) long long matchDirection;                          //@synthesize matchDirection=_matchDirection - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDestinationNetwork:(id)arg1 prefix:(unsigned long long)arg2 protocol:(long long)arg3 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithDestinationHost:(id)arg1 protocol:(long long)arg2 ;
-(id)initWithRemoteNetwork:(id)arg1 remotePrefix:(unsigned long long)arg2 localNetwork:(id)arg3 localPrefix:(unsigned long long)arg4 protocol:(long long)arg5 direction:(long long)arg6 ;
-(NWHostEndpoint *)matchRemoteEndpoint;
-(unsigned long long)matchRemotePrefix;
-(NWHostEndpoint *)matchLocalNetwork;
-(unsigned long long)matchLocalPrefix;
-(long long)matchProtocol;
-(long long)matchDirection;
@end

