/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UNUserNotificationCenter *)userNotificationCenter;
-(void)daemonReady:(id)arg1 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(void)setSummaryBuilder:(HDActivitySummaryBuilder *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setUserNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(void)notificationDidSendSuccessfully;
-(void)setKeyValueDomain:(HDKeyValueDomain *)arg1 ;
-(void)sendNotificationWithCompletion:(/*^block*/id)arg1 ;
-(HDProfile *)profile;
-(long long)notificationDelayNumberOfMinutes;
-(HDKeyValueDomain *)keyValueDomain;
-(void)sendNotificationIfAllowed;
-(void)protectedDataBecameAvailable;
-(HDActivitySummaryBuilder *)summaryBuilder;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
@end

