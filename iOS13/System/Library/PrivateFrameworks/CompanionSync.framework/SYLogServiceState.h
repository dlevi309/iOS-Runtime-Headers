/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYLogEngineState, NSString, SYLogSessionState, SYLogDeviceState, NSMutableArray, NSDictionary;

@interface SYLogServiceState : PBCodable <NSCopying> {

	SYLogEngineState* _engine;
	int _enqueuedSyncType;
	NSString* _name;
	NSString* _peerGenerationID;
	NSString* _peerID;
	int _serviceType;
	SYLogSessionState* _session;
	SYLogDeviceState* _targetedDevice;
	NSMutableArray* _transportOptions;
	BOOL _sessionQueueRunning;
	SCD_Struct_SY5 _has;

}

@property (nonatomic,retain) NSDictionary * cocoaTransportOptions; 
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasEngine; 
@property (nonatomic,retain) SYLogEngineState * engine;                         //@synthesize engine=_engine - In the implementation block
@property (nonatomic,readonly) BOOL hasSession; 
@property (nonatomic,retain) SYLogSessionState * session;                       //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL sessionQueueRunning;                          //@synthesize sessionQueueRunning=_sessionQueueRunning - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetedDevice; 
@property (nonatomic,retain) SYLogDeviceState * targetedDevice;                 //@synthesize targetedDevice=_targetedDevice - In the implementation block
@property (assign,nonatomic) int enqueuedSyncType;                              //@synthesize enqueuedSyncType=_enqueuedSyncType - In the implementation block
@property (nonatomic,retain) NSMutableArray * transportOptions;                 //@synthesize transportOptions=_transportOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerID; 
@property (nonatomic,retain) NSString * peerID;                                 //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerGenerationID; 
@property (nonatomic,retain) NSString * peerGenerationID;                       //@synthesize peerGenerationID=_peerGenerationID - In the implementation block
@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) int serviceType;                                   //@synthesize serviceType=_serviceType - In the implementation block
+(Class)transportOptionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(SYLogEngineState *)engine;
-(void)writeTo:(id)arg1 ;
-(int)serviceType;
-(SYLogSessionState *)session;
-(void)setSession:(SYLogSessionState *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEngine:(SYLogEngineState *)arg1 ;
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(void)setServiceType:(int)arg1 ;
-(void)setHasServiceType:(BOOL)arg1 ;
-(BOOL)hasServiceType;
-(id)serviceTypeAsString:(int)arg1 ;
-(int)StringAsServiceType:(id)arg1 ;
-(void)addTransportOptions:(id)arg1 ;
-(void)setTargetedDevice:(SYLogDeviceState *)arg1 ;
-(unsigned long long)transportOptionsCount;
-(void)clearTransportOptions;
-(id)transportOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setPeerGenerationID:(NSString *)arg1 ;
-(BOOL)hasEngine;
-(BOOL)hasSession;
-(BOOL)hasTargetedDevice;
-(id)enqueuedSyncTypeAsString:(int)arg1 ;
-(int)StringAsEnqueuedSyncType:(id)arg1 ;
-(BOOL)hasPeerID;
-(BOOL)hasPeerGenerationID;
-(BOOL)sessionQueueRunning;
-(void)setSessionQueueRunning:(BOOL)arg1 ;
-(SYLogDeviceState *)targetedDevice;
-(int)enqueuedSyncType;
-(void)setEnqueuedSyncType:(int)arg1 ;
-(NSMutableArray *)transportOptions;
-(void)setTransportOptions:(NSMutableArray *)arg1 ;
-(NSString *)peerGenerationID;
-(void)setCocoaTransportOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)cocoaTransportOptions;
@end

