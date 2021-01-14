/*
* Generated on Thursday, January 14, 2021 at 2:23:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)hasUserStorefrontId;
-(NSString *)userStorefrontId;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasNotificationUserId;
-(id)description;
-(NSString *)notificationUserId;
-(void)setDeviceInfoToAdd:(NTPBDeviceInfo *)arg1 ;
-(void)setDeviceInfoToRemove:(NTPBDeviceInfo *)arg1 ;
-(BOOL)hasDeviceInfoToAdd;
-(BOOL)hasDeviceInfoToRemove;
-(NTPBDeviceInfo *)deviceInfoToAdd;
-(NTPBDeviceInfo *)deviceInfoToRemove;
-(void)setNotificationUserId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

