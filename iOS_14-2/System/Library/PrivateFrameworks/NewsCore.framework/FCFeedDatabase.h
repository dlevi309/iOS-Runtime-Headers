/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSPersistentStore *)persistentStore;
-(id<FCOperationThrottler>)saveThrottler;
-(void)prewarm;
-(NSManagedObjectContext *)managedObjectContext;
-(id)_shortCircuitLookup:(id)arg1 withFeed:(id)arg2 ;
-(long long)usage;
-(id)performDatabaseLookups:(id)arg1 boundedByCount:(unsigned long long)arg2 ;
-(void)setSaveThrottler:(id<FCOperationThrottler>)arg1 ;
-(void)_initMOC;
-(void)setFeedItemIndexEntity:(NSEntityDescription *)arg1 ;
-(void)setFeedEntity:(NSEntityDescription *)arg1 ;
-(void)saveFeedItems:(id)arg1 forFeedID:(id)arg2 insertionToken:(id)arg3 requestDate:(id)arg4 followingCKCursor:(id)arg5 reachedToOrder:(BOOL)arg6 extent:(unsigned long long)arg7 reachedEnd:(BOOL)arg8 ;
-(id)_feedsForLookups:(id)arg1 ;
-(NSEntityDescription *)feedSegmentEntity;
-(id)performDatabaseLookups:(id)arg1 ;
-(long long)endpoint;
-(NSEntityDescription *)feedItemIndexEntity;
-(id)_feedItemsForLookups:(id)arg1 withFeedsByID:(id)arg2 boundedByCount:(unsigned long long)arg3 ;
-(void)setFeedSegmentEntity:(NSEntityDescription *)arg1 ;
-(void)setModifiedFeedIDs:(NSMutableSet *)arg1 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)setInitQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFeedItemEntity:(NSEntityDescription *)arg1 ;
-(void)_performWithMOCAndWait:(/*^block*/id)arg1 ;
-(NSMutableSet *)modifiedFeedIDs;
-(id)_serviceLookup:(id)arg1 withFeed:(id)arg2 feedItems:(id)arg3 ;
-(void)teardown;
-(NSObject*<OS_dispatch_queue>)initQueue;
-(void)setUsage:(long long)arg1 ;
-(void)setVersion:(unsigned short)arg1 ;
-(NSMutableDictionary *)cachedFeedsByID;
-(void)setPersistentStore:(NSPersistentStore *)arg1 ;
-(void)_synchronizedInitMOC;
-(void)operationThrottlerPerformOperation:(id)arg1 ;
-(id)initWithParentDirectoryURL:(id)arg1 usage:(long long)arg2 endpoint:(long long)arg3 ;
-(void)setNextFeedLookupID:(int)arg1 ;
-(void)d_sanityCheckFeed:(id)arg1 ;
-(void)setCachedFeedsByID:(NSMutableDictionary *)arg1 ;
-(int)nextFeedLookupID;
-(unsigned short)version;
-(NSEntityDescription *)feedItemEntity;
-(NSURL *)parentDirectoryURL;
-(id)_feedItemsForLookups:(id)arg1 withFeedsByID:(id)arg2 ;
-(NSEntityDescription *)feedEntity;
@end

