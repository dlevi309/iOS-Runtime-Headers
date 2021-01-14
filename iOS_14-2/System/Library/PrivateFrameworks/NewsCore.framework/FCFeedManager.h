/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)feedDescriptorNameForReadingHistory;
+(id)_identifierForFeedName:(id)arg1 ;
+(id)feedDescriptorNameForForYou;
+(id)feedDescriptorNameForReadingList;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(id)initWithCloudContext:(id)arg1 ;
-(id)feedDescriptorForArticlesInSameClusterAsArticleID:(id)arg1 ;
-(id)init;
-(void)setForYouPrefetchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setSavedStoriesCount:(long long)arg1 ;
-(id)feedDescriptorForForYou;
-(void)setFeedDescriptorsByID:(NSMapTable *)arg1 ;
-(void)setFeedDescriptorsLock:(NFMutexLock *)arg1 ;
-(void)prefetchForYouWithHighPriority:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(FCCloudContext *)context;
-(void)notifyWhenForYouPrefetchIsCompleteWithBlock:(/*^block*/id)arg1 ;
-(id)_feedDescriptorWithIdentifier:(id)arg1 forceRecreate:(BOOL)arg2 tag:(id)arg3 ;
-(NFMutexLock *)feedDescriptorsLock;
-(long long)savedStoriesCount;
-(id)feedDescriptorWithIdentifier:(id)arg1 ;
-(id)feedDescriptorForReadingHistory;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(id)feedDescriptorForTag:(id)arg1 ;
-(NSMapTable *)feedDescriptorsByID;
-(id)feedDescriptorForReadingList;
-(NSObject*<OS_dispatch_group>)forYouPrefetchGroup;
-(void)setContext:(FCCloudContext *)arg1 ;
@end

