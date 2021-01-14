/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDeviceInfo, NSMutableArray, NSString;

@interface NTPBPushNotifySubscriptionRequest : PBRequest <NSCopying> {

	NTPBDeviceInfo* _deviceInfo;
	NSMutableArray* _notificationEntitys;
	NSString* _notificationUserId;
	NSString* _userStorefrontId;

}

@property (nonatomic,readonly) BOOL hasNotificationUserId; 
@property (nonatomic,retain) NSString * notificationUserId;                     //@synthesize notificationUserId=_notificationUserId - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfo; 
@property (nonatomic,retain) NTPBDeviceInfo * deviceInfo;                       //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationEntitys;              //@synthesize notificationEntitys=_notificationEntitys - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;                       //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
+(Class)notificationEntityType;
-(id)dictionaryRepresentation;
-(BOOL)hasUserStorefrontId;
-(NSString *)userStorefrontId;
-(id)notificationEntityAtIndex:(unsigned long long)arg1 ;
-(NTPBDeviceInfo *)deviceInfo;
-(BOOL)hasDeviceInfo;
-(void)setDeviceInfo:(NTPBDeviceInfo *)arg1 ;
-(NSMutableArray *)notificationEntitys;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(unsigned long long)notificationEntitysCount;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasNotificationUserId;
-(void)setNotificationEntitys:(NSMutableArray *)arg1 ;
-(id)description;
-(NSString *)notificationUserId;
-(void)clearNotificationEntitys;
-(void)setNotificationUserId:(NSString *)arg1 ;
-(void)addNotificationEntity:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

