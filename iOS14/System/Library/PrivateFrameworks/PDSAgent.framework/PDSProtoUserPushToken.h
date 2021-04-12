/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <PDSAgent/PDSAgent-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PDSProtoUserAuth;

@interface PDSProtoUserPushToken : PBCodable <NSCopying> {

	NSString* _pushToken;
	PDSProtoUserAuth* _userAuth;
	NSString* _userId;

}

@property (nonatomic,retain) NSString * userId;                        //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserAuth; 
@property (nonatomic,retain) PDSProtoUserAuth * userAuth;              //@synthesize userAuth=_userAuth - In the implementation block
@property (nonatomic,retain) NSString * pushToken;                     //@synthesize pushToken=_pushToken - In the implementation block
-(void)setUserId:(NSString *)arg1 ;
-(void)setPushToken:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)userId;
-(NSString *)pushToken;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUserAuth:(PDSProtoUserAuth *)arg1 ;
-(BOOL)hasUserAuth;
-(PDSProtoUserAuth *)userAuth;
@end

