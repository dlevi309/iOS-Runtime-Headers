/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSMutableDictionary;

@interface VUIStreamingBookmarkCache : NSObject {

	NSMutableDictionary* _bookmarkCacheStore;

}
+(id)sharedInstance;
-(id)init;
-(void)_activeAccountChangedNotification:(id)arg1 ;
-(void)dealloc;
-(BOOL)resumeTimeAndTimestampByCanonical:(id)arg1 serverResumeTime:(id)arg2 serverBookmarkTimestamp:(id)arg3 mostRecentResumeTime:(id*)arg4 mostRecentBookmarkTimestamp:(id*)arg5 ;
-(void)resumeTimeInfoByCanonical:(id)arg1 outAbsoluteResumeTime:(id*)arg2 outAbsoluteTimestamp:(id*)arg3 outMainContentRelativeResumeTime:(id*)arg4 outMainContentRelativeTimestamp:(id*)arg5 ;
-(void)addBookmark:(id)arg1 absoluteResumeTime:(id)arg2 absoluteBookmarkTimestamp:(id)arg3 relativeResumeTime:(id)arg4 relativeBookmarkTimestamp:(id)arg5 ;
-(void)removeBookmark:(id)arg1 ;
@end

