/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)MACAddress;
-(void)setMACAddress:(NSString *)arg1 ;
-(BOOL)isEqualToAWDLPeerContext:(id)arg1 ;
@end

