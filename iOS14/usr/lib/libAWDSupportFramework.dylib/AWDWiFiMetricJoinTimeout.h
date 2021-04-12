/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricJoinTimeout : PBCodable <NSCopying> {

	SCD_Struct_AW21* _associationStates;
	SCD_Struct_AW21* _channels;
	SCD_Struct_AW21* _joinClassificationInfos;
	SCD_Struct_AW21* _joinTargetClassificationInfos;
	SCD_Struct_AW21* _totalNumberOfJoinAttempts;
	unsigned _sequence;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasSequence; 
@property (assign,nonatomic) unsigned sequence;                                                    //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) unsigned long long joinClassificationInfosCount; 
@property (nonatomic,readonly) unsigned* joinClassificationInfos; 
@property (nonatomic,readonly) unsigned long long joinTargetClassificationInfosCount; 
@property (nonatomic,readonly) unsigned* joinTargetClassificationInfos; 
@property (nonatomic,readonly) unsigned long long associationStatesCount; 
@property (nonatomic,readonly) unsigned* associationStates; 
@property (nonatomic,readonly) unsigned long long channelsCount; 
@property (nonatomic,readonly) unsigned* channels; 
@property (nonatomic,readonly) unsigned long long totalNumberOfJoinAttemptsCount; 
@property (nonatomic,readonly) unsigned* totalNumberOfJoinAttempts; 
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned)sequence;
-(void)addChannel:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSequence:(unsigned)arg1 ;
-(unsigned*)channels;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasSequence:(BOOL)arg1 ;
-(BOOL)hasSequence;
-(unsigned long long)joinClassificationInfosCount;
-(void)clearJoinClassificationInfos;
-(unsigned)joinClassificationInfoAtIndex:(unsigned long long)arg1 ;
-(void)addJoinClassificationInfo:(unsigned)arg1 ;
-(unsigned long long)joinTargetClassificationInfosCount;
-(void)clearJoinTargetClassificationInfos;
-(unsigned)joinTargetClassificationInfoAtIndex:(unsigned long long)arg1 ;
-(void)addJoinTargetClassificationInfo:(unsigned)arg1 ;
-(unsigned long long)associationStatesCount;
-(void)clearAssociationStates;
-(unsigned)associationStateAtIndex:(unsigned long long)arg1 ;
-(void)addAssociationState:(unsigned)arg1 ;
-(unsigned long long)channelsCount;
-(void)clearChannels;
-(unsigned)channelAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)totalNumberOfJoinAttemptsCount;
-(void)clearTotalNumberOfJoinAttempts;
-(unsigned)totalNumberOfJoinAttemptsAtIndex:(unsigned long long)arg1 ;
-(void)addTotalNumberOfJoinAttempts:(unsigned)arg1 ;
-(unsigned*)joinClassificationInfos;
-(void)setJoinClassificationInfos:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)joinTargetClassificationInfos;
-(void)setJoinTargetClassificationInfos:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)associationStates;
-(void)setAssociationStates:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setChannels:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)totalNumberOfJoinAttempts;
-(void)setTotalNumberOfJoinAttempts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

