/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
*/

#import <DALDAP/LDAPTask.h>

@protocol OS_ldap_operation;
@class DAContactsSearchQuery, NSMutableArray, NSObject;

@interface LDAPSearchTask : LDAPTask {

	DAContactsSearchQuery* _query;
	NSMutableArray* _foundContacts;
	NSObject*<OS_ldap_operation> _operation;

}

@property (nonatomic,retain) NSMutableArray * foundContacts;                      //@synthesize foundContacts=_foundContacts - In the implementation block
@property (nonatomic,retain) NSObject*<OS_ldap_operation> operation;              //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) DAContactsSearchQuery * query;                     //@synthesize query=_query - In the implementation block
-(DAContactsSearchQuery *)query;
-(NSObject*<OS_ldap_operation>)operation;
-(void)setOperation:(NSObject*<OS_ldap_operation>)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(void)disable;
-(void)performTask;
-(void)_performQuery;
-(NSMutableArray *)foundContacts;
-(int)numDownloadedElements;
-(void)_failImmediately;
-(id)daLevelErrorForLDAPError:(int)arg1 ;
-(id)_searchStringForWord:(id)arg1 ;
-(void)_appendKey:(id)arg1 value:(id)arg2 toSearchResultElement:(id)arg3 ;
-(id)_copySearchStringForQueryInput:(id)arg1 ;
-(void)_promptForPasswordDueToError:(id)arg1 ;
-(void)setFoundContacts:(NSMutableArray *)arg1 ;
@end

