/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@class HDProfile, HDKeyValueDomain, HDActivitySummaryBuilder, UNUserNotificationCenter, NSString;

@interface CHTrendsNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver> {

	HDProfile* _profile;
	HDKeyValueDomain* _keyValueDomain;
	HDActivitySummaryBuilder* _summaryBuilder;
	UNUserNotificationCenter* _userNotificationCenter;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HDKeyValueDomain * keyValueDomain;                              //@synthesize keyValueDomain=_keyValueDomain - In the implementation block
@property (nonatomic,retain) HDActivitySummaryBuilder * summaryBuilder;                      //@synthesize summaryBuilder=_summaryBuilder - In the implementation block
@property (nonatomic,retain) UNUserNotificationCenter * userNotificationCenter;              //@synthesize userNotificationCenter=_userNotificationCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(HDKeyValueDomain *)keyValueDomain;
-(void)setKeyValueDomain:(HDKeyValueDomain *)arg1 ;
-(UNUserNotificationCenter *)userNotificationCenter;
-(void)setUserNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(HDActivitySummaryBuilder *)summaryBuilder;
-(void)setSummaryBuilder:(HDActivitySummaryBuilder *)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)protectedDataBecameAvailable;
-(void)sendNotificationIfAllowed;
-(void)notificationDidSendSuccessfully;
-(void)sendNotificationWithCompletion:(/*^block*/id)arg1 ;
-(long long)notificationDelayNumberOfMinutes;
@end

