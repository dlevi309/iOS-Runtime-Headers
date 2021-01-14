/*
* Generated on Thursday, January 14, 2021 at 2:23:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasNotificationSettingsScreenViewPresentationReason; 
@property (assign,nonatomic) int notificationSettingsScreenViewPresentationReason;                  //@synthesize notificationSettingsScreenViewPresentationReason=_notificationSettingsScreenViewPresentationReason - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                                 //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                               //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                                 //@synthesize creativeId=_creativeId - In the implementation block
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
-(id)description;
-(int)notificationSettingsScreenViewPresentationReason;
-(void)setNotificationSettingsScreenViewPresentationReason:(int)arg1 ;
-(void)setHasNotificationSettingsScreenViewPresentationReason:(BOOL)arg1 ;
-(BOOL)hasNotificationSettingsScreenViewPresentationReason;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

