/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/CKSearchResultSupplementryCell.h>

@protocol CKSearchResultsTitleHeaderCellDelegate;
@class UIButton, UILabel, CALayer, UIVisualEffectView, NSString;

@interface CKSearchResultsTitleHeaderCell : UICollectionReusableView <CKSearchResultSupplementryCell> {

	BOOL _useMacSidebarVisualEffectView;
	id<CKSearchResultsTitleHeaderCellDelegate> _delegate;
	unsigned long long _sectionIndex;
	UIButton* _showAllButton;
	UILabel* _sectionTitle;
	CALayer* _topHairline;
	double _titleTopPadding;
	double _titleBottomPadding;
	UIVisualEffectView* _macBackgroundVisualEffectView;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) UILabel * sectionTitle;                                                  //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,retain) UIButton * showAllButton;                                                //@synthesize showAllButton=_showAllButton - In the implementation block
@property (nonatomic,retain) CALayer * topHairline;                                                   //@synthesize topHairline=_topHairline - In the implementation block
@property (assign,nonatomic) double titleTopPadding;                                                  //@synthesize titleTopPadding=_titleTopPadding - In the implementation block
@property (assign,nonatomic) double titleBottomPadding;                                               //@synthesize titleBottomPadding=_titleBottomPadding - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * macBackgroundVisualEffectView;                      //@synthesize macBackgroundVisualEffectView=_macBackgroundVisualEffectView - In the implementation block
@property (assign,nonatomic,__weak) id<CKSearchResultsTitleHeaderCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndex;                                         //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) BOOL useMacSidebarVisualEffectView;                                      //@synthesize useMacSidebarVisualEffectView=_useMacSidebarVisualEffectView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supplementaryViewType;
+(double)desiredZPosition;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)sectionTitle;
-(void)setSectionTitle:(UILabel *)arg1 ;
-(id<CKSearchResultsTitleHeaderCellDelegate>)delegate;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(void)prepareForReuse;
-(UIButton *)showAllButton;
-(void)setShowAllButton:(UIButton *)arg1 ;
-(void)setMacBackgroundVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setTitleTopPadding:(double)arg1 ;
-(void)setTitleBottomPadding:(double)arg1 ;
-(void)_showAllButtonTapped:(id)arg1 ;
-(void)setTopHairline:(CALayer *)arg1 ;
-(double)titleTopPadding;
-(double)titleBottomPadding;
-(UIVisualEffectView *)macBackgroundVisualEffectView;
-(void)setUseMacSidebarVisualEffectView:(BOOL)arg1 ;
-(BOOL)useMacSidebarVisualEffectView;
-(void)setDelegate:(id<CKSearchResultsTitleHeaderCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(CALayer *)topHairline;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
@end

