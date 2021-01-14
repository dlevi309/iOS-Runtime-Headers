/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocolPPP.h>

@interface NEVPNProtocolPPTP : NEVPNProtocolPPP {

	long long _encryptionLevel;

}

@property (assign) long long encryptionLevel;              //@synthesize encryptionLevel=_encryptionLevel - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(id)copyLegacyDictionary;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(SCNetworkInterfaceRef)createInterface;
-(long long)encryptionLevel;
-(void)setEncryptionLevel:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

