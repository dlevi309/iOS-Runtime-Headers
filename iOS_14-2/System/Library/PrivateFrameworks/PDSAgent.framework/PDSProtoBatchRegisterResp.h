/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <PDSAgent/PDSAgent-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface PDSProtoBatchRegisterResp : PBCodable <NSCopying> {

	long long _responseTtl;
	long long _retryInterval;
	NSString* _message;
	int _status;
	NSMutableArray* _userPushTokenRegResponses;
	SCD_Struct_PD2 _has;

}

@property (assign,nonatomic) int status;                                              //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) NSString * message;                                      //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSMutableArray * userPushTokenRegResponses;              //@synthesize userPushTokenRegResponses=_userPushTokenRegResponses - In the implementation block
@property (assign,nonatomic) BOOL hasResponseTtl; 
@property (assign,nonatomic) long long responseTtl;                                   //@synthesize responseTtl=_responseTtl - In the implementation block
@property (assign,nonatomic) BOOL hasRetryInterval; 
@property (assign,nonatomic) long long retryInterval;                                 //@synthesize retryInterval=_retryInterval - In the implementation block
+(Class)userPushTokenRegResponsesType;
-(void)setMessage:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)message;
-(long long)retryInterval;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasMessage;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(void)setRetryInterval:(long long)arg1 ;
-(NSMutableArray *)userPushTokenRegResponses;
-(BOOL)hasResponseTtl;
-(long long)responseTtl;
-(BOOL)hasRetryInterval;
-(void)addUserPushTokenRegResponses:(id)arg1 ;
-(unsigned long long)userPushTokenRegResponsesCount;
-(void)clearUserPushTokenRegResponses;
-(id)userPushTokenRegResponsesAtIndex:(unsigned long long)arg1 ;
-(void)setResponseTtl:(long long)arg1 ;
-(void)setHasResponseTtl:(BOOL)arg1 ;
-(void)setHasRetryInterval:(BOOL)arg1 ;
-(void)setUserPushTokenRegResponses:(NSMutableArray *)arg1 ;
@end

