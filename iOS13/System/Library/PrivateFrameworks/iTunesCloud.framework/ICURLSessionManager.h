/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ICURLSessionManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _cachedSessions;

}
+(id)defaultSession;
+(id)highPrioritySession;
+(id)sharedSessionManager;
-(id)init;
-(id)sessionWithIdentifier:(id)arg1 configuration:(id)arg2 ;
-(id)sessionWithQualityOfService:(long long)arg1 ;
-(id)_sessionIdentifierWithQualityOfService:(long long)arg1 ;
-(id)_newSessionWithQualityOfService:(long long)arg1 ;
-(id)sessionWithIdentifier:(id)arg1 ;
-(void)addSession:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeSessionWithIdentifier:(id)arg1 ;
@end

