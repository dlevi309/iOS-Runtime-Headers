/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
*/

#import <ControlCenterServices/ControlCenterServices-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol BSDefaultObserver, OS_dispatch_queue;
@class NSArray, NSSet, NSDictionary, NSHashTable, NSObject, NSString;

@interface CCSModuleRepository : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSArray* _directoryURLs;
	NSSet* _whitelistedModuleIdentifiers;
	NSDictionary* _allModuleMetadataByIdentifier;
	NSSet* _availableModuleIdentifiers;
	NSSet* _interestingBundleIdentifiers;
	MGNotificationTokenStructRef _mobileGestaltNotificationToken;
	NSHashTable* _observers;
	NSObject*<BSDefaultObserver> _internalDefaultsObserver;
	NSSet* _loadableModuleIdentifiers;
	BOOL _ignoreWhitelist;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;

}

@property (nonatomic,copy,readonly) NSSet * loadableModuleIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_deviceFamily;
+(id)repositoryWithDefaults;
+(id)_defaultModuleDirectories;
+(id)_defaultModuleIdentifierWhitelist;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)moduleMetadataForModuleIdentifier:(id)arg1 ;
-(NSSet *)loadableModuleIdentifiers;
-(id)_initWithDirectoryURLs:(id)arg1 whitelistedModuleIdentifiers:(id)arg2 ;
-(void)_queue_updateAllModuleMetadata;
-(void)_queue_setIgnoreWhitelist:(BOOL)arg1 ;
-(void)_queue_registerForVisiblityPreferenceChanges;
-(void)_queue_registerForInternalPreferenceChanges;
-(void)_queue_unregisterForVisiblityPreferenceChanges;
-(void)_queue_unregisterForInternalPreferenceChanges;
-(void)_queue_stopObservingGestaltQuestions;
-(void)_applicationsDidChange:(id)arg1 ;
-(BOOL)_queue_arrayContainsInterestingApplicationProxy:(id)arg1 ;
-(void)_queue_updateAvailableModuleMetadata;
-(id)_queue_loadAllModuleMetadata;
-(void)_queue_updateAllModuleMetadataForAllModuleMetadata:(id)arg1 ;
-(void)_queue_updateAvailableModuleMetadataForAllModuleMetadata:(id)arg1 ;
-(void)_queue_updateLoadableModuleMetadataForAvailableModuleMetadata:(id)arg1 ;
-(void)_queue_updateInterestingBundleIdentifiersForModuleMetadata:(id)arg1 ;
-(id)_queue_filterModuleMetadataByAssociatedBundleAvailability:(id)arg1 ;
-(id)_queue_filterModuleMetadataByVisibilityPreference:(id)arg1 ;
-(id)_queue_moduleIdentifiersForMetadata:(id)arg1 ;
-(void)_queue_updateGestaltQuestionsForModuleMetadata:(id)arg1 ;
-(id)_queue_filterModuleMetadataByGestalt:(id)arg1 ;
-(void)_queue_runBlockOnObservers:(/*^block*/id)arg1 ;
-(id)_queue_associatedBundleIdentifiersForModuleMetadata:(id)arg1 ;
-(id)_queue_gestaltQuestionsForModuleMetadata:(id)arg1 ;
-(void)_queue_updateLoadableModuleMetadata;
-(void)_queue_startObservingMobileGestaltQuestions:(id)arg1 withChangeHandler:(/*^block*/id)arg2 ;
-(void)_updateAllModuleMetadata;
-(void)_updateAvailableModuleMetadata;
@end

