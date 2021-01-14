/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@class PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenTopBar, NSString;

@interface PUReviewScreenTopBarTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver> {

	PUBrowsingViewModel* _browsingViewModel;
	PUReviewScreenBarsModel* _barsModel;
	PUReviewScreenTopBar* __topBar;

}

@property (setter=_setTopBar:,nonatomic,retain) PUReviewScreenTopBar * _topBar;              //@synthesize _topBar=__topBar - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * browsingViewModel;                        //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (nonatomic,retain) PUReviewScreenBarsModel * barsModel;                            //@synthesize barsModel=_barsModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PUReviewScreenTopBar *)_topBar;
-(void)becomeReusable;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(PUReviewScreenBarsModel *)barsModel;
-(void)setBarsModel:(PUReviewScreenBarsModel *)arg1 ;
-(void)_setTopBar:(id)arg1 ;
-(void)_updateControls;
-(void)_updateBarLayout;
-(void)_updateVisibilityAnimated:(BOOL)arg1 ;
-(void)_handleDoneButtonTapped:(id)arg1 ;
-(void)_handleRetakeButtonTapped:(id)arg1 ;
-(PUBrowsingViewModel *)browsingViewModel;
-(void)setBrowsingViewModel:(PUBrowsingViewModel *)arg1 ;
-(id)loadView;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

