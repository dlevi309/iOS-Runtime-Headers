/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDMPTCPConnectionReport : PBCodable <NSCopying> {

	double _establishmentTime;
	double _postConnectSessionLifetime;
	unsigned long long _timestamp;
	NSString* _clientId;
	int _establishmentFailureError;
	NSString* _establishmentInterfaceName;
	int _establishmentSynRetransmits;
	NSMutableArray* _interfaceReports;
	int _postConnectSubflowAttemptCount;
	int _postConnectSubflowMaxSubflowCount;
	int _subflowSwitchingCount;
	NSMutableArray* _subflowSwitchingReports;
	BOOL _establishmentCellularFallback;
	BOOL _establishmentForcedTcpFallback;
	BOOL _establishmentSuccess;
	BOOL _establishmentTcpFallback;
	BOOL _postConnectMultiHomed;
	BOOL _postConnectSingleHomed;
	SCD_Struct_AW22 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasClientId; 
@property (nonatomic,retain) NSString * clientId;                                    //@synthesize clientId=_clientId - In the implementation block
@property (nonatomic,readonly) BOOL hasEstablishmentInterfaceName; 
@property (nonatomic,retain) NSString * establishmentInterfaceName;                  //@synthesize establishmentInterfaceName=_establishmentInterfaceName - In the implementation block
@property (assign,nonatomic) BOOL hasEstablishmentSuccess; 
@property (assign,nonatomic) BOOL establishmentSuccess;                              //@synthesize establishmentSuccess=_establishmentSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasEstablishmentFailureError; 
@property (assign,nonatomic) int establishmentFailureError;                          //@synthesize establishmentFailureError=_establishmentFailureError - In the implementation block
@property (assign,nonatomic) BOOL hasEstablishmentTcpFallback; 
@property (assign,nonatomic) BOOL establishmentTcpFallback;                          //@synthesize establishmentTcpFallback=_establishmentTcpFallback - In the implementation block
@property (assign,nonatomic) BOOL hasEstablishmentCellularFallback; 
@property (assign,nonatomic) BOOL establishmentCellularFallback;                     //@synthesize establishmentCellularFallback=_establishmentCellularFallback - In the implementation block
@property (assign,nonatomic) BOOL hasEstablishmentTime; 
@property (assign,nonatomic) double establishmentTime;                               //@synthesize establishmentTime=_establishmentTime - In the implementation block
@property (assign,nonatomic) BOOL hasEstablishmentSynRetransmits; 
@property (assign,nonatomic) int establishmentSynRetransmits;                        //@synthesize establishmentSynRetransmits=_establishmentSynRetransmits - In the implementation block
@property (assign,nonatomic) BOOL hasEstablishmentForcedTcpFallback; 
@property (assign,nonatomic) BOOL establishmentForcedTcpFallback;                    //@synthesize establishmentForcedTcpFallback=_establishmentForcedTcpFallback - In the implementation block
@property (assign,nonatomic) BOOL hasPostConnectMultiHomed; 
@property (assign,nonatomic) BOOL postConnectMultiHomed;                             //@synthesize postConnectMultiHomed=_postConnectMultiHomed - In the implementation block
@property (assign,nonatomic) BOOL hasPostConnectSingleHomed; 
@property (assign,nonatomic) BOOL postConnectSingleHomed;                            //@synthesize postConnectSingleHomed=_postConnectSingleHomed - In the implementation block
@property (assign,nonatomic) BOOL hasPostConnectSubflowAttemptCount; 
@property (assign,nonatomic) int postConnectSubflowAttemptCount;                     //@synthesize postConnectSubflowAttemptCount=_postConnectSubflowAttemptCount - In the implementation block
@property (assign,nonatomic) BOOL hasPostConnectSubflowMaxSubflowCount; 
@property (assign,nonatomic) int postConnectSubflowMaxSubflowCount;                  //@synthesize postConnectSubflowMaxSubflowCount=_postConnectSubflowMaxSubflowCount - In the implementation block
@property (assign,nonatomic) BOOL hasPostConnectSessionLifetime; 
@property (assign,nonatomic) double postConnectSessionLifetime;                      //@synthesize postConnectSessionLifetime=_postConnectSessionLifetime - In the implementation block
@property (assign,nonatomic) BOOL hasSubflowSwitchingCount; 
@property (assign,nonatomic) int subflowSwitchingCount;                              //@synthesize subflowSwitchingCount=_subflowSwitchingCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * interfaceReports;                      //@synthesize interfaceReports=_interfaceReports - In the implementation block
@property (nonatomic,retain) NSMutableArray * subflowSwitchingReports;               //@synthesize subflowSwitchingReports=_subflowSwitchingReports - In the implementation block
+(Class)interfaceReportsType;
+(Class)subflowSwitchingReportsType;
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
-(NSString *)clientId;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasClientId;
-(BOOL)hasEstablishmentInterfaceName;
-(void)setEstablishmentSuccess:(BOOL)arg1 ;
-(void)setHasEstablishmentSuccess:(BOOL)arg1 ;
-(BOOL)hasEstablishmentSuccess;
-(void)setEstablishmentFailureError:(int)arg1 ;
-(void)setHasEstablishmentFailureError:(BOOL)arg1 ;
-(BOOL)hasEstablishmentFailureError;
-(void)setEstablishmentTcpFallback:(BOOL)arg1 ;
-(void)setHasEstablishmentTcpFallback:(BOOL)arg1 ;
-(BOOL)hasEstablishmentTcpFallback;
-(void)setEstablishmentCellularFallback:(BOOL)arg1 ;
-(void)setHasEstablishmentCellularFallback:(BOOL)arg1 ;
-(BOOL)hasEstablishmentCellularFallback;
-(void)setEstablishmentTime:(double)arg1 ;
-(void)setHasEstablishmentTime:(BOOL)arg1 ;
-(BOOL)hasEstablishmentTime;
-(void)setEstablishmentSynRetransmits:(int)arg1 ;
-(void)setHasEstablishmentSynRetransmits:(BOOL)arg1 ;
-(BOOL)hasEstablishmentSynRetransmits;
-(void)setEstablishmentForcedTcpFallback:(BOOL)arg1 ;
-(void)setHasEstablishmentForcedTcpFallback:(BOOL)arg1 ;
-(BOOL)hasEstablishmentForcedTcpFallback;
-(void)setPostConnectMultiHomed:(BOOL)arg1 ;
-(void)setHasPostConnectMultiHomed:(BOOL)arg1 ;
-(BOOL)hasPostConnectMultiHomed;
-(void)setPostConnectSingleHomed:(BOOL)arg1 ;
-(void)setHasPostConnectSingleHomed:(BOOL)arg1 ;
-(BOOL)hasPostConnectSingleHomed;
-(void)setPostConnectSubflowAttemptCount:(int)arg1 ;
-(void)setHasPostConnectSubflowAttemptCount:(BOOL)arg1 ;
-(BOOL)hasPostConnectSubflowAttemptCount;
-(void)setPostConnectSubflowMaxSubflowCount:(int)arg1 ;
-(void)setHasPostConnectSubflowMaxSubflowCount:(BOOL)arg1 ;
-(BOOL)hasPostConnectSubflowMaxSubflowCount;
-(void)setPostConnectSessionLifetime:(double)arg1 ;
-(void)setHasPostConnectSessionLifetime:(BOOL)arg1 ;
-(BOOL)hasPostConnectSessionLifetime;
-(void)setSubflowSwitchingCount:(int)arg1 ;
-(void)setHasSubflowSwitchingCount:(BOOL)arg1 ;
-(BOOL)hasSubflowSwitchingCount;
-(void)clearInterfaceReports;
-(void)addInterfaceReports:(id)arg1 ;
-(unsigned long long)interfaceReportsCount;
-(id)interfaceReportsAtIndex:(unsigned long long)arg1 ;
-(void)clearSubflowSwitchingReports;
-(void)addSubflowSwitchingReports:(id)arg1 ;
-(unsigned long long)subflowSwitchingReportsCount;
-(id)subflowSwitchingReportsAtIndex:(unsigned long long)arg1 ;
-(void)setClientId:(NSString *)arg1 ;
-(NSString *)establishmentInterfaceName;
-(void)setEstablishmentInterfaceName:(NSString *)arg1 ;
-(BOOL)establishmentSuccess;
-(int)establishmentFailureError;
-(BOOL)establishmentTcpFallback;
-(BOOL)establishmentCellularFallback;
-(double)establishmentTime;
-(int)establishmentSynRetransmits;
-(BOOL)establishmentForcedTcpFallback;
-(BOOL)postConnectMultiHomed;
-(BOOL)postConnectSingleHomed;
-(int)postConnectSubflowAttemptCount;
-(int)postConnectSubflowMaxSubflowCount;
-(double)postConnectSessionLifetime;
-(int)subflowSwitchingCount;
-(NSMutableArray *)interfaceReports;
-(void)setInterfaceReports:(NSMutableArray *)arg1 ;
-(NSMutableArray *)subflowSwitchingReports;
-(void)setSubflowSwitchingReports:(NSMutableArray *)arg1 ;
@end
