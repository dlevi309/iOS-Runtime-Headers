/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasRequestType;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)requestIdentifier;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(id)requestTypeAsString:(int)arg1 ;
-(int)requestType;
-(int)StringAsRequestType:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRequestIdentifier;
-(void)setFetchLocationRequest:(HDCodableRoutineLocationRequest *)arg1 ;
-(void)setScenarioTriggeredRequest:(HDCodableRoutineScenarioTriggeredRequest *)arg1 ;
-(BOOL)hasFetchLocationRequest;
-(BOOL)hasScenarioTriggeredRequest;
-(HDCodableRoutineLocationRequest *)fetchLocationRequest;
-(HDCodableRoutineScenarioTriggeredRequest *)scenarioTriggeredRequest;
@end

