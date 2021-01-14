/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UICollectionView, UICollectionViewFlowLayout, MRUControlCenterButton, MRUVisualStylingProvider;

@interface MRUControlCenterView : UIView {

	BOOL _transitioning;
	BOOL _showMoreButton;
	BOOL _showAlertView;
	UIView* _contentView;
	UIView* _alertView;
	UIView* _containerView;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	MRUControlCenterButton* _moreButton;
	MRUVisualStylingProvider* _stylingProvider;
	long long _state;
	double _cornerRadius;
	UIView* _materialView;
	CGSize _forcedContentSize;
	CGRect _transitionFrame;

}

@property (nonatomic,retain) UIView * materialView;                                            //@synthesize materialView=_materialView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * alertView;                                               //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                         //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UICollectionViewFlowLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,readonly) MRUControlCenterButton * moreButton;                            //@synthesize moreButton=_moreButton - In the implementation block
@property (nonatomic,readonly) MRUVisualStylingProvider * stylingProvider;                     //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                        //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,nonatomic) CGRect transitionFrame;                                           //@synthesize transitionFrame=_transitionFrame - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL showMoreButton;                                              //@synthesize showMoreButton=_showMoreButton - In the implementation block
@property (assign,nonatomic) BOOL showAlertView;                                               //@synthesize showAlertView=_showAlertView - In the implementation block
@property (assign,nonatomic) CGSize forcedContentSize;                                         //@synthesize forcedContentSize=_forcedContentSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UICollectionView *)collectionView;
-(void)updateCollectionViewContentInset;
-(BOOL)showMoreButton;
-(double)cornerRadius;
-(void)setTransitioning:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIView *)materialView;
-(UIView *)containerView;
-(void)setFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setState:(long long)arg1 ;
-(BOOL)isTransitioning;
-(long long)state;
-(UICollectionViewFlowLayout *)collectionViewLayout;
-(void)setMaterialView:(UIView *)arg1 ;
-(void)updateVisibility;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)contentView;
-(MRUControlCenterButton *)moreButton;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(UIView *)alertView;
-(void)setAlertView:(UIView *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)setForcedContentSize:(CGSize)arg1 ;
-(void)setShowAlertView:(BOOL)arg1 ;
-(void)setShowMoreButton:(BOOL)arg1 ;
-(void)setTransitionFrame:(CGRect)arg1 ;
-(void)layoutSubviewsHorizontal;
-(void)layoutSubviewsVertical;
-(BOOL)showAlertView;
-(void)layoutSubviewsIPad;
-(CGRect)transitionFrame;
-(CGSize)forcedContentSize;
@end

