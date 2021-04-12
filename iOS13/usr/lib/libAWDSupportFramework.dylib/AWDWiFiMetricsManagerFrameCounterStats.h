/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDControlFrames, AWDDataFrames, AWDManagementFrames;

@interface AWDWiFiMetricsManagerFrameCounterStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDControlFrames* _rxControl;
	AWDDataFrames* _rxData;
	AWDManagementFrames* _rxManagement;
	AWDControlFrames* _txControl;
	AWDDataFrames* _txData;
	AWDManagementFrames* _txManagement;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasRxControl; 
@property (nonatomic,retain) AWDControlFrames * rxControl;                    //@synthesize rxControl=_rxControl - In the implementation block
@property (nonatomic,readonly) BOOL hasTxControl; 
@property (nonatomic,retain) AWDControlFrames * txControl;                    //@synthesize txControl=_txControl - In the implementation block
@property (nonatomic,readonly) BOOL hasRxData; 
@property (nonatomic,retain) AWDDataFrames * rxData;                          //@synthesize rxData=_rxData - In the implementation block
@property (nonatomic,readonly) BOOL hasTxData; 
@property (nonatomic,retain) AWDDataFrames * txData;                          //@synthesize txData=_txData - In the implementation block
@property (nonatomic,readonly) BOOL hasRxManagement; 
@property (nonatomic,retain) AWDManagementFrames * rxManagement;              //@synthesize rxManagement=_rxManagement - In the implementation block
@property (nonatomic,readonly) BOOL hasTxManagement; 
@property (nonatomic,retain) AWDManagementFrames * txManagement;              //@synthesize txManagement=_txManagement - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTxData:(AWDDataFrames *)arg1 ;
-(void)setRxData:(AWDDataFrames *)arg1 ;
-(AWDDataFrames *)txData;
-(AWDDataFrames *)rxData;
-(void)setRxControl:(AWDControlFrames *)arg1 ;
-(void)setTxControl:(AWDControlFrames *)arg1 ;
-(void)setRxManagement:(AWDManagementFrames *)arg1 ;
-(void)setTxManagement:(AWDManagementFrames *)arg1 ;
-(BOOL)hasRxControl;
-(BOOL)hasTxControl;
-(BOOL)hasRxData;
-(BOOL)hasTxData;
-(BOOL)hasRxManagement;
-(BOOL)hasTxManagement;
-(AWDControlFrames *)rxControl;
-(AWDControlFrames *)txControl;
-(AWDManagementFrames *)rxManagement;
-(AWDManagementFrames *)txManagement;
@end

