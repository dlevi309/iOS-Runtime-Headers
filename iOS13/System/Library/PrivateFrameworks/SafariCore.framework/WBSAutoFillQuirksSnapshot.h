/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <libobjc.A.dylib/WBSRemotePlistSnapshot.h>

@class NSDictionary, NSArray, NSSet, NSString;

@interface WBSAutoFillQuirksSnapshot : NSObject <WBSRemotePlistSnapshot> {

	NSDictionary* _autoFillQuirks;
	NSArray* _domainsWithAssociatedCredentials;
	NSDictionary* _passwordRequirementsByDomain;
	NSArray* _domainsIneligibleForPasswordAuditing;
	NSArray* _domainsToConsiderIdentical;
	NSSet* _domainsIneligibleForAutomaticLogin;
	NSSet* _domainsIneligibleForStreamlinedLogin;

}

@property (nonatomic,copy,readonly) NSDictionary * passwordRequirementsByDomain;                 //@synthesize passwordRequirementsByDomain=_passwordRequirementsByDomain - In the implementation block
@property (nonatomic,copy,readonly) NSArray * domainsWithAssociatedCredentials;                  //@synthesize domainsWithAssociatedCredentials=_domainsWithAssociatedCredentials - In the implementation block
@property (nonatomic,copy,readonly) NSArray * domainsIneligibleForPasswordAuditing;              //@synthesize domainsIneligibleForPasswordAuditing=_domainsIneligibleForPasswordAuditing - In the implementation block
@property (nonatomic,copy,readonly) NSArray * domainsToConsiderIdentical;                        //@synthesize domainsToConsiderIdentical=_domainsToConsiderIdentical - In the implementation block
@property (nonatomic,copy,readonly) NSSet * domainsIneligibleForAutomaticLogin;                  //@synthesize domainsIneligibleForAutomaticLogin=_domainsIneligibleForAutomaticLogin - In the implementation block
@property (nonatomic,copy,readonly) NSSet * domainsIneligibleForStreamlinedLogin;                //@synthesize domainsIneligibleForStreamlinedLogin=_domainsIneligibleForStreamlinedLogin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithPlistData:(id)arg1 error:(id*)arg2 ;
-(id)plistDataWithFormat:(unsigned long long)arg1 ;
-(NSDictionary *)passwordRequirementsByDomain;
-(id)_passwordRequirementsByDomainFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)_domainsWithAssociatedCredentialsFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)_domainsIneligibleForPasswordAuditingFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)_domainsToConsiderIdenticalFromAutoFillQuirls:(id)arg1 error:(id*)arg2 ;
-(id)_domainsIneligibleForAutomaticLoginFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)_domainsIneligibleForStreamlinedLoginFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(NSArray *)domainsWithAssociatedCredentials;
-(NSArray *)domainsIneligibleForPasswordAuditing;
-(NSArray *)domainsToConsiderIdentical;
-(NSSet *)domainsIneligibleForAutomaticLogin;
-(NSSet *)domainsIneligibleForStreamlinedLogin;
@end

