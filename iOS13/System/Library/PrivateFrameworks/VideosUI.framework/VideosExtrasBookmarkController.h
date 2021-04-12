/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol OS_dispatch_queue;
@class NSObject, SBCPlaybackPositionDomain, SBCPlaybackPositionValueService, NSMutableDictionary;

@interface VideosExtrasBookmarkController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	SBCPlaybackPositionDomain* _domain;
	SBCPlaybackPositionValueService* _extrasService;
	NSMutableDictionary* _entities;
	NSMutableDictionary* _updateTimeForEntities;
	double _minimumBookmarkUpdateInterval;

}

@property (assign,nonatomic) double minimumBookmarkUpdateInterval;              //@synthesize minimumBookmarkUpdateInterval=_minimumBookmarkUpdateInterval - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)pullBookmarksForIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_loadAllBookmarksWithRemainingIdentifiers:(id)arg1 bookmarkTimes:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)pushBookmarkForIdentifier:(id)arg1 bookmarkTime:(double)arg2 playedToNominalLength:(BOOL)arg3 ;
-(void)pullBookmarksForAssets:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)pushBookmarkForAsset:(id)arg1 bookmarkTime:(double)arg2 playedToNominalLength:(BOOL)arg3 ;
-(double)minimumBookmarkUpdateInterval;
-(void)setMinimumBookmarkUpdateInterval:(double)arg1 ;
@end

