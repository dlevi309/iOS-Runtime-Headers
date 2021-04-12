/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(void)setSourceAppId:(NSString *)arg1 ;
-(NSString *)sourceAppId;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)afterNotificationId;
-(void)setAfterNotificationId:(NSString *)arg1 ;
-(NSNumber *)supportsSpokenNotifications;
-(void)setSupportsSpokenNotifications:(NSNumber *)arg1 ;
@end

