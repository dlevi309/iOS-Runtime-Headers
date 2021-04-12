/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariSharedPasswordEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _initiatedSharePasswordOutcome;
	int _passwordSharingMechanism;
	int _receivedSharedPasswordOutcome;
	SCD_Struct_WB11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInitiatedSharePasswordOutcome; 
@property (assign,nonatomic) int initiatedSharePasswordOutcome;                  //@synthesize initiatedSharePasswordOutcome=_initiatedSharePasswordOutcome - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedSharedPasswordOutcome; 
@property (assign,nonatomic) int receivedSharedPasswordOutcome;                  //@synthesize receivedSharedPasswordOutcome=_receivedSharedPasswordOutcome - In the implementation block
@property (assign,nonatomic) BOOL hasPasswordSharingMechanism; 
@property (assign,nonatomic) int passwordSharingMechanism;                       //@synthesize passwordSharingMechanism=_passwordSharingMechanism - In the implementation block
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
-(void)setInitiatedSharePasswordOutcome:(int)arg1 ;
-(void)setPasswordSharingMechanism:(int)arg1 ;
-(void)setReceivedSharedPasswordOutcome:(int)arg1 ;
-(int)initiatedSharePasswordOutcome;
-(void)setHasInitiatedSharePasswordOutcome:(BOOL)arg1 ;
-(BOOL)hasInitiatedSharePasswordOutcome;
-(id)initiatedSharePasswordOutcomeAsString:(int)arg1 ;
-(int)StringAsInitiatedSharePasswordOutcome:(id)arg1 ;
-(int)receivedSharedPasswordOutcome;
-(void)setHasReceivedSharedPasswordOutcome:(BOOL)arg1 ;
-(BOOL)hasReceivedSharedPasswordOutcome;
-(id)receivedSharedPasswordOutcomeAsString:(int)arg1 ;
-(int)StringAsReceivedSharedPasswordOutcome:(id)arg1 ;
-(int)passwordSharingMechanism;
-(void)setHasPasswordSharingMechanism:(BOOL)arg1 ;
-(BOOL)hasPasswordSharingMechanism;
-(id)passwordSharingMechanismAsString:(int)arg1 ;
-(int)StringAsPasswordSharingMechanism:(id)arg1 ;
@end

