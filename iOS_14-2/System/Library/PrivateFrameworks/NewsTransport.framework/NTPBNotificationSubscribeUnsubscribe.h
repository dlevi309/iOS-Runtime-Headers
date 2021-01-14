/*
* Generated on Thursday, January 14, 2021 at 2:23:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBNotificationSubscribeUnsubscribe : PBCodable <NSCopying> {

	NSString* _campaignId;
	NSString* _campaignType;
	NSString* _channelId;
	NSString* _creativeId;
	int _notificationSettingType;
	int _notificationSubscribeUnsubscribeLocation;
	int _userAction;
	BOOL _isPaidUserOfChannel;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                                //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasNotificationSubscribeUnsubscribeLocation; 
@property (assign,nonatomic) int notificationSubscribeUnsubscribeLocation;                  //@synthesize notificationSubscribeUnsubscribeLocation=_notificationSubscribeUnsubscribeLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelId; 
@property (nonatomic,retain) NSString * channelId;                                          //@synthesize channelId=_channelId - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidUserOfChannel; 
@property (assign,nonatomic) BOOL isPaidUserOfChannel;                                      //@synthesize isPaidUserOfChannel=_isPaidUserOfChannel - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                         //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                       //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                         //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) BOOL hasNotificationSettingType; 
@property (assign,nonatomic) int notificationSettingType;                                   //@synthesize notificationSettingType=_notificationSettingType - In the implementation block
-(BOOL)hasCampaignId;
-(NSString *)campaignId;
-(id)dictionaryRepresentation;
-(void)setCampaignType:(NSString *)arg1 ;
-(BOOL)hasCampaignType;
-(NSString *)campaignType;
-(BOOL)hasCreativeId;
-(void)setCampaignId:(NSString *)arg1 ;
-(NSString *)creativeId;
-(void)setCreativeId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)notificationSubscribeUnsubscribeLocation;
-(void)setNotificationSubscribeUnsubscribeLocation:(int)arg1 ;
-(void)setHasNotificationSubscribeUnsubscribeLocation:(BOOL)arg1 ;
-(BOOL)hasNotificationSubscribeUnsubscribeLocation;
-(void)setIsPaidUserOfChannel:(BOOL)arg1 ;
-(void)setHasIsPaidUserOfChannel:(BOOL)arg1 ;
-(BOOL)hasIsPaidUserOfChannel;
-(BOOL)hasChannelId;
-(int)notificationSettingType;
-(void)setNotificationSettingType:(int)arg1 ;
-(void)setHasNotificationSettingType:(BOOL)arg1 ;
-(BOOL)hasNotificationSettingType;
-(BOOL)isPaidUserOfChannel;
-(id)description;
-(NSString *)channelId;
-(int)userAction;
-(BOOL)hasUserAction;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUserAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(void)setChannelId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

