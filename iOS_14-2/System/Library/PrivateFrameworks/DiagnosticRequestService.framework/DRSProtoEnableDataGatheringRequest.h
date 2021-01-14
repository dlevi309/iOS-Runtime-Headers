/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, DRSProtoRequestDescription;

@interface DRSProtoEnableDataGatheringRequest : PBRequest <NSCopying> {

	NSString* _logType;
	DRSProtoRequestDescription* _requestDescription;
	BOOL _isContinue;
	SCD_Struct_DR1 _has;

}

@property (nonatomic,readonly) BOOL hasRequestDescription; 
@property (nonatomic,retain) DRSProtoRequestDescription * requestDescription;              //@synthesize requestDescription=_requestDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasLogType; 
@property (nonatomic,retain) NSString * logType;                                           //@synthesize logType=_logType - In the implementation block
@property (assign,nonatomic) BOOL hasIsContinue; 
@property (assign,nonatomic) BOOL isContinue;                                              //@synthesize isContinue=_isContinue - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)logType;
-(void)mergeFrom:(id)arg1 ;
-(DRSProtoRequestDescription *)requestDescription;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasLogType;
-(void)setLogType:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRequestDescription:(DRSProtoRequestDescription *)arg1 ;
-(BOOL)hasRequestDescription;
-(BOOL)isContinue;
-(void)setIsContinue:(BOOL)arg1 ;
-(void)setHasIsContinue:(BOOL)arg1 ;
-(BOOL)hasIsContinue;
@end

