/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXUIViewControllerTransitionEndPoint.h>

@protocol PXMemoryViewPresentationDelegate;
@class PXTitleSubtitleUILabel, UIView, PXMemoryViewModel, PXDisplayAssetUIView, NSString;

@interface PXMemoryView : UIView <PXChangeObserver, PXUIViewControllerTransitionEndPoint> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	PXTitleSubtitleUILabel* _titleSubtitleLabel;
	UIView* _overlayView;
	UIView* _highlightView;
	PXMemoryViewModel* _viewModel;
	id<PXMemoryViewPresentationDelegate> _presentationDelegate;
	PXDisplayAssetUIView* _displayAssetView;

}

@property (nonatomic,readonly) PXTitleSubtitleUILabel * titleSubtitleLabel;                                 //@synthesize titleSubtitleLabel=_titleSubtitleLabel - In the implementation block
@property (nonatomic,retain) PXDisplayAssetUIView * displayAssetView;                                       //@synthesize displayAssetView=_displayAssetView - In the implementation block
@property (nonatomic,readonly) UIView * overlayView;                                                        //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) UIView * highlightView;                                                      //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) PXMemoryViewModel * viewModel;                                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<PXMemoryViewPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
-(id)init;
-(UIView *)overlayView;
-(UIView *)highlightView;
-(void)_didTap:(id)arg1 ;
-(PXMemoryViewModel *)viewModel;
-(void)_updateIfNeeded;
-(id<PXMemoryViewPresentationDelegate>)presentationDelegate;
-(void)layoutSubviews;
-(void)setViewModel:(PXMemoryViewModel *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateSpecIfNeeded;
-(void)setPresentationDelegate:(id<PXMemoryViewPresentationDelegate>)arg1 ;
-(PXTitleSubtitleUILabel *)titleSubtitleLabel;
-(void)setDisplayAssetView:(PXDisplayAssetUIView *)arg1 ;
-(void)_updateTitleSubtitleIfNeeded;
-(void)_updateKeyAssetIfNeeded;
-(void)_updateHighlightedIfNeeded;
-(CGRect)_performLayoutInRect:(CGRect)arg1 applyToSubviews:(BOOL)arg2 ;
-(PXDisplayAssetUIView *)displayAssetView;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

