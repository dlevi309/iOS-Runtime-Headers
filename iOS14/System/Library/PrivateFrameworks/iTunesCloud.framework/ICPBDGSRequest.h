/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICPBDGSFinishDelegationRequest, ICPBDGSStartDelegationRequest;

@interface ICPBDGSRequest : PBRequest <NSCopying> {

	ICPBDGSFinishDelegationRequest* _finishDelegationRequest;
	ICPBDGSStartDelegationRequest* _startDelegationRequest;
	unsigned _uniqueID;
	SCD_Struct_IC7 _has;

}

@property (assign,nonatomic) BOOL hasUniqueID; 
@property (assign,nonatomic) unsigned uniqueID;                                                     //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) BOOL hasStartDelegationRequest; 
@property (nonatomic,retain) ICPBDGSStartDelegationRequest * startDelegationRequest;                //@synthesize startDelegationRequest=_startDelegationRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasFinishDelegationRequest; 
@property (nonatomic,retain) ICPBDGSFinishDelegationRequest * finishDelegationRequest;              //@synthesize finishDelegationRequest=_finishDelegationRequest - In the implementation block
-(id)dictionaryRepresentation;
-(void)setUniqueID:(unsigned)arg1 ;
-(unsigned)uniqueID;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasUniqueID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStartDelegationRequest:(ICPBDGSStartDelegationRequest *)arg1 ;
-(void)setHasUniqueID:(BOOL)arg1 ;
-(void)setFinishDelegationRequest:(ICPBDGSFinishDelegationRequest *)arg1 ;
-(BOOL)hasStartDelegationRequest;
-(BOOL)hasFinishDelegationRequest;
-(ICPBDGSStartDelegationRequest *)startDelegationRequest;
-(ICPBDGSFinishDelegationRequest *)finishDelegationRequest;
-(BOOL)isEqual:(id)arg1 ;
@end

