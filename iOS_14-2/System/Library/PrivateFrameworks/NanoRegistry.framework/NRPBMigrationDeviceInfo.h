/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NRPBMigrationDeviceInfo : PBCodable <NSCopying> {

	NSString* _advertisedName;
	NSData* _iD;
	NSString* _name;

}

@property (nonatomic,readonly) BOOL hasID; 
@property (nonatomic,retain) NSData * iD;                            //@synthesize iD=_iD - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasAdvertisedName; 
@property (nonatomic,retain) NSString * advertisedName;              //@synthesize advertisedName=_advertisedName - In the implementation block
-(NSData *)iD;
-(id)dictionaryRepresentation;
-(void)setID:(NSData *)arg1 ;
-(BOOL)hasName;
-(BOOL)hasAdvertisedName;
-(BOOL)hasID;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAdvertisedName:(NSString *)arg1 ;
-(NSString *)advertisedName;
@end

