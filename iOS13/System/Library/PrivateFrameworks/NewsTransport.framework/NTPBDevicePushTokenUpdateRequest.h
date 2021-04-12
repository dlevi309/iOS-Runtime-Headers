/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDeviceInfo, NSString;

@interface NTPBDevicePushTokenUpdateRequest : PBRequest <NSCopying> {

	NTPBDeviceInfo* _deviceInfoToAdd;
	NTPBDeviceInfo* _deviceInfoToRemove;
	NSString* _notificationUserId;
	NSString* _userStorefrontId;

}

@property (nonatomic,readonly) BOOL hasNotificationUserId; 
@property (nonatomic,retain) NSString * notificationUserId;                    //@synthesize notificationUserId=_notificationUserId - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfoToAdd; 
@property (nonatomic,retain) NTPBDeviceInfo * deviceInfoToAdd;                 //@synthesize deviceInfoToAdd=_deviceInfoToAdd - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfoToRemove; 
@property (nonatomic,retain) NTPBDeviceInfo * deviceInfoToRemove;              //@synthesize deviceInfoToRemove=_deviceInfoToRemove - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;                      //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(void)setNotificationUserId:(NSString *)arg1 ;
-(BOOL)hasUserStorefrontId;
-(NSString *)userStorefrontId;
-(void)setDeviceInfoToAdd:(NTPBDeviceInfo *)arg1 ;
-(void)setDeviceInfoToRemove:(NTPBDeviceInfo *)arg1 ;
-(BOOL)hasNotificationUserId;
-(BOOL)hasDeviceInfoToAdd;
-(BOOL)hasDeviceInfoToRemove;
-(NSString *)notificationUserId;
-(NTPBDeviceInfo *)deviceInfoToAdd;
-(NTPBDeviceInfo *)deviceInfoToRemove;
@end

