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

@class NSString;

@interface NEIPv4Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	NSString* _destinationAddress;
	NSString* _destinationSubnetMask;
	NSString* _gatewayAddress;

}

@property (readonly) NSString * destinationAddress;                 //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (readonly) NSString * destinationSubnetMask;              //@synthesize destinationSubnetMask=_destinationSubnetMask - In the implementation block
@property (copy) NSString * gatewayAddress;                         //@synthesize gatewayAddress=_gatewayAddress - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultRoute;
+(void)initGlobals;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(BOOL)isDefaultRoute;
-(id)copyLegacyDictionary;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDestinationAddress:(id)arg1 subnetMask:(id)arg2 ;
-(void)setGatewayAddress:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)destinationAddress;
-(NSString *)destinationSubnetMask;
-(NSString *)gatewayAddress;
@end

