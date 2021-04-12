/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableRoutineLocationRequest, NSString, HDCodableRoutineScenarioTriggeredRequest;

@interface HDCodableRoutineRequestMessage : PBCodable <NSCopying> {

	HDCodableRoutineLocationRequest* _fetchLocationRequest;
	NSString* _requestIdentifier;
	int _requestType;
	HDCodableRoutineScenarioTriggeredRequest* _scenarioTriggeredRequest;
	SCD_Struct_HD7 _has;

}

@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                                                                  //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;                                                     //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchLocationRequest; 
@property (nonatomic,retain) HDCodableRoutineLocationRequest * fetchLocationRequest;                           //@synthesize fetchLocationRequest=_fetchLocationRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasScenarioTriggeredRequest; 
@property (nonatomic,retain) HDCodableRoutineScenarioTriggeredRequest * scenarioTriggeredRequest;              //@synthesize scenarioTriggeredRequest=_scenarioTriggeredRequest - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)requestType;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSString *)requestIdentifier;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(id)requestTypeAsString:(int)arg1 ;
-(int)StringAsRequestType:(id)arg1 ;
-(BOOL)hasRequestIdentifier;
-(void)setFetchLocationRequest:(HDCodableRoutineLocationRequest *)arg1 ;
-(void)setScenarioTriggeredRequest:(HDCodableRoutineScenarioTriggeredRequest *)arg1 ;
-(BOOL)hasFetchLocationRequest;
-(BOOL)hasScenarioTriggeredRequest;
-(HDCodableRoutineLocationRequest *)fetchLocationRequest;
-(HDCodableRoutineScenarioTriggeredRequest *)scenarioTriggeredRequest;
@end

