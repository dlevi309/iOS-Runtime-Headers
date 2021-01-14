/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_nw_interface;
@class NSObject, NSString;

@interface NWInterface : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying> {

	NSObject*<OS_nw_interface> _internalInterface;

}

@property (nonatomic,readonly) BOOL supportsMulticast; 
@property (nonatomic,readonly) BOOL hasDNS; 
@property (nonatomic,readonly) BOOL hasNAT64; 
@property (getter=isIPv4Routable,nonatomic,readonly) BOOL ipv4Routable; 
@property (getter=isIPv6Routable,nonatomic,readonly) BOOL ipv6Routable; 
@property (retain) NSObject*<OS_nw_interface> internalInterface;                     //@synthesize internalInterface=_internalInterface - In the implementation block
@property (nonatomic,readonly) unsigned long long generation; 
@property (nonatomic,readonly) long long mtu; 
@property (nonatomic,readonly) NWInterface * delegateInterface; 
@property (nonatomic,readonly) NSString * typeString; 
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,readonly) NSString * interfaceName; 
@property (nonatomic,readonly) unsigned long long interfaceIndex; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long subtype; 
@property (getter=isExpensive,nonatomic,readonly) BOOL expensive; 
@property (getter=isConstrained,nonatomic,readonly) BOOL constrained; 
+(BOOL)supportsSecureCoding;
+(id)descriptionForSubtype:(long long)arg1 ;
+(id)descriptionForType:(long long)arg1 ;
+(id)interfaceWithProtocolBufferData:(id)arg1 ;
-(NSString *)typeString;
-(long long)mtu;
-(id)initWithInterfaceName:(id)arg1 ;
-(long long)subtype;
-(id)initWithInterfaceIndex:(unsigned long long)arg1 ;
-(unsigned long long)generation;
-(unsigned long long)interfaceIndex;
-(NSString *)privateDescription;
-(BOOL)isDeepEqual:(id)arg1 ;
-(id)copyLocalAddressForDefaultIPv4;
-(BOOL)isShallowEqual:(id)arg1 ;
-(BOOL)supportsMulticast;
-(id)createProtocolBufferObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyLocalAddressForRemoteAddress:(id)arg1 ;
-(id)ipv4Broadcast;
-(NWInterface *)delegateInterface;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)interfaceName;
-(void)setInternalInterface:(NSObject*<OS_nw_interface>)arg1 ;
-(id)description;
-(BOOL)hasDNS;
-(long long)type;
-(unsigned long long)hash;
-(BOOL)isIPv6Routable;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_nw_interface>)internalInterface;
-(id)initWithInterfaceIndex:(unsigned long long)arg1 interfaceName:(id)arg2 ;
-(BOOL)hasNAT64;
-(BOOL)isConstrained;
-(BOOL)isIPv4Routable;
-(id)copyLocalAddressForDefaultIPv6;
-(id)initWithInterface:(id)arg1 ;
-(BOOL)isExpensive;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)ipv4Netmask;
@end

