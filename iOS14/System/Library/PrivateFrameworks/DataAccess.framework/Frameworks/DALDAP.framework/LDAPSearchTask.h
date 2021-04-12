/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)disable;
-(DAContactsSearchQuery *)query;
-(void)setOperation:(NSObject*<OS_ldap_operation>)arg1 ;
-(NSObject*<OS_ldap_operation>)operation;
-(void)_performQuery;
-(int)numDownloadedElements;
-(id)initWithQuery:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)performTask;
-(void)_failImmediately;
-(NSMutableArray *)foundContacts;
-(id)daLevelErrorForLDAPError:(int)arg1 ;
-(id)_searchStringForWord:(id)arg1 ;
-(void)_appendKey:(id)arg1 value:(id)arg2 toSearchResultElement:(id)arg3 ;
-(id)_copySearchStringForQueryInput:(id)arg1 ;
-(void)_promptForPasswordDueToError:(id)arg1 ;
-(void)setFoundContacts:(NSMutableArray *)arg1 ;
@end

