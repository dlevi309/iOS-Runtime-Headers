/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UIFocusEnvironment, _TVSearchTemplateViewDelegate;
@class UIView, UISearchBar, UICollectionView, _TVSearchBarWrapper, NSArray, UIFocusGuide, UITapGestureRecognizer, UIImageView;

@interface _TVSearchTemplateView : UIView {

	UIView* _keyboard;
	UISearchBar* _searchBar;
	UICollectionView* _collectionView;
	BOOL _isTouchEnabled;
	BOOL _focusHidden;
	BOOL _partialViewEnabled;
	UIView* _fieldAndKeyboardContainer;
	_TVSearchBarWrapper* _searchBarWrapper;
	NSArray* _keyboardConstraints;
	id<UIFocusEnvironment> _preferredFocusEnvironment;
	UIView* _templateContainerView;
	UIFocusGuide* _keyboardProxy;
	NSArray* _keyboardProxyConstraints;
	UITapGestureRecognizer* _menuRecognizer;
	double _fieldOriginY;
	int _keyboardState;
	int _targetKeyboardState;
	struct {
		unsigned hasWillAddKeyboard : 1;
		unsigned hasDidAddKeyboard : 1;
		unsigned hasWillRemoveKeyboard : 1;
		unsigned hasDidRemoveKeyboard : 1;
		unsigned hasDidOffsetOrigin : 1;
	}  _delegateFlags;
	BOOL _spinning;
	id<_TVSearchTemplateViewDelegate> _delegate;
	UIView* _bannerView;
	UIImageView* _bgImageView;
	UIEdgeInsets _collectionMargin;

}

@property (nonatomic,retain,readonly) UICollectionView * collectionView;                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) BOOL isTouchEnabled;                                            //@synthesize isTouchEnabled=_isTouchEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<_TVSearchTemplateViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * bannerView;                                              //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets collectionMargin;                                    //@synthesize collectionMargin=_collectionMargin - In the implementation block
@property (assign,getter=isFocusHidden,nonatomic) BOOL focusHidden;                            //@synthesize focusHidden=_focusHidden - In the implementation block
@property (assign,getter=isPartialViewEnabled,nonatomic) BOOL partialViewEnabled;              //@synthesize partialViewEnabled=_partialViewEnabled - In the implementation block
@property (nonatomic,readonly) UIImageView * bgImageView;                                      //@synthesize bgImageView=_bgImageView - In the implementation block
@property (assign,getter=isSpinning,nonatomic) BOOL spinning;                                  //@synthesize spinning=_spinning - In the implementation block
-(id<_TVSearchTemplateViewDelegate>)delegate;
-(void)setDelegate:(id<_TVSearchTemplateViewDelegate>)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)layoutSubviews;
-(void)updateConstraints;
-(UICollectionView *)collectionView;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setSpinning:(BOOL)arg1 ;
-(UIView *)bannerView;
-(void)setBannerView:(UIView *)arg1 ;
-(BOOL)isSpinning;
-(void)stopEditing;
-(UIImageView *)bgImageView;
-(void)_handleMenuAction:(id)arg1 ;
-(void)_adjustKeyboardContainerPositionForContentOffset:(CGPoint)arg1 ;
-(BOOL)_isSearchFieldVisible;
-(void)_pushKeyboardTowardsStableState:(unsigned long long)arg1 ;
-(void)_transitionKeyboardInAnimated:(BOOL)arg1 ;
-(void)_transitionKeyboardOut;
-(UIEdgeInsets)collectionMargin;
-(void)_addKeyboard;
-(id)initWithCollectionView:(id)arg1 searchBar:(id)arg2 keyboard:(id)arg3 touchEnabled:(BOOL)arg4 ;
-(void)setCollectionMargin:(UIEdgeInsets)arg1 ;
-(void)setFocusHidden:(BOOL)arg1 ;
-(void)setPartialViewEnabled:(BOOL)arg1 ;
-(void)adjustScrollForContentOffset:(CGPoint)arg1 ;
-(BOOL)isTouchEnabled;
-(BOOL)isFocusHidden;
-(BOOL)isPartialViewEnabled;
@end

