/*
* Generated on Thursday, January 14, 2021 at 2:28:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDMPTCPConnectionInterfaceReport : PBCodable <NSCopying> {

	SCD_Struct_AW15* _postConnectSubflowFailureErrors;
	long long _dataInKB;
	long long _dataOutKB;
	unsigned long long _timestamp;
	NSString* _interfaceName;
	int _secondaryFlowFailureCount;
	int _secondaryFlowSuccessCount;
	BOOL _postConnectTcpFallbackCount;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasInterfaceName; 
@property (nonatomic,retain) NSString * interfaceName;                                               //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,readonly) unsigned long long postConnectSubflowFailureErrorsCount; 
@property (nonatomic,readonly) int* postConnectSubflowFailureErrors; 
@property (assign,nonatomic) BOOL hasDataInKB; 
@property (assign,nonatomic) long long dataInKB;                                                     //@synthesize dataInKB=_dataInKB - In the implementation block
@property (assign,nonatomic) BOOL hasDataOutKB; 
@property (assign,nonatomic) long long dataOutKB;                                                    //@synthesize dataOutKB=_dataOutKB - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryFlowSuccessCount; 
@property (assign,nonatomic) int secondaryFlowSuccessCount;                                          //@synthesize secondaryFlowSuccessCount=_secondaryFlowSuccessCount - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryFlowFailureCount; 
@property (assign,nonatomic) int secondaryFlowFailureCount;                                          //@synthesize secondaryFlowFailureCount=_secondaryFlowFailureCount - In the implementation block
@property (assign,nonatomic) BOOL hasPostConnectTcpFallbackCount; 
@property (assign,nonatomic) BOOL postConnectTcpFallbackCount;                                       //@synthesize postConnectTcpFallbackCount=_postConnectTcpFallbackCount - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)interfaceName;
-(id)description;
-(BOOL)hasDataInKB;
-(BOOL)hasInterfaceName;
-(unsigned long long)postConnectSubflowFailureErrorsCount;
-(int*)postConnectSubflowFailureErrors;
-(void)clearPostConnectSubflowFailureErrors;
-(void)addPostConnectSubflowFailureErrors:(int)arg1 ;
-(int)postConnectSubflowFailureErrorsAtIndex:(unsigned long long)arg1 ;
-(void)setDataInKB:(long long)arg1 ;
-(void)setHasDataInKB:(BOOL)arg1 ;
-(void)setPostConnectSubflowFailureErrors:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setDataOutKB:(long long)arg1 ;
-(void)setHasDataOutKB:(BOOL)arg1 ;
-(BOOL)hasDataOutKB;
-(void)setSecondaryFlowSuccessCount:(int)arg1 ;
-(void)setHasSecondaryFlowSuccessCount:(BOOL)arg1 ;
-(BOOL)hasSecondaryFlowSuccessCount;
-(void)setSecondaryFlowFailureCount:(int)arg1 ;
-(long long)dataOutKB;
-(void)setHasSecondaryFlowFailureCount:(BOOL)arg1 ;
-(BOOL)hasSecondaryFlowFailureCount;
-(void)setPostConnectTcpFallbackCount:(BOOL)arg1 ;
-(void)setHasPostConnectTcpFallbackCount:(BOOL)arg1 ;
-(BOOL)hasPostConnectTcpFallbackCount;
-(int)secondaryFlowSuccessCount;
-(int)secondaryFlowFailureCount;
-(BOOL)postConnectTcpFallbackCount;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(long long)dataInKB;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

