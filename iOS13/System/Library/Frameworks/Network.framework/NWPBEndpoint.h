/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWPBAddressEndpoint, NWPBHostEndpoint, NWPBInterface, NWPBServiceEndpoint, NSData;

@interface NWPBEndpoint : PBCodable <NSCopying> {

	NWPBAddressEndpoint* _address;
	NWPBHostEndpoint* _host;
	NWPBInterface* _interface;
	NWPBServiceEndpoint* _service;
	NSData* _txtRecord;

}

@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) NWPBAddressEndpoint * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) BOOL hasHost; 
@property (nonatomic,retain) NWPBHostEndpoint * host;                    //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NWPBServiceEndpoint * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) BOOL hasInterface; 
@property (nonatomic,retain) NWPBInterface * interface;                  //@synthesize interface=_interface - In the implementation block
@property (nonatomic,readonly) BOOL hasTxtRecord; 
@property (nonatomic,retain) NSData * txtRecord;                         //@synthesize txtRecord=_txtRecord - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NWPBHostEndpoint *)host;
-(id)dictionaryRepresentation;
-(NWPBAddressEndpoint *)address;
-(void)setHost:(NWPBHostEndpoint *)arg1 ;
-(NWPBInterface *)interface;
-(void)setInterface:(NWPBInterface *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NWPBServiceEndpoint *)service;
-(void)setAddress:(NWPBAddressEndpoint *)arg1 ;
-(void)setService:(NWPBServiceEndpoint *)arg1 ;
-(NSData *)txtRecord;
-(BOOL)hasAddress;
-(BOOL)hasHost;
-(BOOL)hasService;
-(BOOL)hasInterface;
-(BOOL)hasTxtRecord;
-(void)setTxtRecord:(NSData *)arg1 ;
@end

