/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSTimer;

@interface _SFBookmarksLockCoordinator : NSObject {

	BOOL _haveBookmarksLock;
	NSTimer* _bookmarkLockTimer;

}

@property (nonatomic,readonly) BOOL hasBookmarksLock; 
+(id)sharedCoordinator;
-(void)_clearBookmarkLockTimer;
-(void)_unlockBookmarksNow;
-(BOOL)hasBookmarksLock;
-(BOOL)lockBookmarks;
-(void)unlockBookmarksSoon;
-(void)unlockBookmarksIfNeeded;
-(void)dealloc;
@end

