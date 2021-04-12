/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface FPProviderMonitor : NSObject {

	NSMutableDictionary* _observersByContainerID;
	NSMutableDictionary* _notifyTokenByContainerID;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)providerIDForApplication:(id)arg1 sharedContainerIdentifier:(id)arg2 ;
+(BOOL)isProviderIDForeground:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 forProviderID:(id)arg2 ;
-(void)removeObserver:(id)arg1 forProviderID:(id)arg2 ;
-(BOOL)supportsWakesForProviderID:(id)arg1 ;
-(BOOL)wakeProviderID:(id)arg1 forSessionIdentifier:(id)arg2 ;
@end

