/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <PDSAgent/PDSAgent-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface PDSProtoBatchRegisterReq : PBCodable <NSCopying> {

	long long _requestTtl;
	NSMutableArray* _userPushTokenRegRequests;
	SCD_Struct_PD1 _has;

}

@property (nonatomic,retain) NSMutableArray * userPushTokenRegRequests;              //@synthesize userPushTokenRegRequests=_userPushTokenRegRequests - In the implementation block
@property (assign,nonatomic) BOOL hasRequestTtl; 
@property (assign,nonatomic) long long requestTtl;                                   //@synthesize requestTtl=_requestTtl - In the implementation block
+(Class)userPushTokenRegRequestsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addUserPushTokenRegRequests:(id)arg1 ;
-(unsigned long long)userPushTokenRegRequestsCount;
-(void)clearUserPushTokenRegRequests;
-(id)userPushTokenRegRequestsAtIndex:(unsigned long long)arg1 ;
-(void)setRequestTtl:(long long)arg1 ;
-(void)setHasRequestTtl:(BOOL)arg1 ;
-(BOOL)hasRequestTtl;
-(NSMutableArray *)userPushTokenRegRequests;
-(void)setUserPushTokenRegRequests:(NSMutableArray *)arg1 ;
-(long long)requestTtl;
@end

