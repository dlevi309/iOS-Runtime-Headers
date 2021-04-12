/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUImageTileViewController.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerTimeObserver.h>

@class PUFilmstripWrapperView, NSString;

@interface PUFilmstripTileViewController : PUImageTileViewController <PUAssetViewModelChangeObserver, PUBrowsingVideoPlayerTimeObserver> {

	BOOL _isExpanded;
	PUFilmstripWrapperView* _wrapperView;
	CGSize _expandedSize;
	CGSize _unexpandedSize;

}

@property (nonatomic,readonly) PUFilmstripWrapperView * wrapperView;              //@synthesize wrapperView=_wrapperView - In the implementation block
@property (assign,nonatomic) BOOL isExpanded;                                     //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,nonatomic) CGSize expandedSize;                                 //@synthesize expandedSize=_expandedSize - In the implementation block
@property (assign,nonatomic) CGSize unexpandedSize;                               //@synthesize unexpandedSize=_unexpandedSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAssetViewModel:(id)arg1 ;
-(void)didChangeVisibleRect;
-(CGSize)unexpandedSize;
-(void)setExpanded:(BOOL)arg1 ;
-(CGSize)expandedSize;
-(void)becomeReusable;
-(BOOL)isExpanded;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_updateFilmStripContents;
-(id)_currentIndicatorInfos;
-(CGSize)targetSizeForProposedTargetSize:(CGSize)arg1 ;
-(BOOL)wantsVisibleRectChanges;
-(PUFilmstripWrapperView *)wrapperView;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)videoPlayer:(id)arg1 desiredSeekTimeDidChange:(SCD_Struct_PH4)arg2 ;
-(void)didChangeAnimating;
-(void)setIsExpanded:(BOOL)arg1 ;
-(void)setExpandedSize:(CGSize)arg1 ;
-(void)setUnexpandedSize:(CGSize)arg1 ;
-(id)loadView;
-(void)videoPlayer:(id)arg1 currentTimeDidChange:(SCD_Struct_PH4)arg2 ;
-(void)_updateFilmstripView;
@end

