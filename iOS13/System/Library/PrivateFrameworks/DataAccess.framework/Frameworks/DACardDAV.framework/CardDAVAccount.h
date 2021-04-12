/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
*/

#import <DACardDAV/DACardDAV-Structs.h>
#import <DataAccess/DAAccount.h>
#import <libobjc.A.dylib/CoreDAVAccountInfoProvider.h>
#import <libobjc.A.dylib/CoreDAVOAuthInfoProvider.h>
#import <libobjc.A.dylib/CoreDAVLogDelegate.h>
#import <libobjc.A.dylib/CoreDAVDiscoveryTaskGroupDelegate.h>

@class CardDAVLocalDBHelper, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger, DACoreDAVTaskManager, NSString;

@interface CardDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate> {

	int _cardDAVAccountVersion;
	CardDAVLocalDBHelper* _databaseHelper;
	CoreDAVDiscoveryTaskGroup* _checkValidityTaskGroup;
	DACoreDAVLogger* _curLogger;

}

@property (nonatomic,retain) CoreDAVDiscoveryTaskGroup * checkValidityTaskGroup;              //@synthesize checkValidityTaskGroup=_checkValidityTaskGroup - In the implementation block
@property (nonatomic,retain) DACoreDAVLogger * curLogger;                                     //@synthesize curLogger=_curLogger - In the implementation block
@property (nonatomic,readonly) int cardDAVAccountVersion;                                     //@synthesize cardDAVAccountVersion=_cardDAVAccountVersion - In the implementation block
@property (nonatomic,readonly) DACoreDAVTaskManager * taskManager; 
@property (nonatomic,readonly) CardDAVLocalDBHelper * databaseHelper;                         //@synthesize databaseHelper=_databaseHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)addressBookConstraintsPlistPath;
-(void)dealloc;
-(id)logHandle;
-(id)userAgentHeader;
-(DACoreDAVTaskManager *)taskManager;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(BOOL)enabledForDADataclass:(long long)arg1 ;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)removeFromCoreDAVLoggingDelegates;
-(void)addToCoreDAVLoggingDelegates;
-(id)onBehalfOfBundleIdentifier;
-(id)spinnerIdentifiers;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(id)serverRoot;
-(id)serverComplianceClasses;
-(BOOL)handleTrustChallenge:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(CoreDAVDiscoveryTaskGroup *)checkValidityTaskGroup;
-(void)setCheckValidityTaskGroup:(CoreDAVDiscoveryTaskGroup *)arg1 ;
-(id)wellKnownPaths;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(BOOL)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1 ;
-(void)coreDAVTransmittedDataFinished;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(unsigned long long)oauthVariant;
-(void)setCurLogger:(DACoreDAVLogger *)arg1 ;
-(DACoreDAVLogger *)curLogger;
-(CardDAVLocalDBHelper *)databaseHelper;
-(id)copyImageContentsAtURL:(id)arg1 outError:(id*)arg2 ;
-(void)_massageAddedOrModifiedVCard:(id)arg1 ;
-(void)setServerComplianceClasses:(id)arg1 ;
-(int)cardDAVAccountVersion;
@end

