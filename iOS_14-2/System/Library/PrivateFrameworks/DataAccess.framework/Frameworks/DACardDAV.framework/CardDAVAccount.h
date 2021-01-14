/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(id)userAgentHeader;
-(unsigned long long)oauthVariant;
-(void)removeFromCoreDAVLoggingDelegates;
-(void)addToCoreDAVLoggingDelegates;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)onBehalfOfBundleIdentifier;
-(void)setCurLogger:(DACoreDAVLogger *)arg1 ;
-(DACoreDAVLogger *)curLogger;
-(id)spinnerIdentifiers;
-(id)serverRoot;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(id)serverComplianceClasses;
-(CoreDAVDiscoveryTaskGroup *)checkValidityTaskGroup;
-(void)setCheckValidityTaskGroup:(CoreDAVDiscoveryTaskGroup *)arg1 ;
-(id)wellKnownPaths;
-(BOOL)handleTrustChallenge:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)logHandle;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(BOOL)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1 ;
-(void)coreDAVTransmittedDataFinished;
-(BOOL)enabledForDADataclass:(long long)arg1 ;
-(DACoreDAVTaskManager *)taskManager;
-(void)dealloc;
-(CardDAVLocalDBHelper *)databaseHelper;
-(id)copyImageContentsAtURL:(id)arg1 outError:(id*)arg2 ;
-(void)_massageAddedOrModifiedVCard:(id)arg1 ;
-(void)setServerComplianceClasses:(id)arg1 ;
-(int)cardDAVAccountVersion;
@end

