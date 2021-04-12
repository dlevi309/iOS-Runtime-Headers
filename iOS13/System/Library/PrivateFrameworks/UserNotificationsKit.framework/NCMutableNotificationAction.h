/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(void)setBehavior:(unsigned long long)arg1 ;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(void)setLaunchBundleID:(NSString *)arg1 ;
-(void)setBehaviorParameters:(NSDictionary *)arg1 ;
-(void)setActionRunner:(id<NCNotificationActionRunner>)arg1 ;
-(void)setDestructiveAction:(BOOL)arg1 ;
-(void)setShouldDismissNotification:(BOOL)arg1 ;
@end

