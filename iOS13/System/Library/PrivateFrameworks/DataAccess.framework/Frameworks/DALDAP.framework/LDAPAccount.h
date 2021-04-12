/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
*/

#import <DataAccess/DAAccount.h>

@class NSMutableSet, NSMutableArray;

@interface LDAPAccount : DAAccount {

	NSMutableSet* _searchTaskSet;
	NSMutableArray* _mutableSearchSettings;

}

@property (nonatomic,retain) NSMutableSet * searchTaskSet;                        //@synthesize searchTaskSet=_searchTaskSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableSearchSettings;              //@synthesize mutableSearchSettings=_mutableSearchSettings - In the implementation block
-(id)searchSettings;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(void)ingestBackingAccountInfoProperties;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(id)onBehalfOfBundleIdentifier;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(BOOL)isLDAPAccount;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(void)_reallyCancelSearchQuery:(id)arg1 ;
-(void)_reallyCancelAllSearchQueries;
-(void)setSearchTaskSet:(NSMutableSet *)arg1 ;
-(NSMutableSet *)searchTaskSet;
-(id)connectionURL;
-(void)setMutableSearchSettings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableSearchSettings;
-(void)addSearchSettings:(id)arg1 ;
-(id)connectionURLWithSSL:(BOOL)arg1 ;
-(void)ldapSearchTask:(id)arg1 finishedWithError:(id)arg2 foundItems:(id)arg3 ;
-(void)ldapGetDefaultSearchBaseTask:(id)arg1 completedWithStatus:(long long)arg2 error:(id)arg3 defaultSearchBase:(id)arg4 ;
-(void)removeSearchSettings:(id)arg1 ;
@end

