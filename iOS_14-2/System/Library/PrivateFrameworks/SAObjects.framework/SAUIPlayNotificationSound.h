/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIPlayNotificationSound : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * notificationId; 
@property (nonatomic,copy) NSString * notificationType; 
+(id)playNotificationSound;
+(id)playNotificationSoundWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)notificationId;
-(void)setNotificationId:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setNotificationType:(NSString *)arg1 ;
-(NSString *)notificationType;
@end

