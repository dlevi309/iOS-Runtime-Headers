/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT5 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)campaignId;
-(int)userAction;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
-(void)setCampaignId:(NSString *)arg1 ;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(void)setUserAction:(int)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasUserAction;
-(BOOL)hasCampaignId;
-(BOOL)hasCampaignType;
-(BOOL)hasCreativeId;
-(NSString *)campaignType;
-(NSString *)creativeId;
-(BOOL)hasChannelId;
-(int)notificationSubscribeUnsubscribeLocation;
-(void)setNotificationSubscribeUnsubscribeLocation:(int)arg1 ;
-(void)setHasNotificationSubscribeUnsubscribeLocation:(BOOL)arg1 ;
-(BOOL)hasNotificationSubscribeUnsubscribeLocation;
-(void)setIsPaidUserOfChannel:(BOOL)arg1 ;
-(void)setHasIsPaidUserOfChannel:(BOOL)arg1 ;
-(BOOL)hasIsPaidUserOfChannel;
-(int)notificationSettingType;
-(void)setNotificationSettingType:(int)arg1 ;
-(void)setHasNotificationSettingType:(BOOL)arg1 ;
-(BOOL)hasNotificationSettingType;
-(BOOL)isPaidUserOfChannel;
@end

