/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSArray, NSMutableOrderedSet, NSUserDefaults;

@interface _ASAccountAuthenticationModificationExtensionManager : NSObject {

	NSObject*<OS_dispatch_queue> _dataConstructionQueue;
	NSObject*<OS_dispatch_queue> _readOnlyQueue;
	id _extensionMatchingToken;
	NSDictionary* _domainToExtension;
	NSArray* _extensions;
	NSMutableOrderedSet* _observers;
	BOOL _errorEncounteredDuringLastExtensionDiscovery;
	NSUserDefaults* _mobileSafariUserDefaults;

}
+(id)sharedManager;
-(void)addObserver:(id)arg1 ;
-(void)extensionForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)_notifyObservers:(id)arg1 ;
-(void)_endExtensionDiscovery;
-(void)_beginExtensionDiscovery;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(void)_buildDomainToExtensionDictionaryWithSharedWebCredentialsDatabaseEntries:(id)arg1 ;
@end

