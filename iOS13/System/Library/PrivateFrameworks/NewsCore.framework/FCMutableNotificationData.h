/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)storefrontID;
-(NSString *)deviceToken;
-(void)setDeviceToken:(id)arg1;
-(void)setStorefrontID:(id)arg1;
-(NSString *)notificationUserID;
-(void)setBaseURLString:(id)arg1;
-(void)setNotificationUserID:(id)arg1;
-(NSString *)baseURLString;

@end


@class NSString, NSMutableDictionary;

@interface FCMutableNotificationData : FCNotificationDropboxData <FCMutableNotificationData>

@property (nonatomic,readonly) NSMutableDictionary * dictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * baseURLString; 
@property (nonatomic,copy,readonly) NSString * notificationUserID; 
@property (nonatomic,copy,readonly) NSString * deviceToken; 
@property (nonatomic,copy,readonly) NSString * storefrontID; 
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDeviceToken:(NSString *)arg1 ;
-(void)setStorefrontID:(NSString *)arg1 ;
-(void)setBaseURLString:(NSString *)arg1 ;
-(void)setNotificationUserID:(NSString *)arg1 ;
@end

