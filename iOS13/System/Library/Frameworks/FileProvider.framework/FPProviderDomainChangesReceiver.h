/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSDictionary, NSObject, FPPacer;

@interface FPProviderDomainChangesReceiver : NSObject {

	NSMutableSet* _changesHandlers;
	NSDictionary* _providerDomainsByID;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _notifyToken;
	int _settingsChangedToken;
	FPPacer* _pacer;

}
+(id)sharedChangesReceiver;
-(id)_init;
-(void)signalChange;
-(void)updateProviderDomainsWithAttemptCount:(unsigned long long)arg1 ;
-(void)providerDomainsHaveChanged:(id)arg1 error:(id)arg2 ;
-(void)callChangesHandlersWithProviderDomains:(id)arg1 error:(id)arg2 ;
-(id)addChangesHandler:(/*^block*/id)arg1 ;
-(void)removeChangesHandlerToken:(id)arg1 ;
@end

