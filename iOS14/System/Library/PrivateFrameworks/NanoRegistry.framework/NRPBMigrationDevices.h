/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface NRPBMigrationDevices : PBCodable <NSCopying> {

	NSMutableArray* _devices;
	NSData* _phoneUDIDHash;

}

@property (nonatomic,retain) NSMutableArray * devices;              //@synthesize devices=_devices - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneUDIDHash; 
@property (nonatomic,retain) NSData * phoneUDIDHash;                //@synthesize phoneUDIDHash=_phoneUDIDHash - In the implementation block
+(Class)devicesType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)devices;
-(void)setDevices:(NSMutableArray *)arg1 ;
-(id)devicesAtIndex:(unsigned long long)arg1 ;
-(void)addDevices:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)devicesCount;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearDevices;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPhoneUDIDHash:(NSData *)arg1 ;
-(BOOL)hasPhoneUDIDHash;
-(NSData *)phoneUDIDHash;
@end

