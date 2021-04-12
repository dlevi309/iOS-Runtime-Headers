/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableRoutineLocationResponse, HDCodableRoutinePredictedLocationsResponse;

@interface HDCodableRoutineResponseMessage : PBCodable <NSCopying> {

	NSString* _errorDescription;
	HDCodableRoutineLocationResponse* _fetchLocationResponse;
	HDCodableRoutinePredictedLocationsResponse* _fetchNextLocationResponse;
	NSString* _requestIdentifier;
	int _requestType;
	SCD_Struct_HD7 _has;

}

@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                                                                     //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;                                                        //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchLocationResponse; 
@property (nonatomic,retain) HDCodableRoutineLocationResponse * fetchLocationResponse;                            //@synthesize fetchLocationResponse=_fetchLocationResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchNextLocationResponse; 
@property (nonatomic,retain) HDCodableRoutinePredictedLocationsResponse * fetchNextLocationResponse;              //@synthesize fetchNextLocationResponse=_fetchNextLocationResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;                                                         //@synthesize errorDescription=_errorDescription - In the implementation block
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
-(NSString *)errorDescription;
-(void)setErrorDescription:(NSString *)arg1 ;
-(BOOL)hasRequestIdentifier;
-(BOOL)hasErrorDescription;
-(void)setFetchLocationResponse:(HDCodableRoutineLocationResponse *)arg1 ;
-(void)setFetchNextLocationResponse:(HDCodableRoutinePredictedLocationsResponse *)arg1 ;
-(BOOL)hasFetchLocationResponse;
-(BOOL)hasFetchNextLocationResponse;
-(HDCodableRoutineLocationResponse *)fetchLocationResponse;
-(HDCodableRoutinePredictedLocationsResponse *)fetchNextLocationResponse;
@end

