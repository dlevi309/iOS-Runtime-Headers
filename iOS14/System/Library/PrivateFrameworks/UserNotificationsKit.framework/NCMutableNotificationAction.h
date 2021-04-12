/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <UserNotificationsKit/NCNotificationAction.h>

@class NSString, NSURL, NSDictionary;

@interface NCMutableNotificationAction : NCNotificationAction

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) unsigned long long activationMode; 
@property (nonatomic,copy) NSURL * launchURL; 
@property (nonatomic,copy) NSString * launchBundleID; 
@property (assign,nonatomic) unsigned long long behavior; 
@property (nonatomic,copy) NSDictionary * behaviorParameters; 
@property (nonatomic,retain) id<NCNotificationActionRunner> actionRunner; 
@property (assign,nonatomic) BOOL requiresAuthentication; 
@property (assign,getter=isDestructiveAction,nonatomic) BOOL destructiveAction; 
@property (assign,nonatomic) BOOL shouldDismissNotification; 
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(void)setBehavior:(unsigned long long)arg1 ;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLaunchBundleID:(NSString *)arg1 ;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(void)setBehaviorParameters:(NSDictionary *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShouldDismissNotification:(BOOL)arg1 ;
-(void)setDestructiveAction:(BOOL)arg1 ;
-(void)setActionRunner:(id<NCNotificationActionRunner>)arg1 ;
@end

