/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <libobjc.A.dylib/WBSRemotePlistControllerDelegate.h>

@class WBSPasswordGenerationManager, WBSAutoFillAssociatedDomainsManager, WBSRemotePlistController, WBSPasswordAuditingEligibleDomainsManager, WBSChangePasswordURLManager, NSString;

@interface WBSAutoFillQuirksManager : NSObject <WBSRemotePlistControllerDelegate> {

	WBSPasswordGenerationManager* _passwordGenerationManager;
	WBSAutoFillAssociatedDomainsManager* _associatedDomainsManager;
	WBSRemotePlistController* _remotePlistController;
	WBSPasswordAuditingEligibleDomainsManager* _passwordAuditingEligibleDomainsManager;
	WBSChangePasswordURLManager* _changePasswordURLManager;
	BOOL _shouldAttemptToDownloadConfiguration;

}

@property (nonatomic,readonly) WBSPasswordGenerationManager * passwordGenerationManager; 
@property (nonatomic,readonly) WBSAutoFillAssociatedDomainsManager * associatedDomainsManager; 
@property (nonatomic,readonly) WBSPasswordAuditingEligibleDomainsManager * passwordAuditingEligibleDomainsManager; 
@property (nonatomic,readonly) WBSChangePasswordURLManager * changePasswordURLManager; 
@property (assign,nonatomic) BOOL shouldAttemptToDownloadConfiguration;                                                         //@synthesize shouldAttemptToDownloadConfiguration=_shouldAttemptToDownloadConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setShouldAttemptToDownloadConfiguration:(BOOL)arg1 ;
-(void)prepareForTermination;
-(id)_passwordRequirementsByDomainFromCurrentSnapshot;
-(id)_domainsWithAssociatedCredentialsFromCurrentSnapshot;
-(id)_domainsToConsiderIdenticalFromCurrentSnapshot;
-(id)_domainsIneligibleForPasswordAuditingFromCurrentSnapshot;
-(id)_changePasswordURLStringsFromCurrentSnapshot;
-(void)didDownloadPlistForRemotePlistController:(id)arg1 ;
-(id)initWithBuiltInQuirksURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6 ;
-(void)beginLoadingQuirksFromDisk;
-(WBSPasswordGenerationManager *)passwordGenerationManager;
-(WBSChangePasswordURLManager *)changePasswordURLManager;
-(BOOL)isAutomaticLoginDisallowedOnURL:(id)arg1 ;
-(BOOL)isStreamlinedLoginDisallowedOnURL:(id)arg1 ;
-(BOOL)shouldAttemptToDownloadConfiguration;
-(WBSAutoFillAssociatedDomainsManager *)associatedDomainsManager;
-(WBSPasswordAuditingEligibleDomainsManager *)passwordAuditingEligibleDomainsManager;
@end

