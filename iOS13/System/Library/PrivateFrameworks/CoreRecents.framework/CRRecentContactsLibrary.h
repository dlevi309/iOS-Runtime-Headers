/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface CRRecentContactsLibrary : NSObject {

	NSObject*<OS_dispatch_queue> _replyQueue;
	NSXPCConnection* _connection;

}
+(id)defaultInstance;
+(id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6 options:(unsigned long long)arg7 ;
+(id)os_log;
+(/*^block*/id)frecencyComparator;
+(/*^block*/id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned long long)arg4 ;
+(/*^block*/id)rankedFrecencyComparatorWithPreferredSources:(id)arg1 ;
+(id)groupMemberWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 ;
+(id)_recentEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 weight:(id)arg4 metadata:(id)arg5 options:(unsigned long long)arg6 ;
+(id)apiLogDescriptionOfEvent:(id)arg1 ;
+(id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 ;
+(id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 metadata:(id)arg5 ;
+(id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6 ;
+(id)explicitGroupEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 metadata:(id)arg4 options:(unsigned long long)arg5 ;
+(/*^block*/id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 ;
-(void)recordContactEventsForHeaders:(id)arg1 recentsDomain:(id)arg2 ;
-(void)recordContactEventsForHeaders:(id)arg1 recentsDomain:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)performRecentsSearch:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)removeRecentContacts:(id)arg1 error:(out id*)arg2 ;
-(id)_newConnection;
-(id)_searchRecentsUsingQuery:(id)arg1 ;
-(id)_remoteLibraryWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_searchRecentsUsingQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_searchRecentsUsingQuery:(id)arg1 error:(id*)arg2 ;
-(void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4 userInitiated:(BOOL)arg5 ;
-(void)_recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4 userInitiated:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_removeRecentContactsWithRecentIDs:(id)arg1 syncKeys:(id)arg2 recentsDomain:(id)arg3 error:(out id*)arg4 ;
-(unsigned long long)maxDateEventsPerRecentContact;
-(void)setImplicitGroupThreshold:(unsigned long long)arg1 forDomain:(id)arg2 ;
-(id)_recentContactsWithQuery:(id)arg1 ;
-(void)requestRecentsUsingPredicate:(id)arg1 inDomains:(id)arg2 comparator:(/*^block*/id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)performRecentsSearch:(id)arg1 operationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)copyOrderedRecentsForSearchText:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 kinds:(id)arg4 ;
-(id)copyRecentsForDomain:(id)arg1 ;
-(void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 ;
-(void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 userInitiated:(BOOL)arg4 ;
-(BOOL)removeRecentContactsWithRecentIDs:(id)arg1 recentsDomain:(id)arg2 error:(out id*)arg3 ;
-(void)_removeAllRecentContactsWithCompletion:(/*^block*/id)arg1 ;
-(id)_removeRecentContactsMatchingQuery:(id)arg1 ;
-(int)_daemonProcessID;
@end

