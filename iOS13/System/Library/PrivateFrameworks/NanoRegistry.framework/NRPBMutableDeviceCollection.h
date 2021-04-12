/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NRPBMutableDeviceCollection : PBCodable <NSCopying> {

	NSMutableArray* _devices;
	NSMutableArray* _pairingIDs;

}

@property (nonatomic,retain) NSMutableArray * pairingIDs;              //@synthesize pairingIDs=_pairingIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * devices;                 //@synthesize devices=_devices - In the implementation block
+(Class)pairingIDsType;
+(Class)devicesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)devices;
-(void)setDevices:(NSMutableArray *)arg1 ;
-(void)clearDevices;
-(unsigned long long)devicesCount;
-(void)addDevices:(id)arg1 ;
-(void)addPairingIDs:(id)arg1 ;
-(unsigned long long)pairingIDsCount;
-(void)clearPairingIDs;
-(id)pairingIDsAtIndex:(unsigned long long)arg1 ;
-(id)devicesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)pairingIDs;
-(void)setPairingIDs:(NSMutableArray *)arg1 ;
@end

