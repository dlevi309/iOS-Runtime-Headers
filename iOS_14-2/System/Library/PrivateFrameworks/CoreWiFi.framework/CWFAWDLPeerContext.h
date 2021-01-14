/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CWFAWDLPeerContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _MACAddress;
	NSString* _interfaceName;

}

@property (nonatomic,copy) NSString * MACAddress;                 //@synthesize MACAddress=_MACAddress - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)AWDLPeerContextWithMACAddress:(id)arg1 interfaceName:(id)arg2 ;
-(NSString *)MACAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)interfaceName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMACAddress:(NSString *)arg1 ;
-(BOOL)isEqualToAWDLPeerContext:(id)arg1 ;
@end

