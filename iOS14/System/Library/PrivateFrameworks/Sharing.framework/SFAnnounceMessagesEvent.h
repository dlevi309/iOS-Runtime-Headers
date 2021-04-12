/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/SFCoreAnalyticsEvent.h>

@class NSDictionary, NSString;

@interface SFAnnounceMessagesEvent : NSObject <SFCoreAnalyticsEvent> {

	BOOL _allowsSiriWhenLocked;
	BOOL _announceMessagesAlreadyEnabled;
	BOOL _skippedTutorialCards;
	BOOL _userAutomaticallyEnrolled;
	BOOL _userExplicitlyOptedIn;
	BOOL _userExplicitlyOptedOut;
	long long _pairingExitView;

}

@property (assign,nonatomic) BOOL allowsSiriWhenLocked;                        //@synthesize allowsSiriWhenLocked=_allowsSiriWhenLocked - In the implementation block
@property (assign,nonatomic) BOOL announceMessagesAlreadyEnabled;              //@synthesize announceMessagesAlreadyEnabled=_announceMessagesAlreadyEnabled - In the implementation block
@property (assign,nonatomic) long long pairingExitView;                        //@synthesize pairingExitView=_pairingExitView - In the implementation block
@property (assign,nonatomic) BOOL skippedTutorialCards;                        //@synthesize skippedTutorialCards=_skippedTutorialCards - In the implementation block
@property (assign,nonatomic) BOOL userAutomaticallyEnrolled;                   //@synthesize userAutomaticallyEnrolled=_userAutomaticallyEnrolled - In the implementation block
@property (assign,nonatomic) BOOL userExplicitlyOptedIn;                       //@synthesize userExplicitlyOptedIn=_userExplicitlyOptedIn - In the implementation block
@property (assign,nonatomic) BOOL userExplicitlyOptedOut;                      //@synthesize userExplicitlyOptedOut=_userExplicitlyOptedOut - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * eventPayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringForExitView:(long long)arg1 ;
+(id)eventName;
-(BOOL)allowsSiriWhenLocked;
-(BOOL)announceMessagesAlreadyEnabled;
-(long long)pairingExitView;
-(BOOL)skippedTutorialCards;
-(BOOL)userAutomaticallyEnrolled;
-(void)submitEvent;
-(BOOL)userExplicitlyOptedIn;
-(BOOL)userExplicitlyOptedOut;
-(void)setAllowsSiriWhenLocked:(BOOL)arg1 ;
-(void)setAnnounceMessagesAlreadyEnabled:(BOOL)arg1 ;
-(void)setPairingExitView:(long long)arg1 ;
-(void)setSkippedTutorialCards:(BOOL)arg1 ;
-(void)setUserAutomaticallyEnrolled:(BOOL)arg1 ;
-(void)setUserExplicitlyOptedIn:(BOOL)arg1 ;
-(void)setUserExplicitlyOptedOut:(BOOL)arg1 ;
-(NSDictionary *)eventPayload;
@end

