/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(NSExtension *)primaryExtension;
-(BOOL)shouldShowConfigurationUIForEnablingExtension:(id)arg1 ;
-(BOOL)extensionIsEnabled:(id)arg1 ;
-(id)init;
-(NSExtension *)primaryExtensionSync;
-(void)_notifyObservers:(id)arg1 ;
-(void)getPrimaryExtensionWithCompletion:(/*^block*/id)arg1 ;
-(id)_extensions;
-(NSSet *)extensions;
-(void)_endExtensionDiscovery;
-(void)_beginExtensionDiscovery;
-(void)removeObserver:(id)arg1 ;
-(void)_updateExtensions:(id)arg1 ;
-(NSSet *)extensionsSync;
-(id)displayNameForExtension:(id)arg1 ;
-(void)setExtension:(id)arg1 isEnabled:(BOOL)arg2 ;
-(void)dealloc;
@end

