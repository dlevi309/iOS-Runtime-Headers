/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXPhotosGlobalFooterViewDelegate.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>

@protocol PXPhotosGridFooterPresentationDelegate;
@class PXPhotosViewModel, PXGView, PXPhotosLayout, PXPhotosGlobalFooterView, NSTimer, NSString;

@interface PXPhotosGridFooterPresentation : NSObject <PXChangeObserver, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver> {

	PXPhotosViewModel* _viewModel;
	PXGView* _gridView;
	PXPhotosLayout* _layout;
	BOOL _hasAppearedOnce;
	BOOL _hasReachedInitialPosition;
	PXPhotosGlobalFooterView* _reusableFooterView;
	double _lastUserScrollTime;
	BOOL _didAutoReveal;
	NSTimer* _autoRevealMinimumIdleTimer;
	BOOL _shouldAutoReveal;
	BOOL _wantsFooter;
	id<PXPhotosGridFooterPresentationDelegate> _delegate;

}

@property (assign,nonatomic) BOOL shouldAutoReveal;                                                   //@synthesize shouldAutoReveal=_shouldAutoReveal - In the implementation block
@property (assign,nonatomic) BOOL wantsFooter;                                                        //@synthesize wantsFooter=_wantsFooter - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosGridFooterPresentationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldAutoRevealFooterView;
-(void)_updateFooterView;
-(id)init;
-(void)viewDidAppear;
-(BOOL)shouldAutoReveal;
-(id<PXPhotosGridFooterPresentationDelegate>)delegate;
-(void)photosGlobalFooterViewDidChangeHeight:(id)arg1 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg1 ;
-(double)_footerVisibleAmountIncludingSafeAreaInsets:(BOOL)arg1 ;
-(void)scrollViewControllerContentBoundsDidChange:(id)arg1 ;
-(void)setDelegate:(id<PXPhotosGridFooterPresentationDelegate>)arg1 ;
-(void)setWantsFooter:(BOOL)arg1 ;
-(void)_conditionallyAutoRevealFooterView;
-(id)initWithViewModel:(id)arg1 gridView:(id)arg2 layout:(id)arg3 ;
-(BOOL)wantsFooter;
-(void)viewDidScrollToInitialPosition;
-(void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2 ;
-(void)setShouldAutoReveal:(BOOL)arg1 ;
-(void)_conditionallyAutoRevealFooterViewWithLastUserScrollTime:(double)arg1 ;
-(void)_updateWantsFooter;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

