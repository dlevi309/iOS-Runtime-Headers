/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)ipv4Address;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIPv4Address:(unsigned)arg1 ;
-(BOOL)hasLinkLayerAddress;
-(void)setHasLinkLayerAddress:(BOOL)arg1 ;
-(const char*)linkLayerAddress;
-(BOOL)getLinkLayerAddressError:(id*)arg1 ;
@end

