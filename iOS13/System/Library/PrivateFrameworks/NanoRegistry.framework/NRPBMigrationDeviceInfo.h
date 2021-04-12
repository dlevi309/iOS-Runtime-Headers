/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setID:(NSData *)arg1 ;
-(void)setAdvertisedName:(NSString *)arg1 ;
-(NSData *)iD;
-(NSString *)advertisedName;
-(BOOL)hasID;
-(BOOL)hasAdvertisedName;
@end

