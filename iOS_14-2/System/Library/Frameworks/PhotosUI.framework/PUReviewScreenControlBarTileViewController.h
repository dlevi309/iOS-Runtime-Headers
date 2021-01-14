/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@class PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenControlBar, NSString;

@interface PUReviewScreenControlBarTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver> {

	PUBrowsingViewModel* _browsingViewModel;
	PUReviewScreenBarsModel* _barsModel;
	PUReviewScreenControlBar* __controlBar;

}

@property (setter=_setControlBar:,nonatomic,retain) PUReviewScreenControlBar * _controlBar;              //@synthesize _controlBar=__controlBar - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * browsingViewModel;                                    //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (nonatomic,retain) PUReviewScreenBarsModel * barsModel;                                        //@synthesize barsModel=_barsModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)becomeReusable;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(PUReviewScreenBarsModel *)barsModel;
-(void)setBarsModel:(PUReviewScreenBarsModel *)arg1 ;
-(void)_handleEditButtonTapped:(id)arg1 ;
-(void)_handleMarkupButtonTapped:(id)arg1 ;
-(void)_handleFunEffectsButtonTapped:(id)arg1 ;
-(void)_handleSendButtonTapped:(id)arg1 ;
-(void)_updateControls;
-(void)_updateBarLayout;
-(void)_updateVisibilityAnimated:(BOOL)arg1 ;
-(void)_setControlBar:(id)arg1 ;
-(PUBrowsingViewModel *)browsingViewModel;
-(id)_barControlsForModelControls:(id)arg1 transitioning:(BOOL)arg2 ;
-(PUReviewScreenControlBar *)_controlBar;
-(void)setBrowsingViewModel:(PUBrowsingViewModel *)arg1 ;
-(id)loadView;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

