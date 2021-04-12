/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <libobjc.A.dylib/WBSRemotePlistControllerDelegate.h>

@class WBSPasswordGenerationManager, WBSAutoFillAssociatedDomainsManager, WBSRemotePlistController, WBSPasswordAuditingEligibleDomainsManager, NSString;

@interface WBSAutoFillQuirksManager : NSObject <WBSRemotePlistControllerDelegate> {

	WBSPasswordGenerationManager* _passwordGenerationManager;
	WBSAutoFillAssociatedDomainsManager* _associatedDomainsManager;
	WBSRemotePlistController* _remotePlistController;
	WBSPasswordAuditingEligibleDomainsManager* _passwordAuditingEligibleDomainsManager;
	BOOL _shouldAttemptToDownloadConfiguration;

}

@property (nonatomic,readonly) WBSPasswordGenerationManager * passwordGenerationManager; 
@property (nonatomic,readonly) WBSAutoFillAssociatedDomainsManager * associatedDomainsManager; 
@property (nonatomic,readonly) WBSPasswordAuditingEligibleDomainsManager * passwordAuditingEligibleDomainsManager; 
@property (assign,nonatomic) BOOL shouldAttemptToDownloadConfiguration;                                                         //@synthesize shouldAttemptToDownloadConfiguration=_shouldAttemptToDownloadConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)prepareForTermination;
-(WBSAutoFillAssociatedDomainsManager *)associatedDomainsManager;
-(BOOL)isStreamlinedLoginDisallowedOnURL:(id)arg1 ;
-(WBSPasswordGenerationManager *)passwordGenerationManager;
-(BOOL)isAutomaticLoginDisallowedOnURL:(id)arg1 ;
-(WBSPasswordAuditingEligibleDomainsManager *)passwordAuditingEligibleDomainsManager;
-(void)setShouldAttemptToDownloadConfiguration:(BOOL)arg1 ;
-(id)_passwordRequirementsByDomainFromCurrentSnapshot;
-(id)_domainsWithAssociatedCredentialsFromCurrentSnapshot;
-(id)_domainsToConsiderIdenticalFromCurrentSnapshot;
-(id)_domainsIneligibleForPasswordAuditingFromCurrentSnapshot;
-(void)didDownloadPlistForRemotePlistController:(id)arg1 ;
-(id)initWithBuiltInQuirksURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6 ;
-(void)beginLoadingQuirksFromDisk;
-(BOOL)shouldAttemptToDownloadConfiguration;
@end

