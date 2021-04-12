/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet, NSMutableOrderedSet, NSExtension;

@interface SFCredentialProviderExtensionManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id _extensionMatchingToken;
	NSSet* _extensions;
	NSMutableOrderedSet* _observers;
	BOOL _errorEncounteredDuringLastExtensionDiscovery;
	NSSet* _extensionsSync;

}

@property (nonatomic,readonly) NSSet * extensions; 
@property (nonatomic,readonly) NSSet * extensionsSync;                          //@synthesize extensionsSync=_extensionsSync - In the implementation block
@property (nonatomic,readonly) NSExtension * primaryExtension; 
@property (nonatomic,readonly) NSExtension * primaryExtensionSync; 
+(id)sharedManager;
-(void)instantiateViewControllerForExtension:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
-(id)auxiliaryRemoteObjectForExtension:(id)arg1 withRequestID:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)_extensions;
-(NSSet *)extensions;
-(BOOL)extensionIsEnabled:(id)arg1 ;
-(void)setExtension:(id)arg1 isEnabled:(BOOL)arg2 ;
-(id)displayNameForExtension:(id)arg1 ;
-(NSExtension *)primaryExtension;
-(NSExtension *)primaryExtensionSync;
-(void)getPrimaryExtensionWithCompletion:(/*^block*/id)arg1 ;
-(void)_notifyObservers:(id)arg1 ;
-(void)_updateExtensions:(id)arg1 ;
-(void)_beginExtensionDiscovery;
-(void)_endExtensionDiscovery;
-(BOOL)shouldShowConfigurationUIForEnablingExtension:(id)arg1 ;
-(NSSet *)extensionsSync;
@end

