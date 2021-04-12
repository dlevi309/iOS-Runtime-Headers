/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDWiFiNWActivityAssoc, AWDWiFiNWActivityStateBin, NSMutableArray;

@interface AWDWiFiNWActivityInterfaceStats : PBCodable <NSCopying> {

	AWDWiFiNWActivityAssoc* _assoc;
	AWDWiFiNWActivityStateBin* _awdlMode;
	NSMutableArray* _bytes;
	unsigned _consecutivedps;
	unsigned _dps;
	NSMutableArray* _npeers;
	NSMutableArray* _packets;
	NSMutableArray* _peers;
	int _role;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasRole; 
@property (assign,nonatomic) int role;                                          //@synthesize role=_role - In the implementation block
@property (nonatomic,retain) NSMutableArray * packets;                          //@synthesize packets=_packets - In the implementation block
@property (nonatomic,retain) NSMutableArray * bytes;                            //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * peers;                            //@synthesize peers=_peers - In the implementation block
@property (nonatomic,retain) NSMutableArray * npeers;                           //@synthesize npeers=_npeers - In the implementation block
@property (assign,nonatomic) BOOL hasDps; 
@property (assign,nonatomic) unsigned dps;                                      //@synthesize dps=_dps - In the implementation block
@property (assign,nonatomic) BOOL hasConsecutivedps; 
@property (assign,nonatomic) unsigned consecutivedps;                           //@synthesize consecutivedps=_consecutivedps - In the implementation block
@property (nonatomic,readonly) BOOL hasAssoc; 
@property (nonatomic,retain) AWDWiFiNWActivityAssoc * assoc;                    //@synthesize assoc=_assoc - In the implementation block
@property (nonatomic,readonly) BOOL hasAwdlMode; 
@property (nonatomic,retain) AWDWiFiNWActivityStateBin * awdlMode;              //@synthesize awdlMode=_awdlMode - In the implementation block
+(Class)packetsType;
+(Class)peerType;
+(Class)bytesType;
+(Class)npeersType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSMutableArray *)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bytesAtIndex:(unsigned long long)arg1 ;
-(int)role;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addBytes:(id)arg1 ;
-(void)setRole:(int)arg1 ;
-(void)setBytes:(NSMutableArray *)arg1 ;
-(void)setHasRole:(BOOL)arg1 ;
-(BOOL)hasRole;
-(id)roleAsString:(int)arg1 ;
-(int)StringAsRole:(id)arg1 ;
-(NSMutableArray *)peers;
-(void)setPeers:(NSMutableArray *)arg1 ;
-(void)addPackets:(id)arg1 ;
-(void)setPackets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)packets;
-(unsigned long long)packetsCount;
-(void)clearPackets;
-(id)packetsAtIndex:(unsigned long long)arg1 ;
-(void)addPeer:(id)arg1 ;
-(unsigned long long)peersCount;
-(void)clearPeers;
-(id)peerAtIndex:(unsigned long long)arg1 ;
-(void)addNpeers:(id)arg1 ;
-(unsigned long long)bytesCount;
-(void)clearBytes;
-(unsigned long long)npeersCount;
-(void)clearNpeers;
-(id)npeersAtIndex:(unsigned long long)arg1 ;
-(void)setAssoc:(AWDWiFiNWActivityAssoc *)arg1 ;
-(void)setAwdlMode:(AWDWiFiNWActivityStateBin *)arg1 ;
-(void)setDps:(unsigned)arg1 ;
-(void)setHasDps:(BOOL)arg1 ;
-(BOOL)hasDps;
-(void)setConsecutivedps:(unsigned)arg1 ;
-(void)setHasConsecutivedps:(BOOL)arg1 ;
-(BOOL)hasConsecutivedps;
-(BOOL)hasAssoc;
-(BOOL)hasAwdlMode;
-(NSMutableArray *)npeers;
-(void)setNpeers:(NSMutableArray *)arg1 ;
-(unsigned)dps;
-(unsigned)consecutivedps;
-(AWDWiFiNWActivityAssoc *)assoc;
-(AWDWiFiNWActivityStateBin *)awdlMode;
@end

