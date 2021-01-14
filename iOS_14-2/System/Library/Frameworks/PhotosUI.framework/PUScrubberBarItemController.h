/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class PUScrubberView, UIBarButtonItem, PUBrowsingSession;

@interface PUScrubberBarItemController : NSObject {

	PUScrubberView* _scrubberView;
	UIBarButtonItem* _scrubberBarButtonItem;
	PUBrowsingSession* _browsingSession;

}

@property (nonatomic,retain) PUBrowsingSession * browsingSession;                    //@synthesize browsingSession=_browsingSession - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * scrubberBarButtonItem;              //@synthesize scrubberBarButtonItem=_scrubberBarButtonItem - In the implementation block
-(PUBrowsingSession *)browsingSession;
-(UIBarButtonItem *)scrubberBarButtonItem;
-(void)_invalidateScrubberBarButtonItem;
-(void)_updateScrubberBarButtonItemIfNeeded;
-(void)setBrowsingSession:(PUBrowsingSession *)arg1 ;
@end

