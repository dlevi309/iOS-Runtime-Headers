/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationAttachmentOptions.h>

@class NSDictionary;

@interface UNMutableNotificationAttachmentOptions : UNNotificationAttachmentOptions

@property (assign,nonatomic) unsigned long long displayLocation; 
@property (nonatomic,copy) NSDictionary * thumbnailGeneratorUserInfo; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayLocation:(unsigned long long)arg1 ;
-(void)setThumbnailGeneratorUserInfo:(NSDictionary *)arg1 ;
@end

