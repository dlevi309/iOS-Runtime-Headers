/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)startIndex;
-(void)setStartIndex:(long long)arg1 ;
-(BOOL)hasStartIndex;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(void)addHistory:(id)arg1 ;
-(unsigned long long)historysCount;
-(void)clearHistorys;
-(id)historyAtIndex:(unsigned long long)arg1 ;
-(void)setSwitchRecords:(NRPBSwitchRecordCollection *)arg1 ;
-(BOOL)hasSwitchRecords;
-(NSMutableArray *)historys;
-(void)setHistorys:(NSMutableArray *)arg1 ;
-(NRPBSwitchRecordCollection *)switchRecords;
@end

