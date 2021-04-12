/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SANotificationsSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * afterNotificationId; 
@property (nonatomic,copy) NSString * priority; 
@property (nonatomic,copy) NSString * sourceAppId; 
@property (nonatomic,copy) NSNumber * supportsSpokenNotifications; 
+(id)notificationsSearch;
+(id)notificationsSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)sourceAppId;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)afterNotificationId;
-(void)setAfterNotificationId:(NSString *)arg1 ;
-(NSNumber *)supportsSpokenNotifications;
-(void)setSupportsSpokenNotifications:(NSNumber *)arg1 ;
-(void)setSourceAppId:(NSString *)arg1 ;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
@end

