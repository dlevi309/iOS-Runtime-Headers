/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)wakeProviderID:(id)arg1 forSessionIdentifier:(id)arg2 ;
-(void)addObserver:(id)arg1 forProviderID:(id)arg2 ;
-(BOOL)supportsWakesForProviderID:(id)arg1 ;
-(void)removeObserver:(id)arg1 forProviderID:(id)arg2 ;
-(void)dealloc;
@end

