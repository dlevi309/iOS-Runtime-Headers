/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NRPBSwitchRecordCollection;

@interface NRPBDeviceCollectionHistory : PBCodable <NSCopying> {

	long long _startIndex;
	NSMutableArray* _historys;
	NRPBSwitchRecordCollection* _switchRecords;
	SCD_Struct_NR2 _has;

}

@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) long long startIndex;                                    //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * historys;                               //@synthesize historys=_historys - In the implementation block
@property (nonatomic,readonly) BOOL hasSwitchRecords; 
@property (nonatomic,retain) NRPBSwitchRecordCollection * switchRecords;              //@synthesize switchRecords=_switchRecords - In the implementation block
+(Class)historyType;
-(id)dictionaryRepresentation;
-(long long)startIndex;
-(void)setStartIndex:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSMutableArray *)historys;
-(BOOL)hasStartIndex;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addHistory:(id)arg1 ;
-(unsigned long long)historysCount;
-(void)clearHistorys;
-(id)historyAtIndex:(unsigned long long)arg1 ;
-(void)setSwitchRecords:(NRPBSwitchRecordCollection *)arg1 ;
-(BOOL)hasSwitchRecords;
-(void)setHistorys:(NSMutableArray *)arg1 ;
-(NRPBSwitchRecordCollection *)switchRecords;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

