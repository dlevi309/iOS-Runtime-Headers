/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol NCNotificationActionRunner;
@class NSString, NSURL, NSDictionary;

@interface NCNotificationAction : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {

	NSString* _identifier;
	NSString* _title;
	unsigned long long _activationMode;
	NSURL* _launchURL;
	NSString* _launchBundleID;
	unsigned long long _behavior;
	NSDictionary* _behaviorParameters;
	id<NCNotificationActionRunner> _actionRunner;
	BOOL _requiresAuthentication;
	BOOL _destructiveAction;
	BOOL _shouldDismissNotification;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long activationMode;                              //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,copy,readonly) NSURL * launchURL;                                         //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchBundleID;                                 //@synthesize launchBundleID=_launchBundleID - In the implementation block
@property (nonatomic,readonly) unsigned long long behavior;                                    //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * behaviorParameters;                         //@synthesize behaviorParameters=_behaviorParameters - In the implementation block
@property (nonatomic,readonly) id<NCNotificationActionRunner> actionRunner;                    //@synthesize actionRunner=_actionRunner - In the implementation block
@property (getter=isSystemAction,nonatomic,readonly) BOOL systemAction; 
@property (nonatomic,readonly) BOOL requiresAuthentication;                                    //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (getter=isDestructiveAction,nonatomic,readonly) BOOL destructiveAction;              //@synthesize destructiveAction=_destructiveAction - In the implementation block
@property (nonatomic,readonly) BOOL shouldDismissNotification;                                 //@synthesize shouldDismissNotification=_shouldDismissNotification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_notificationActionForAction:(id)arg1 bulletin:(id)arg2 observer:(id)arg3 ;
+(id)notificationActionForAction:(id)arg1 bulletin:(id)arg2 observer:(id)arg3 ;
+(id)notificationActionForDefaultAction:(id)arg1 bulletin:(id)arg2 observer:(id)arg3 ;
+(id)notificationActionForDismissAction:(id)arg1 bulletin:(id)arg2 observer:(id)arg3 ;
+(id)notificationActionForSilenceAction:(id)arg1 bulletin:(id)arg2 observer:(id)arg3 ;
+(id)notificationActionForUNNotificationAction:(id)arg1 bulletin:(id)arg2 observer:(id)arg3 ;
+(id)userNotificationActionForNCNotificationAction:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)activationMode;
-(unsigned long long)behavior;
-(NSURL *)launchURL;
-(BOOL)requiresAuthentication;
-(BOOL)isDestructiveAction;
-(NSString *)launchBundleID;
-(NSDictionary *)behaviorParameters;
-(BOOL)shouldDismissNotification;
-(id<NCNotificationActionRunner>)actionRunner;
-(id)initWithNotificationAction:(id)arg1 ;
-(BOOL)isSystemAction;
@end

