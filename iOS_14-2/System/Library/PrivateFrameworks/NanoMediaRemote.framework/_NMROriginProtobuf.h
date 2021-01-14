/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface _NMROriginProtobuf : PBCodable <NSCopying> {

	NSData* _deviceInfoData;
	NSString* _displayName;
	int _uniqueIdentifier;
	SCD_Struct_NM12 _has;

}

@property (assign,nonatomic) BOOL hasUniqueIdentifier; 
@property (assign,nonatomic) int uniqueIdentifier;                  //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfoData; 
@property (nonatomic,retain) NSData * deviceInfoData;               //@synthesize deviceInfoData=_deviceInfoData - In the implementation block
-(id)dictionaryRepresentation;
-(void)setUniqueIdentifier:(int)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(int)uniqueIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasUniqueIdentifier:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisplayName;
-(NSData *)deviceInfoData;
-(void)setDeviceInfoData:(NSData *)arg1 ;
-(BOOL)hasDeviceInfoData;
@end

