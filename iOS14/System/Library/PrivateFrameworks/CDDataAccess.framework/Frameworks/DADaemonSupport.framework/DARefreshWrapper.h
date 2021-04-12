/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/

#import <DADaemonSupport/DATokenRegistrationDelegate.h>

@protocol DARefreshManagerDelegate;
@class NSDate, NSMutableSet;

@interface DARefreshWrapper : NSObject <DATokenRegistrationDelegate> {

	int _pushState;
	int _curStyle;
	int _refreshReason;
	id<DARefreshManagerDelegate> _delegate;
	NSDate* _pushRegistrationTime;
	NSMutableSet* _tokenRegistrations;
	NSMutableSet* _refreshCollections;
	long long _fetchInterval;

}

@property (nonatomic,retain) NSMutableSet * tokenRegistrations;                         //@synthesize tokenRegistrations=_tokenRegistrations - In the implementation block
@property (assign,nonatomic) int refreshReason;                                         //@synthesize refreshReason=_refreshReason - In the implementation block
@property (nonatomic,retain) NSMutableSet * refreshCollections;                         //@synthesize refreshCollections=_refreshCollections - In the implementation block
@property (assign,nonatomic) long long fetchInterval;                                   //@synthesize fetchInterval=_fetchInterval - In the implementation block
@property (assign,nonatomic,__weak) id<DARefreshManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int pushState;                                             //@synthesize pushState=_pushState - In the implementation block
@property (nonatomic,retain) NSDate * pushRegistrationTime;                             //@synthesize pushRegistrationTime=_pushRegistrationTime - In the implementation block
@property (assign,nonatomic) int curStyle;                                              //@synthesize curStyle=_curStyle - In the implementation block
-(id)init;
-(id<DARefreshManagerDelegate>)delegate;
-(int)pushState;
-(int)refreshReason;
-(void)setRefreshReason:(int)arg1 ;
-(void)setDelegate:(id<DARefreshManagerDelegate>)arg1 ;
-(id)description;
-(id)_stringForStyle:(int)arg1 ;
-(NSMutableSet *)refreshCollections;
-(NSDate *)pushRegistrationTime;
-(void)performTokenRegistrationRequestsWithToken:(id)arg1 onBehalfOf:(id)arg2 ;
-(void)setPushState:(int)arg1 ;
-(void)startFetchActivityForPush;
-(void)setPushRegistrationTime:(NSDate *)arg1 ;
-(void)startFetchActivityForSystemPCStyle;
-(int)curStyle;
-(BOOL)isSetToSystemFetchInterval;
-(void)setCurStyle:(int)arg1 ;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2 ;
-(void)stopCollectionsRefresh;
-(void)dailyRefreshActivityFired;
-(void)retryCollections:(id)arg1 after:(double)arg2 reason:(int)arg3 ;
-(void)tokenRegistrationRequest:(id)arg1 finishedWithError:(id)arg2 ;
-(void)cancelFetchActivity;
-(void)setTokenRegistrations:(NSMutableSet *)arg1 ;
-(const char*)retryActivityIdentifier;
-(void)cancelRetryActivity;
-(void)cancelDailyRefreshActivity;
-(void)cancelAllTokenRegistrations;
-(const char*)fetchActivityIdentifier;
-(long long)fetchInterval;
-(id)_fetchActivityCriteriaWithInterval:(long long)arg1 ;
-(id)_fetchActivityCriteriaInOnPowerMode;
-(long long)XPCActivityIntervalFromSystemSetting;
-(void)setFetchInterval:(long long)arg1 ;
-(void)startFetchActivityWithInterval:(long long)arg1 ;
-(NSMutableSet *)tokenRegistrations;
-(void)startDailyRefreshActivity;
-(void)setRefreshCollections:(NSMutableSet *)arg1 ;
-(void)_retryActivityFired;
@end

