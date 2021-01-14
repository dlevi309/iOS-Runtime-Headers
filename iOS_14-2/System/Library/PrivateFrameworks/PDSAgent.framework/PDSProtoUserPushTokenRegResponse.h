/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <PDSAgent/PDSAgent-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PDSProtoUserPushToken;

@interface PDSProtoUserPushTokenRegResponse : PBCodable <NSCopying> {

	NSString* _message;
	int _status;
	PDSProtoUserPushToken* _userPushToken;

}

@property (nonatomic,retain) PDSProtoUserPushToken * userPushToken;              //@synthesize userPushToken=_userPushToken - In the implementation block
@property (assign,nonatomic) int status;                                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) NSString * message;                                 //@synthesize message=_message - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)message;
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
-(void)setUserPushToken:(PDSProtoUserPushToken *)arg1 ;
-(PDSProtoUserPushToken *)userPushToken;
@end

