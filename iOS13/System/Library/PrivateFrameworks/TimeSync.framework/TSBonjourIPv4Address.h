/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TimeSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSBonjourIPv4Address : NSObject <NSCopying> {

	unsigned char _linkLayerAddress[6];
	BOOL _hasLinkLayerAddress;
	unsigned _ipv4Address;

}

@property (assign,nonatomic) BOOL hasLinkLayerAddress;                    //@synthesize hasLinkLayerAddress=_hasLinkLayerAddress - In the implementation block
@property (nonatomic,readonly) unsigned ipv4Address;                      //@synthesize ipv4Address=_ipv4Address - In the implementation block
@property (nonatomic,readonly) const char* linkLayerAddress; 
+(BOOL)getLinkLayerAddress:(char*)arg1 forIPv4Address:(unsigned)arg2 error:(id*)arg3 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)ipv4Address;
-(id)initWithIPv4Address:(unsigned)arg1 ;
-(BOOL)hasLinkLayerAddress;
-(void)setHasLinkLayerAddress:(BOOL)arg1 ;
-(const char*)linkLayerAddress;
-(BOOL)getLinkLayerAddressError:(id*)arg1 ;
@end

