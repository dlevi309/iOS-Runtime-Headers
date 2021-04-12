/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_sharedInstance;
+(id)rootSettings;
+(id)domainGroupName;
+(Class)rootSettingsClass;
+(void)registerTestRecipe:(id)arg1 ;
-(void)_handleConnectionInvalidated;
-(id)_rootSettings;
-(id)_init;
-(void)_createConnection;
-(void)dealloc;
-(void)_registerTestRecipe:(id)arg1 ;
-(void)_updateServerConnectionStatusIfNecessary;
-(void)_disableObservationIfNecessary;
-(void)_sendProxyDefinitionIfNecessary;
-(void)_updateActiveTestRecipe;
-(void)_applyArchive:(id)arg1 ;
-(void)_noteRegistrationCompleted;
-(void)_restoreDefaultSettings;
-(void)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_registerWithServerIfNecessary;
-(void)_tearDownConnection;
-(void)_handleConnectionInterrupted;
-(void)updateSettingsFromArchive:(id)arg1 ;
-(void)restoreDefaultSettings;
-(void)setArchiveValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)invokeOutletAtKeyPath:(id)arg1 ;
-(void)sendActiveTestRecipeEvent:(long long)arg1 ;
@end

