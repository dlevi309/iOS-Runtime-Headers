/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@class PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenScrubberBar, NSString;

@interface PUReviewScreenScrubberBarTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver> {

	PUBrowsingViewModel* _browsingViewModel;
	PUReviewScreenBarsModel* _barsModel;
	PUReviewScreenScrubberBar* __scrubberBar;

}

@property (setter=_setScrubberBar:,nonatomic,retain) PUReviewScreenScrubberBar * _scrubberBar;              //@synthesize _scrubberBar=__scrubberBar - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * browsingViewModel;                                       //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (nonatomic,retain) PUReviewScreenBarsModel * barsModel;                                           //@synthesize barsModel=_barsModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)becomeReusable;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(PUReviewScreenBarsModel *)barsModel;
-(void)setBarsModel:(PUReviewScreenBarsModel *)arg1 ;
-(void)_updateVisibilityAnimated:(BOOL)arg1 ;
-(PUReviewScreenScrubberBar *)_scrubberBar;
-(void)_setScrubberBar:(id)arg1 ;
-(PUBrowsingViewModel *)browsingViewModel;
-(void)setBrowsingViewModel:(PUBrowsingViewModel *)arg1 ;
-(void)_updateViews;
-(id)loadView;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

