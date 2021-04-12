/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData, NSDictionary, CKRecord;

@interface NTPBPersonalizationLocalData : PBCodable <NSCopying> {

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
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
+(Class)openChangeGroupDeltasType;
+(Class)closedChangeGroupsType;
-(void)writeToKeyValuePair:(id)arg1 ;
-(CKRecord *)remoteRecord;
-(void)setRemoteRecord:(CKRecord *)arg1 ;
-(NSDictionary *)openChangeGroupDeltasByFeatureKey;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)openChangeGroupDeltas;
-(NSData *)remoteRecordData;
-(void)setRemoteRecordData:(NSData *)arg1 ;
-(void)setOpenChangeGroupDeltas:(NSMutableArray *)arg1 ;
-(NSMutableArray *)closedChangeGroups;
-(void)setClosedChangeGroups:(NSMutableArray *)arg1 ;
-(NSString *)currentInstanceIdentifier;
-(void)setCurrentInstanceIdentifier:(NSString *)arg1 ;
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
@end

