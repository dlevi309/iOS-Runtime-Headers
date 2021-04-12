/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NTPBDeviceInfo *)deviceInfo;
-(void)setDeviceInfo:(NTPBDeviceInfo *)arg1 ;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(void)setNotificationUserId:(NSString *)arg1 ;
-(void)setNotificationEntitys:(NSMutableArray *)arg1 ;
-(BOOL)hasUserStorefrontId;
-(NSString *)userStorefrontId;
-(BOOL)hasNotificationUserId;
-(NSString *)notificationUserId;
-(void)addNotificationEntity:(id)arg1 ;
-(BOOL)hasDeviceInfo;
-(void)clearNotificationEntitys;
-(unsigned long long)notificationEntitysCount;
-(id)notificationEntityAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)notificationEntitys;
@end

