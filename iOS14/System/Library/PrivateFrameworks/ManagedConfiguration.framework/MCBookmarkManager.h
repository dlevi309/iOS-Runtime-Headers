/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSDictionary;

@interface MCBookmarkManager : NSObject {

	int _notificationToken;
	NSObject*<OS_dispatch_queue> _memberQueue;
	NSArray* _memberQueueCurrentUserBookmarks;
	NSDictionary* _memberQueueStashedBookmarksByLabel;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                       //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSArray * memberQueueCurrentUserBookmarks;                      //@synthesize memberQueueCurrentUserBookmarks=_memberQueueCurrentUserBookmarks - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueStashedBookmarksByLabel;              //@synthesize memberQueueStashedBookmarksByLabel=_memberQueueStashedBookmarksByLabel - In the implementation block
@property (assign,nonatomic) int notificationToken;                                          //@synthesize notificationToken=_notificationToken - In the implementation block
@property (nonatomic,copy) NSArray * userBookmarks; 
+(id)sharedManager;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)memberQueueRereadBookmarks;
-(void)memberQueueSetUserBookmarks:(id)arg1 ;
-(NSArray *)memberQueueCurrentUserBookmarks;
-(void)memberQueueSetStashedUserBookmarksByLabel:(id)arg1 ;
-(void)setNotificationToken:(int)arg1 ;
-(void)memberQueueStashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2 ;
-(void)unstashUserBookmarksFromLabel:(id)arg1 ;
-(void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2 ;
-(void)setMemberQueueCurrentUserBookmarks:(NSArray *)arg1 ;
-(NSDictionary *)memberQueueStashedBookmarksByLabel;
-(void)setMemberQueueStashedBookmarksByLabel:(NSDictionary *)arg1 ;
-(void)setUserBookmarks:(NSArray *)arg1 ;
-(NSArray *)userBookmarks;
-(int)notificationToken;
@end

