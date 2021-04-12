/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface PBBProtoTinkerWirelessCredentials : PBCodable <NSCopying> {

	NSMutableArray* _serializedNetworkRecords;

}

@property (nonatomic,retain) NSMutableArray * serializedNetworkRecords;              //@synthesize serializedNetworkRecords=_serializedNetworkRecords - In the implementation block
+(Class)serializedNetworkRecordType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addSerializedNetworkRecord:(id)arg1 ;
-(unsigned long long)serializedNetworkRecordsCount;
-(void)clearSerializedNetworkRecords;
-(id)serializedNetworkRecordAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)serializedNetworkRecords;
-(void)setSerializedNetworkRecords:(NSMutableArray *)arg1 ;
@end

