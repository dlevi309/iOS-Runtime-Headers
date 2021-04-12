/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>

@protocol OS_dispatch_queue, FCOperationThrottler;
@class NSURL, NSObject, NSManagedObjectContext, NSPersistentStore, NSEntityDescription, NSMutableDictionary, NSMutableSet, NSString;

@interface FCFeedDatabase : NSObject <FCOperationThrottlerDelegate> {

	unsigned short _version;
	int _nextFeedLookupID;
	NSURL* _parentDirectoryURL;
	long long _usage;
	long long _endpoint;
	NSObject*<OS_dispatch_queue> _initQueue;
	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStore* _persistentStore;
	NSEntityDescription* _feedEntity;
	NSEntityDescription* _feedSegmentEntity;
	NSEntityDescription* _feedItemIndexEntity;
	NSEntityDescription* _feedItemEntity;
	NSMutableDictionary* _cachedFeedsByID;
	NSMutableSet* _modifiedFeedIDs;
	id<FCOperationThrottler> _saveThrottler;

}

@property (assign,nonatomic) long long usage;                                            //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) unsigned short version;                                     //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> initQueue;                     //@synthesize initQueue=_initQueue - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSPersistentStore * persistentStore;                        //@synthesize persistentStore=_persistentStore - In the implementation block
@property (nonatomic,retain) NSEntityDescription * feedEntity;                           //@synthesize feedEntity=_feedEntity - In the implementation block
@property (nonatomic,retain) NSEntityDescription * feedSegmentEntity;                    //@synthesize feedSegmentEntity=_feedSegmentEntity - In the implementation block
@property (nonatomic,retain) NSEntityDescription * feedItemIndexEntity;                  //@synthesize feedItemIndexEntity=_feedItemIndexEntity - In the implementation block
@property (nonatomic,retain) NSEntityDescription * feedItemEntity;                       //@synthesize feedItemEntity=_feedItemEntity - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedFeedsByID;                      //@synthesize cachedFeedsByID=_cachedFeedsByID - In the implementation block
@property (assign,nonatomic) int nextFeedLookupID;                                       //@synthesize nextFeedLookupID=_nextFeedLookupID - In the implementation block
@property (nonatomic,retain) NSMutableSet * modifiedFeedIDs;                             //@synthesize modifiedFeedIDs=_modifiedFeedIDs - In the implementation block
@property (nonatomic,retain) id<FCOperationThrottler> saveThrottler;                     //@synthesize saveThrottler=_saveThrottler - In the implementation block
@property (nonatomic,copy,readonly) NSURL * parentDirectoryURL;                          //@synthesize parentDirectoryURL=_parentDirectoryURL - In the implementation block
@property (nonatomic,readonly) long long endpoint;                                       //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)temporaryFeedDatabaseWithEndpoint:(long long)arg1 ;
+(unsigned short)currentFeedDatabaseVersion;
-(long long)endpoint;
-(unsigned short)version;
-(void)setVersion:(unsigned short)arg1 ;
-(void)setUsage:(long long)arg1 ;
-(long long)usage;
-(NSManagedObjectContext *)managedObjectContext;
-(void)teardown;
-(NSPersistentStore *)persistentStore;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)setPersistentStore:(NSPersistentStore *)arg1 ;
-(void)operationThrottlerPerformOperation:(id)arg1 ;
-(id<FCOperationThrottler>)saveThrottler;
-(void)setSaveThrottler:(id<FCOperationThrottler>)arg1 ;
-(id)initWithParentDirectoryURL:(id)arg1 usage:(long long)arg2 endpoint:(long long)arg3 ;
-(void)_performWithMOCAndWait:(/*^block*/id)arg1 ;
-(id)_feedsForLookups:(id)arg1 ;
-(id)_shortCircuitLookup:(id)arg1 withFeed:(id)arg2 ;
-(id)_feedItemsForLookups:(id)arg1 withFeedsByID:(id)arg2 ;
-(id)_serviceLookup:(id)arg1 withFeed:(id)arg2 feedItems:(id)arg3 ;
-(id)_feedItemsForLookups:(id)arg1 withFeedsByID:(id)arg2 boundedByCount:(unsigned long long)arg3 ;
-(NSEntityDescription *)feedSegmentEntity;
-(NSEntityDescription *)feedItemEntity;
-(NSEntityDescription *)feedItemIndexEntity;
-(NSMutableSet *)modifiedFeedIDs;
-(void)d_sanityCheckFeed:(id)arg1 ;
-(int)nextFeedLookupID;
-(NSMutableDictionary *)cachedFeedsByID;
-(void)_initMOC;
-(NSEntityDescription *)feedEntity;
-(void)setNextFeedLookupID:(int)arg1 ;
-(id)performDatabaseLookups:(id)arg1 ;
-(id)performDatabaseLookups:(id)arg1 boundedByCount:(unsigned long long)arg2 ;
-(void)saveFeedItems:(id)arg1 forFeedID:(id)arg2 insertionToken:(id)arg3 requestDate:(id)arg4 followingCKCursor:(id)arg5 reachedToOrder:(BOOL)arg6 extent:(unsigned long long)arg7 reachedEnd:(BOOL)arg8 ;
-(NSURL *)parentDirectoryURL;
-(NSObject*<OS_dispatch_queue>)initQueue;
-(void)setInitQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFeedEntity:(NSEntityDescription *)arg1 ;
-(void)setFeedSegmentEntity:(NSEntityDescription *)arg1 ;
-(void)setFeedItemIndexEntity:(NSEntityDescription *)arg1 ;
-(void)setFeedItemEntity:(NSEntityDescription *)arg1 ;
-(void)setCachedFeedsByID:(NSMutableDictionary *)arg1 ;
-(void)setModifiedFeedIDs:(NSMutableSet *)arg1 ;
@end

