/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCNotificationDropboxData.h>
#import <libobjc.A.dylib/FCMutableNotificationData.h>
@class NSString;


@protocol FCMutableNotificationData <FCNotificationDropboxData>
@property (nonatomic,copy) NSString * baseURLString; 
@property (nonatomic,copy) NSString * notificationUserID; 
@property (nonatomic,copy) NSString * deviceToken; 
@property (nonatomic,copy) NSString * storefrontID; 
@required
-(void)setNotificationUserID:(id)arg1;
-(NSString *)storefrontID;
-(NSString *)deviceToken;
-(void)setStorefrontID:(id)arg1;
-(NSString *)notificationUserID;
-(void)setBaseURLString:(id)arg1;
-(NSString *)baseURLString;
-(void)setDeviceToken:(id)arg1;

@end


@class NSString, NSMutableDictionary;

@interface FCMutableNotificationData : FCNotificationDropboxData <FCMutableNotificationData>

@property (nonatomic,readonly) NSMutableDictionary * dictionary; 
@property (nonatomic,copy) NSString * baseURLString; 
@property (nonatomic,copy) NSString * notificationUserID; 
@property (nonatomic,copy) NSString * deviceToken; 
@property (nonatomic,copy) NSString * storefrontID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setNotificationUserID:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setStorefrontID:(NSString *)arg1 ;
-(void)setBaseURLString:(NSString *)arg1 ;
-(void)setDeviceToken:(NSString *)arg1 ;
@end

