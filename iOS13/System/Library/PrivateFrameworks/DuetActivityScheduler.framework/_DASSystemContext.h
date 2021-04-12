/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/


@protocol _CDLocalContext, OS_os_log;
@class NSObject;

@interface _DASSystemContext : NSObject {

	id<_CDLocalContext> _context;
	NSObject*<OS_os_log> _dasSystemContextLog;
	long long _networkPathStatus;
	long long _inexpensiveNetworkPathStatus;

}

@property (nonatomic,retain) id<_CDLocalContext> context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> dasSystemContextLog;              //@synthesize dasSystemContextLog=_dasSystemContextLog - In the implementation block
@property (assign,nonatomic) long long networkPathStatus;                           //@synthesize networkPathStatus=_networkPathStatus - In the implementation block
@property (assign,nonatomic) long long inexpensiveNetworkPathStatus;                //@synthesize inexpensiveNetworkPathStatus=_inexpensiveNetworkPathStatus - In the implementation block
+(id)sharedInstance;
+(id)initWithContext:(id)arg1 ;
-(id)init;
-(id<_CDLocalContext>)context;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
-(BOOL)allowsDiscretionaryWorkForTask:(id)arg1 withPriority:(unsigned long long)arg2 withParameters:(id)arg3 ;
-(BOOL)allowDiscretionaryWorkForBackgroundTask:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)allowDiscretionaryWorkForUtilityTask:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)isNetworkAvailable;
-(BOOL)isApplicationFocalForPushTask:(id)arg1 ;
-(NSObject*<OS_os_log>)dasSystemContextLog;
-(BOOL)isInexpensiveNetworkAvailable;
-(void)setDasSystemContextLog:(NSObject*<OS_os_log>)arg1 ;
-(long long)networkPathStatus;
-(void)setNetworkPathStatus:(long long)arg1 ;
-(long long)inexpensiveNetworkPathStatus;
-(void)setInexpensiveNetworkPathStatus:(long long)arg1 ;
@end

