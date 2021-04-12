/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCFeedPersonalizing, OS_dispatch_group;
@class FCCloudContext, NSMapTable, NFMutexLock, NSObject;

@interface FCFeedManager : NSObject {

	id<FCFeedPersonalizing> _feedPersonalizer;
	long long _savedStoriesCount;
	FCCloudContext* _context;
	NSMapTable* _feedDescriptorsByID;
	NFMutexLock* _feedDescriptorsLock;
	NSObject*<OS_dispatch_group> _forYouPrefetchGroup;

}

@property (nonatomic,retain) FCCloudContext * context;                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSMapTable * feedDescriptorsByID;                              //@synthesize feedDescriptorsByID=_feedDescriptorsByID - In the implementation block
@property (nonatomic,retain) NFMutexLock * feedDescriptorsLock;                             //@synthesize feedDescriptorsLock=_feedDescriptorsLock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> forYouPrefetchGroup;              //@synthesize forYouPrefetchGroup=_forYouPrefetchGroup - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;                      //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (assign,nonatomic) long long savedStoriesCount;                                   //@synthesize savedStoriesCount=_savedStoriesCount - In the implementation block
+(id)_identifierForFeedName:(id)arg1 ;
+(id)feedDescriptorNameForForYou;
+(id)feedDescriptorNameForReadingHistory;
+(id)feedDescriptorNameForReadingList;
-(id)init;
-(FCCloudContext *)context;
-(void)setContext:(FCCloudContext *)arg1 ;
-(id)feedDescriptorForTag:(id)arg1 ;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(id)initWithCloudContext:(id)arg1 ;
-(long long)savedStoriesCount;
-(void)setSavedStoriesCount:(long long)arg1 ;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(id)feedDescriptorForForYou;
-(NSObject*<OS_dispatch_group>)forYouPrefetchGroup;
-(void)prefetchForYouWithHighPriority:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyWhenForYouPrefetchIsCompleteWithBlock:(/*^block*/id)arg1 ;
-(NSMapTable *)feedDescriptorsByID;
-(void)setFeedDescriptorsByID:(NSMapTable *)arg1 ;
-(NFMutexLock *)feedDescriptorsLock;
-(void)setFeedDescriptorsLock:(NFMutexLock *)arg1 ;
-(void)setForYouPrefetchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id)feedDescriptorWithIdentifier:(id)arg1 ;
-(id)_feedDescriptorWithIdentifier:(id)arg1 forceRecreate:(BOOL)arg2 tag:(id)arg3 ;
-(id)feedDescriptorForReadingHistory;
-(id)feedDescriptorForReadingList;
-(id)feedDescriptorForArticlesInSameClusterAsArticleID:(id)arg1 ;
@end

