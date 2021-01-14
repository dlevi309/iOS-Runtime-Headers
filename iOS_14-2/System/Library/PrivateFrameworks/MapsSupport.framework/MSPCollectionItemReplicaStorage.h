/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray;

@interface MSPCollectionItemReplicaStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _clientIdentifier;
	NSMutableArray* _records;

}

@property (nonatomic,readonly) BOOL hasClientIdentifier; 
@property (nonatomic,retain) NSString * clientIdentifier;                    //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;                       //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)recordsType;
-(id)dictionaryRepresentation;
-(void)addRecords:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)recordsAtIndex:(unsigned long long)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(void)clearRecords;
-(NSMutableArray *)records;
-(BOOL)hasClientIdentifier;
-(unsigned long long)recordsCount;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

