/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/


@protocol PDSEntryStoreDelegate, PDSCDCache;
@interface PDSEntryStore : NSObject {

	id<PDSEntryStoreDelegate> _delegate;
	id<PDSCDCache> _cache;

}

@property (nonatomic,retain) id<PDSCDCache> cache;                                   //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic,__weak) id<PDSEntryStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)updateEntryState:(unsigned char)arg1 forUser:(id)arg2 clientID:(id)arg3 withError:(id*)arg4 ;
-(BOOL)updateAllEntriesWithState:(unsigned char)arg1 toState:(unsigned char)arg2 withError:(id*)arg3 ;
-(BOOL)deleteEntry:(id)arg1 withError:(id*)arg2 ;
-(id<PDSCDCache>)cache;
-(id<PDSEntryStoreDelegate>)delegate;
-(void)setCache:(id<PDSCDCache>)arg1 ;
-(id)entriesForUser:(id)arg1 withClientID:(id)arg2 ;
-(BOOL)storeEntry:(id)arg1 withError:(id*)arg2 ;
-(id)entries;
-(void)setDelegate:(id<PDSEntryStoreDelegate>)arg1 ;
-(id)usersWithClientID:(id)arg1 ;
-(id)entriesForUser:(id)arg1 ;
-(id)users;
-(BOOL)hasPendingEntries;
-(BOOL)hasActiveEntries;
-(id)entriesWithClientID:(id)arg1 ;
-(BOOL)storeEntries:(id)arg1 deleteEntries:(id)arg2 withError:(id*)arg3 ;
-(BOOL)_permitTransitionFromState:(unsigned char)arg1 toState:(unsigned char)arg2 ;
-(id)activeUsers;
-(id)activeUsersWithClientID:(id)arg1 ;
-(id)initWithCache:(id)arg1 ;
@end

