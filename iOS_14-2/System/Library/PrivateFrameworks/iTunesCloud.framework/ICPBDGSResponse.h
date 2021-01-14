/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICPBDGSFinishDelegationResponse, ICPBDGSStartDelegationResponse;

@interface ICPBDGSResponse : PBCodable <NSCopying> {

	ICPBDGSFinishDelegationResponse* _finishDelegationResponse;
	unsigned _requestUniqueID;
	ICPBDGSStartDelegationResponse* _startDelegationResponse;
	SCD_Struct_IC7 _has;

}

@property (assign,nonatomic) BOOL hasRequestUniqueID; 
@property (assign,nonatomic) unsigned requestUniqueID;                                                //@synthesize requestUniqueID=_requestUniqueID - In the implementation block
@property (nonatomic,readonly) BOOL hasStartDelegationResponse; 
@property (nonatomic,retain) ICPBDGSStartDelegationResponse * startDelegationResponse;                //@synthesize startDelegationResponse=_startDelegationResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasFinishDelegationResponse; 
@property (nonatomic,retain) ICPBDGSFinishDelegationResponse * finishDelegationResponse;              //@synthesize finishDelegationResponse=_finishDelegationResponse - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setRequestUniqueID:(unsigned)arg1 ;
-(unsigned)requestUniqueID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStartDelegationResponse:(ICPBDGSStartDelegationResponse *)arg1 ;
-(void)setFinishDelegationResponse:(ICPBDGSFinishDelegationResponse *)arg1 ;
-(void)setHasRequestUniqueID:(BOOL)arg1 ;
-(BOOL)hasRequestUniqueID;
-(BOOL)hasStartDelegationResponse;
-(BOOL)hasFinishDelegationResponse;
-(ICPBDGSStartDelegationResponse *)startDelegationResponse;
-(ICPBDGSFinishDelegationResponse *)finishDelegationResponse;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

