/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <PDSAgent/PDSAgent-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, PDSProtoUserPushToken;

@interface PDSProtoUserPushTokenRegRequest : PBRequest <NSCopying> {

	long long _ttl;
	NSMutableArray* _deviceInfos;
	NSMutableArray* _topics;
	PDSProtoUserPushToken* _userPushToken;
	SCD_Struct_PD1 _has;

}

@property (nonatomic,retain) PDSProtoUserPushToken * userPushToken;              //@synthesize userPushToken=_userPushToken - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceInfos;                       //@synthesize deviceInfos=_deviceInfos - In the implementation block
@property (assign,nonatomic) BOOL hasTtl; 
@property (assign,nonatomic) long long ttl;                                      //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,retain) NSMutableArray * topics;                            //@synthesize topics=_topics - In the implementation block
+(Class)deviceInfoType;
+(Class)topicType;
-(id)dictionaryRepresentation;
-(void)setTtl:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)topics;
-(void)setTopics:(NSMutableArray *)arg1 ;
-(id)description;
-(BOOL)hasTtl;
-(long long)ttl;
-(void)setHasTtl:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)clearTopics;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)topicsCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUserPushToken:(PDSProtoUserPushToken *)arg1 ;
-(void)setDeviceInfos:(NSMutableArray *)arg1 ;
-(void)addTopic:(id)arg1 ;
-(PDSProtoUserPushToken *)userPushToken;
-(void)addDeviceInfo:(id)arg1 ;
-(unsigned long long)deviceInfosCount;
-(void)clearDeviceInfos;
-(id)deviceInfoAtIndex:(unsigned long long)arg1 ;
-(id)topicAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)deviceInfos;
@end

