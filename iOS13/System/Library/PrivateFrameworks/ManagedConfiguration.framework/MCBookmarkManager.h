/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)memberQueueRereadBookmarks;
-(void)memberQueueSetUserBookmarks:(id)arg1 ;
-(NSArray *)memberQueueCurrentUserBookmarks;
-(void)memberQueueSetStashedUserBookmarksByLabel:(id)arg1 ;
-(void)memberQueueStashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2 ;
-(void)setUserBookmarks:(NSArray *)arg1 ;
-(NSArray *)userBookmarks;
-(void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2 ;
-(void)unstashUserBookmarksFromLabel:(id)arg1 ;
-(void)setMemberQueueCurrentUserBookmarks:(NSArray *)arg1 ;
-(NSDictionary *)memberQueueStashedBookmarksByLabel;
-(void)setMemberQueueStashedBookmarksByLabel:(NSDictionary *)arg1 ;
-(int)notificationToken;
-(void)setNotificationToken:(int)arg1 ;
@end

