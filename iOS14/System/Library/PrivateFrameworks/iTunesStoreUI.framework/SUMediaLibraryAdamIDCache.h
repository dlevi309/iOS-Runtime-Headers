/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface SUMediaLibraryAdamIDCache : NSObject {

	NSMutableSet* _adamIDs;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _isPopulated;

}
+(id)sharedCache;
-(void)_populateCache;
-(id)init;
-(void)dealloc;
-(void)getContainsAdamID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getIntersectionWithSet:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_libraryChangedNotification:(id)arg1 ;
-(void)populateCache;
@end

