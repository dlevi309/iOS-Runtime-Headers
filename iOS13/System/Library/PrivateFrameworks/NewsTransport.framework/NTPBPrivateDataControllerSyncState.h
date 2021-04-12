/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBPrivateDataControllerSyncState : PBCodable <FCKeyValueStoreCoding, NSCopying> {

	unsigned long long _version;
	NSMutableArray* _recordStates;
	NSMutableArray* _zoneStates;
	SCD_Struct_NT1 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * zoneStates;                //@synthesize zoneStates=_zoneStates - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordStates;              //@synthesize recordStates=_recordStates - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned long long version;                 //@synthesize version=_version - In the implementation block
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
+(Class)zoneStatesType;
+(Class)recordStatesType;
-(void)writeToKeyValuePair:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(NSMutableArray *)zoneStates;
-(void)setZoneStates:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recordStates;
-(void)setRecordStates:(NSMutableArray *)arg1 ;
-(void)addZoneStates:(id)arg1 ;
-(void)addRecordStates:(id)arg1 ;
-(void)clearZoneStates;
-(unsigned long long)zoneStatesCount;
-(id)zoneStatesAtIndex:(unsigned long long)arg1 ;
-(void)clearRecordStates;
-(unsigned long long)recordStatesCount;
-(id)recordStatesAtIndex:(unsigned long long)arg1 ;
@end

