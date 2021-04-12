/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/CKSearchResultSupplementryCell.h>

@protocol CKSearchResultsTitleHeaderCellDelegate;
@class UIButton, UILabel, CALayer, NSString;

@interface CKSearchResultsTitleHeaderCell : UICollectionViewCell <CKSearchResultSupplementryCell> {

	id<CKSearchResultsTitleHeaderCellDelegate> _delegate;
	unsigned long long _sectionIndex;
	UIButton* _showAllButton;
	UILabel* _sectionTitle;
	CALayer* _topHairline;
	double _titleTopPadding;
	double _titleBottomPadding;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) UILabel * sectionTitle;                                                  //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,retain) UIButton * showAllButton;                                                //@synthesize showAllButton=_showAllButton - In the implementation block
@property (nonatomic,retain) CALayer * topHairline;                                                   //@synthesize topHairline=_topHairline - In the implementation block
@property (assign,nonatomic) double titleTopPadding;                                                  //@synthesize titleTopPadding=_titleTopPadding - In the implementation block
@property (assign,nonatomic) double titleBottomPadding;                                               //@synthesize titleBottomPadding=_titleBottomPadding - In the implementation block
@property (assign,nonatomic,__weak) id<CKSearchResultsTitleHeaderCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndex;                                         //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
+(id)reuseIdentifier;
+(id)supplementaryViewType;
+(double)desiredZPosition;
-(id<CKSearchResultsTitleHeaderCellDelegate>)delegate;
-(void)setDelegate:(id<CKSearchResultsTitleHeaderCellDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)prepareForReuse;
-(UILabel *)sectionTitle;
-(void)setSectionTitle:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(UIButton *)showAllButton;
-(void)setShowAllButton:(UIButton *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)setTopHairline:(CALayer *)arg1 ;
-(CALayer *)topHairline;
-(void)setTitleTopPadding:(double)arg1 ;
-(void)setTitleBottomPadding:(double)arg1 ;
-(void)_showAllButtonTapped:(id)arg1 ;
-(double)titleTopPadding;
-(double)titleBottomPadding;
@end

