/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TimeSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSBonjourIPv6Address : NSObject <NSCopying> {

	unsigned char _ipv6Address[16];
	unsigned char _linkLayerAddress[6];
	BOOL _hasLinkLayerAddress;

}

@property (assign,nonatomic) BOOL hasLinkLayerAddress;                    //@synthesize hasLinkLayerAddress=_hasLinkLayerAddress - In the implementation block
@property (nonatomic,readonly) const char* ipv6Address; 
@property (nonatomic,readonly) const char* linkLayerAddress; 
+(BOOL)getLinkLayerAddress:(char*)arg1 forIPv6Address:(const char*)arg2 error:(id*)arg3 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)ipv6Address;
-(void)pokeDestinationAtPort:(unsigned short)arg1 onInterfaceIndex:(unsigned)arg2 ;
-(BOOL)hasLinkLayerAddress;
-(void)setHasLinkLayerAddress:(BOOL)arg1 ;
-(const char*)linkLayerAddress;
-(BOOL)getLinkLayerAddressError:(id*)arg1 ;
-(id)initWithIPv6Address:(const char*)arg1 ;
@end

