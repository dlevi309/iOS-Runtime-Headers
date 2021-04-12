/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)records;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(BOOL)hasClientIdentifier;
-(PBUnknownFields *)unknownFields;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(void)addRecords:(id)arg1 ;
-(unsigned long long)recordsCount;
-(void)clearRecords;
-(id)recordsAtIndex:(unsigned long long)arg1 ;
@end

