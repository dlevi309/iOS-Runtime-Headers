/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBNotificationSettingsScreenView : PBCodable <NSCopying> {

	NSString* _campaignId;
	NSString* _campaignType;
	NSString* _creativeId;
	int _notificationSettingsScreenViewPresentationReason;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasNotificationSettingsScreenViewPresentationReason; 
@property (assign,nonatomic) int notificationSettingsScreenViewPresentationReason;                  //@synthesize notificationSettingsScreenViewPresentationReason=_notificationSettingsScreenViewPresentationReason - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                                 //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                               //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                                 //@synthesize creativeId=_creativeId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)campaignId;
-(void)setCampaignId:(NSString *)arg1 ;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(BOOL)hasCampaignId;
-(BOOL)hasCampaignType;
-(BOOL)hasCreativeId;
-(NSString *)campaignType;
-(NSString *)creativeId;
-(int)notificationSettingsScreenViewPresentationReason;
-(void)setNotificationSettingsScreenViewPresentationReason:(int)arg1 ;
-(void)setHasNotificationSettingsScreenViewPresentationReason:(BOOL)arg1 ;
-(BOOL)hasNotificationSettingsScreenViewPresentationReason;
@end

