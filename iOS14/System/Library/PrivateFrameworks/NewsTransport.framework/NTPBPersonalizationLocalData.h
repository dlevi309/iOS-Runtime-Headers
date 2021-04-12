/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData, NSDictionary, CKRecord;

@interface NTPBPersonalizationLocalData : PBCodable <NSCopying> {

	NSMutableArray* _aggregates;
	NSMutableArray* _closedChangeGroups;
	NSString* _currentInstanceIdentifier;
	NSMutableArray* _openChangeGroupDeltas;
	NSData* _remoteRecordData;

}

@property (nonatomic,readonly) NSDictionary * openChangeGroupDeltasByFeatureKey; 
@property (nonatomic,retain) CKRecord * remoteRecord; 
@property (nonatomic,retain) NSMutableArray * openChangeGroupDeltas;                          //@synthesize openChangeGroupDeltas=_openChangeGroupDeltas - In the implementation block
@property (nonatomic,retain) NSMutableArray * closedChangeGroups;                             //@synthesize closedChangeGroups=_closedChangeGroups - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteRecordData; 
@property (nonatomic,retain) NSData * remoteRecordData;                                       //@synthesize remoteRecordData=_remoteRecordData - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentInstanceIdentifier; 
@property (nonatomic,retain) NSString * currentInstanceIdentifier;                            //@synthesize currentInstanceIdentifier=_currentInstanceIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * aggregates;                                     //@synthesize aggregates=_aggregates - In the implementation block
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
+(Class)aggregatesType;
+(Class)openChangeGroupDeltasType;
+(Class)closedChangeGroupsType;
-(void)writeToKeyValuePair:(id)arg1 ;
-(CKRecord *)remoteRecord;
-(void)setRemoteRecord:(CKRecord *)arg1 ;
-(NSDictionary *)openChangeGroupDeltasByFeatureKey;
-(id)dictionaryRepresentation;
-(NSMutableArray *)closedChangeGroups;
-(NSMutableArray *)aggregates;
-(NSMutableArray *)openChangeGroupDeltas;
-(void)mergeFrom:(id)arg1 ;
-(void)addAggregates:(id)arg1 ;
-(void)clearAggregates;
-(unsigned long long)aggregatesCount;
-(id)aggregatesAtIndex:(unsigned long long)arg1 ;
-(void)setClosedChangeGroups:(NSMutableArray *)arg1 ;
-(NSString *)currentInstanceIdentifier;
-(void)setCurrentInstanceIdentifier:(NSString *)arg1 ;
-(id)description;
-(void)setOpenChangeGroupDeltas:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)remoteRecordData;
-(void)setRemoteRecordData:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addOpenChangeGroupDeltas:(id)arg1 ;
-(void)addClosedChangeGroups:(id)arg1 ;
-(void)clearOpenChangeGroupDeltas;
-(unsigned long long)openChangeGroupDeltasCount;
-(id)openChangeGroupDeltasAtIndex:(unsigned long long)arg1 ;
-(void)clearClosedChangeGroups;
-(unsigned long long)closedChangeGroupsCount;
-(id)closedChangeGroupsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRemoteRecordData;
-(BOOL)hasCurrentInstanceIdentifier;
-(void)setAggregates:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

