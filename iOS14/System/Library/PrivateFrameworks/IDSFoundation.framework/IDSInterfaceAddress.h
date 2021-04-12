/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class IDSSockAddrWrapper, NSString, NSData;

@interface IDSInterfaceAddress : NSObject {

	IDSSockAddrWrapper* _address;
	IDSSockAddrWrapper* _external;
	IDSSockAddrWrapper* _netmask;
	IDSSockAddrWrapper* _destination;
	NSString* _name;
	unsigned _index;
	NSString* _delegatedName;
	unsigned _delegatedIndex;
	NSData* _bssid;
	BOOL _AWDL;
	BOOL _Cellular;
	BOOL _temporary;
	BOOL _companionLink;
	BOOL _expensive;
	BOOL _constrained;

}

@property (readonly) unsigned long long IPVersion; 
@property (readonly) IDSSockAddrWrapper * address;                           //@synthesize address=_address - In the implementation block
@property (copy) IDSSockAddrWrapper * external;                              //@synthesize external=_external - In the implementation block
@property (readonly) IDSSockAddrWrapper * netmask;                           //@synthesize netmask=_netmask - In the implementation block
@property (readonly) IDSSockAddrWrapper * destination;                       //@synthesize destination=_destination - In the implementation block
@property (readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (readonly) unsigned index;                                         //@synthesize index=_index - In the implementation block
@property (readonly) NSString * delegatedName;                               //@synthesize delegatedName=_delegatedName - In the implementation block
@property (readonly) unsigned delegatedIndex;                                //@synthesize delegatedIndex=_delegatedIndex - In the implementation block
@property (readonly) NSData * bssid;                                         //@synthesize bssid=_bssid - In the implementation block
@property (getter=isAWDL,readonly) BOOL AWDL;                                //@synthesize AWDL=_AWDL - In the implementation block
@property (getter=isCellular,readonly) BOOL Cellular;                        //@synthesize Cellular=_Cellular - In the implementation block
@property (getter=isTemporaryIPv6,readonly) BOOL temporary;                  //@synthesize temporary=_temporary - In the implementation block
@property (getter=isCompanionLink,readonly) BOOL companionLink;              //@synthesize companionLink=_companionLink - In the implementation block
@property (nonatomic,readonly) BOOL expensive;                               //@synthesize expensive=_expensive - In the implementation block
@property (assign,nonatomic) BOOL constrained;                               //@synthesize constrained=_constrained - In the implementation block
+(id)BSSIDWithInterfaceName:(id)arg1 ;
+(id)interfaceAddressWithTransmittedBytes:(char*)arg1 length:(long long)arg2 withLocalInterfaceName:(id)arg3 ;
+(id)interfaceAddress:(ifaddrs*)arg1 eflags:(unsigned long long)arg2 v6flags:(int)arg3 iftype:(int)arg4 ;
-(unsigned)index;
-(BOOL)isAWDL;
-(void)setConstrained:(BOOL)arg1 ;
-(IDSSockAddrWrapper *)netmask;
-(IDSSockAddrWrapper *)external;
-(BOOL)isTemporaryIPv6;
-(id)initWithInterfaceAddress:(ifaddrs*)arg1 bflags:(unsigned char)arg2 bssid:(char*)arg3 bssidLength:(unsigned char)arg4 ;
-(long long)getTransmittableBytes:(char*)arg1 withPrefixByte:(unsigned char)arg2 ;
-(NSString *)name;
-(id)description;
-(BOOL)expensive;
-(IDSSockAddrWrapper *)address;
-(BOOL)constrained;
-(BOOL)isCellular;
-(NSData *)bssid;
-(void)setExternal:(IDSSockAddrWrapper *)arg1 ;
-(BOOL)isCompanionLink;
-(NSString *)delegatedName;
-(unsigned)delegatedIndex;
-(unsigned long long)IPVersion;
-(IDSSockAddrWrapper *)destination;
@end

