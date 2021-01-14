/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>

@class UIScrollView, IMScheduledUpdater;

@interface CKScrollViewController : CKViewController {

	BOOL _topInsetIncludesPalette;
	BOOL _keyboardVisible;
	BOOL _enableContentPinning;
	BOOL _keyboardInteractionCancelled;
	UIScrollView* _scrollView;
	double _topInsetPadding;
	double _bottomInsetPadding;
	double _minimumBottomInset;
	double _contentPinningThreshold;
	IMScheduledUpdater* _updater;
	/*^block*/id _overrideScrollBlock;
	CGSize _contentSizeForPinning;
	CGRect _keyboardScreenFrame;

}

@property (assign,getter=isKeyboardVisible,nonatomic) BOOL keyboardVisible;                                                          //@synthesize keyboardVisible=_keyboardVisible - In the implementation block
@property (assign,nonatomic) CGRect keyboardScreenFrame;                                                                             //@synthesize keyboardScreenFrame=_keyboardScreenFrame - In the implementation block
@property (assign,nonatomic) BOOL keyboardInteractionCancelled;                                                                      //@synthesize keyboardInteractionCancelled=_keyboardInteractionCancelled - In the implementation block
@property (nonatomic,retain) IMScheduledUpdater * updater;                                                                           //@synthesize updater=_updater - In the implementation block
@property (nonatomic,copy) id overrideScrollBlock;                                                                                   //@synthesize overrideScrollBlock=_overrideScrollBlock - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) BOOL topInsetIncludesPalette;                                                                         //@synthesize topInsetIncludesPalette=_topInsetIncludesPalette - In the implementation block
@property (nonatomic,readonly) double topInsetPadding;                                                                               //@synthesize topInsetPadding=_topInsetPadding - In the implementation block
@property (nonatomic,readonly) double bottomInsetPadding;                                                                            //@synthesize bottomInsetPadding=_bottomInsetPadding - In the implementation block
@property (nonatomic,readonly) double minimumBottomInset;                                                                            //@synthesize minimumBottomInset=_minimumBottomInset - In the implementation block
@property (nonatomic,readonly) CGRect keyboardFrame; 
@property (nonatomic,readonly) CGRect keyboardFrameInViewCoordinates; 
@property (getter=isKeyboardUndocked,nonatomic,readonly) BOOL keyboardUndocked; 
@property (getter=isKeyboardOnscreenWithoutAccessoryView,nonatomic,readonly) BOOL keyboardOnscreenWithoutAccessoryView; 
@property (assign,nonatomic) BOOL enableContentPinning;                                                                              //@synthesize enableContentPinning=_enableContentPinning - In the implementation block
@property (assign,nonatomic) double contentPinningThreshold;                                                                         //@synthesize contentPinningThreshold=_contentPinningThreshold - In the implementation block
@property (nonatomic,readonly) CGSize contentSizeForPinning;                                                                         //@synthesize contentSizeForPinning=_contentSizeForPinning - In the implementation block
-(BOOL)isKeyboardVisible;
-(id)init;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(void)_changedStatusBarFrame:(id)arg1 ;
-(void)_entryViewWillRotate:(id)arg1 ;
-(void)setKeyboardInteractionCancelled:(BOOL)arg1 ;
-(void)setKeyboardScreenFrame:(CGRect)arg1 ;
-(BOOL)keyboardInteractionCancelled;
-(double)_visibleKeyboardHeight;
-(CGRect)keyboardScreenFrame;
-(void)_updateScrollGeometryWithDuration:(double)arg1 ;
-(void)keyboardVisibilityWillChange;
-(BOOL)topInsetIncludesPalette;
-(double)bottomInsetPadding;
-(double)_bottomRotatingFooterHeight;
-(double)visibleHeightAboveKeyboard;
-(BOOL)isKeyboardUndocked;
-(BOOL)isHoldingScrollGeometryUpdates;
-(BOOL)isKeyboardOnscreenWithoutAccessoryView;
-(void)endHoldingScrollGeometryUpdatesForAllKeys;
-(BOOL)enableContentPinning;
-(double)contentPinningThreshold;
-(void)updateScrollGeometry;
-(UIEdgeInsets)navigationBarInsets;
-(CGRect)keyboardFrame;
-(void)keyboardWillShowOrHide:(id)arg1 ;
-(double)topInsetPadding;
-(void)keyboardDidShowOrHide:(id)arg1 ;
-(double)accessoryViewHeight;
-(void)primeWithKeyboardFrame:(CGRect)arg1 ;
-(void)setUpdater:(IMScheduledUpdater *)arg1 ;
-(UIEdgeInsets)bannerInsets;
-(IMScheduledUpdater *)updater;
-(double)minimumBottomInset;
-(UIEdgeInsets)macToolbarInsets;
-(id)overrideScrollBlock;
-(void)contentInsetWillChange:(UIEdgeInsets)arg1 animated:(BOOL)arg2 duration:(double)arg3 ;
-(void)contentInsetDidChange;
-(void)keyboardWillHideViaGesture;
-(void)setOverrideScrollBlock:(id)arg1 ;
-(void)beginHoldingScrollGeometryUpdatesForKey:(id)arg1 ;
-(void)endHoldingScrollGeometryUpdatesForKey:(id)arg1 ;
-(CGRect)keyboardFrameInViewCoordinates;
-(double)bottomInsetWithoutAccessoryView;
-(void)setEnableContentPinning:(BOOL)arg1 ;
-(void)setContentPinningThreshold:(double)arg1 ;
-(CGSize)contentSizeForPinning;
-(UIEdgeInsets)navigationBarInsetsWithoutPalette;
-(UIScrollView *)scrollView;
-(void)setKeyboardVisible:(BOOL)arg1 ;
-(void)dealloc;
@end

