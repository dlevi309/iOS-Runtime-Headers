/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NT3 _has;

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
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(NSMutableArray *)zoneStates;
-(void)writeTo:(id)arg1 ;
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
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

