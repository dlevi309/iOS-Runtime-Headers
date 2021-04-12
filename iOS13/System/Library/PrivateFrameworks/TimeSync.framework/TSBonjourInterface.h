/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@protocol OS_dispatch_queue, TSBonjourInterfaceDelegate;
#import <TimeSync/TimeSync-Structs.h>
@class NSObject, NSString, TSBonjourIPv4Address, NSArray, TSBonjourIPv6Address, TSBonjourNode;

@interface TSBonjourInterface : NSObject {

	DNSServiceRef_tRef _resolveRef;
	DNSServiceRef_tRef _addressRef;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	NSString* _type;
	NSString* _domain;
	unsigned _interfaceIndex;
	NSString* _hostTarget;
	unsigned short _port;
	NSString* _interfaceName;
	TSBonjourIPv4Address* _ipv4Address;
	NSArray* _ipv4Addresses;
	TSBonjourIPv6Address* _ipv6Address;
	NSArray* _ipv6Addresses;
	id<TSBonjourInterfaceDelegate> _delegate;
	TSBonjourNode* _node;

}

@property (nonatomic,copy) TSBonjourIPv4Address * ipv4Address;                     //@synthesize ipv4Address=_ipv4Address - In the implementation block
@property (nonatomic,copy) NSArray * ipv4Addresses;                                //@synthesize ipv4Addresses=_ipv4Addresses - In the implementation block
@property (nonatomic,copy) TSBonjourIPv6Address * ipv6Address;                     //@synthesize ipv6Address=_ipv6Address - In the implementation block
@property (nonatomic,copy) NSArray * ipv6Addresses;                                //@synthesize ipv6Addresses=_ipv6Addresses - In the implementation block
@property (assign,nonatomic) TSBonjourNode * node;                                 //@synthesize node=_node - In the implementation block
@property (nonatomic,copy,readonly) NSString * interfaceName;                      //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) id<TSBonjourInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<TSBonjourInterfaceDelegate>)delegate;
-(void)setDelegate:(id<TSBonjourInterfaceDelegate>)arg1 ;
-(TSBonjourNode *)node;
-(void)setNode:(TSBonjourNode *)arg1 ;
-(NSString *)interfaceName;
-(TSBonjourIPv4Address *)ipv4Address;
-(TSBonjourIPv6Address *)ipv6Address;
-(id)initWithServiceName:(id)arg1 type:(id)arg2 andDomain:(id)arg3 onInterfaceIndex:(unsigned)arg4 andName:(id)arg5 ;
-(BOOL)startAddressLookupWithError:(id*)arg1 ;
-(void)setIpv4Addresses:(NSArray *)arg1 ;
-(void)setIpv6Addresses:(NSArray *)arg1 ;
-(void)resolvedWithHostTarget:(const char*)arg1 port:(unsigned short)arg2 ;
-(BOOL)startResolveWithError:(id*)arg1 ;
-(BOOL)stopResolve;
-(BOOL)stopAddressLookup;
-(void)pokeIPv6Destination;
-(void)setIpv4Address:(TSBonjourIPv4Address *)arg1 ;
-(NSArray *)ipv4Addresses;
-(void)setIpv6Address:(TSBonjourIPv6Address *)arg1 ;
-(NSArray *)ipv6Addresses;
@end

