/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class GKLabel, NSLayoutConstraint, UICollectionView, UIActivityIndicatorView;

@interface GKShowMoreView : UICollectionReusableView {

	BOOL _loading;
	BOOL _showShowAll;
	SEL _showMoreAction;
	double _textAlignmentOffset;
	GKLabel* _label;
	long long _sectionIndex;
	NSLayoutConstraint* _horizontalContraint;
	NSLayoutConstraint* _verticalContraint;
	long long _numberToShow;
	UICollectionView* _collectionView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) GKLabel * label;                                       //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long sectionIndex;                                //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * horizontalContraint;              //@synthesize horizontalContraint=_horizontalContraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalContraint;                //@synthesize verticalContraint=_verticalContraint - In the implementation block
@property (assign,nonatomic) BOOL showShowAll;                                      //@synthesize showShowAll=_showShowAll - In the implementation block
@property (assign,nonatomic) long long numberToShow;                                //@synthesize numberToShow=_numberToShow - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                     //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) SEL showMoreAction;                                    //@synthesize showMoreAction=_showMoreAction - In the implementation block
@property (assign,nonatomic) BOOL loading;                                          //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) double textAlignmentOffset;                            //@synthesize textAlignmentOffset=_textAlignmentOffset - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(UICollectionView *)collectionView;
-(long long)sectionIndex;
-(void)setSectionIndex:(long long)arg1 ;
-(void)prepareForReuse;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)updateLabel;
-(void)updateConstraints;
-(BOOL)loading;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setTextAlignmentOffset:(double)arg1 ;
-(id)baseTextStyle;
-(void)setHorizontalContraint:(NSLayoutConstraint *)arg1 ;
-(SEL)showMoreAction;
-(void)setShowMoreAction:(SEL)arg1 ;
-(double)textAlignmentOffset;
-(NSLayoutConstraint *)horizontalContraint;
-(NSLayoutConstraint *)verticalContraint;
-(void)setVerticalContraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)showShowAll;
-(void)setShowShowAll:(BOOL)arg1 ;
-(long long)numberToShow;
-(void)setNumberToShow:(long long)arg1 ;
-(void)setLabel:(GKLabel *)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(GKLabel *)label;
-(void)dealloc;
@end

