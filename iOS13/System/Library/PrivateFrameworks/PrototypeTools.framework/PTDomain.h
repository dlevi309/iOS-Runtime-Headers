/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <libobjc.A.dylib/PTDomainClient.h>

@class NSXPCConnection, PTDomainInfo, NSString, PTSettings, NSMutableDictionary, PTTestRecipe;

@interface PTDomain : NSObject <PTDomainClient> {

	NSXPCConnection* _serverConnection;
	PTDomainInfo* _domainInfo;
	NSString* _domainID;
	PTSettings* _rootSettings;
	NSMutableDictionary* _testRecipesByIdentifier;
	PTTestRecipe* _activeTestRecipe;
	BOOL _registrationRequested;
	BOOL _registrationCompleted;
	BOOL _haveSentProxyDefinition;
	double _delayBeforeRegisteringAfterInterruption;
	BOOL _archiveIsApplied;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)domainName;
+(id)rootSettings;
+(id)domainGroupName;
+(Class)rootSettingsClass;
+(id)_sharedInstance;
+(void)registerTestRecipe:(id)arg1 ;
-(void)dealloc;
-(id)_init;
-(id)_rootSettings;
-(void)_registerTestRecipe:(id)arg1 ;
-(void)_updateServerConnectionStatusIfNecessary;
-(void)_disableObservationIfNecessary;
-(void)_sendProxyDefinitionIfNecessary;
-(void)_updateActiveTestRecipe;
-(void)_applyArchive:(id)arg1 ;
-(void)_noteRegistrationCompleted;
-(void)_restoreDefaultSettings;
-(void)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_createConnection;
-(void)_registerWithServerIfNecessary;
-(void)_tearDownConnection;
-(void)_handleConnectionInterrupted;
-(void)_handleConnectionInvalidated;
-(void)updateSettingsFromArchive:(id)arg1 ;
-(void)restoreDefaultSettings;
-(void)setArchiveValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)invokeOutletAtKeyPath:(id)arg1 ;
-(void)sendActiveTestRecipeEvent:(long long)arg1 ;
@end

