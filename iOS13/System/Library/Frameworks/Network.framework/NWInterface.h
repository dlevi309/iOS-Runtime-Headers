/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (retain) NSObject*<OS_nw_interface> internalInterface;                   //@synthesize internalInterface=_internalInterface - In the implementation block
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
+(id)descriptionForType:(long long)arg1 ;
+(id)descriptionForSubtype:(long long)arg1 ;
+(id)interfaceWithProtocolBufferData:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInterface:(id)arg1 ;
-(long long)subtype;
-(unsigned long long)generation;
-(NSString *)typeString;
-(NSString *)interfaceName;
-(BOOL)isExpensive;
-(BOOL)isConstrained;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)privateDescription;
-(id)createProtocolBufferObject;
-(NWInterface *)delegateInterface;
-(long long)mtu;
-(id)initWithInterfaceName:(id)arg1 ;
-(id)initWithInterfaceIndex:(unsigned long long)arg1 ;
-(unsigned long long)interfaceIndex;
-(id)ipv4Netmask;
-(id)ipv4Broadcast;
-(BOOL)isShallowEqual:(id)arg1 ;
-(BOOL)isDeepEqual:(id)arg1 ;
-(NSObject*<OS_nw_interface>)internalInterface;
-(void)setInternalInterface:(NSObject*<OS_nw_interface>)arg1 ;
-(id)initWithInterfaceIndex:(unsigned long long)arg1 interfaceName:(id)arg2 ;
@end

