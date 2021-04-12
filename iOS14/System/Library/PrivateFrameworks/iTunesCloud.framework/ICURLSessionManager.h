/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ICURLSessionManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _cachedSessions;

}
+(id)highPrioritySession;
+(id)sharedSessionManager;
+(id)defaultSession;
-(void)removeSessionWithIdentifier:(id)arg1 ;
-(id)init;
-(void)addSession:(id)arg1 withIdentifier:(id)arg2 ;
-(id)sessionWithIdentifier:(id)arg1 ;
-(id)sessionWithIdentifier:(id)arg1 configuration:(id)arg2 ;
-(id)sessionWithQualityOfService:(long long)arg1 ;
-(id)_sessionIdentifierWithQualityOfService:(long long)arg1 ;
-(id)_newSessionWithQualityOfService:(long long)arg1 ;
@end

