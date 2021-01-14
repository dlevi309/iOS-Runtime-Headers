/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
*/

#import <LoginUILogViewer/LoginUILogViewer-Structs.h>
#import <UIKitCore/UIView.h>

@class UITableView, UICollectionView, UIView, UILabel, UIStackView, UIButton, UITextField;

@interface LUILogFilterView : UIView {

	UITableView* _existingPredicatesTableView;
	UICollectionView* _predicatesKeyCandidateCollectionView;
	UICollectionView* _predicatesComparisonCandidateCollectionView;
	UICollectionView* _predicatesValueCandidateCollectionView;
	UIView* _horizontalSeparatorLine;
	UIView* _veriticalSeparatorLineFirst;
	UIView* _veriticalSeparatorLineSecond;
	UILabel* _currentPredicateLabel;
	UIStackView* _enterPredicateStackView;
	UIButton* _addButton;
	UITextField* _predicateTextField;
	UIButton* _applyButton;

}

@property (nonatomic,retain) UITableView * existingPredicatesTableView;                                   //@synthesize existingPredicatesTableView=_existingPredicatesTableView - In the implementation block
@property (nonatomic,retain) UICollectionView * predicatesKeyCandidateCollectionView;                     //@synthesize predicatesKeyCandidateCollectionView=_predicatesKeyCandidateCollectionView - In the implementation block
@property (nonatomic,retain) UICollectionView * predicatesComparisonCandidateCollectionView;              //@synthesize predicatesComparisonCandidateCollectionView=_predicatesComparisonCandidateCollectionView - In the implementation block
@property (nonatomic,retain) UICollectionView * predicatesValueCandidateCollectionView;                   //@synthesize predicatesValueCandidateCollectionView=_predicatesValueCandidateCollectionView - In the implementation block
@property (nonatomic,retain) UIView * horizontalSeparatorLine;                                            //@synthesize horizontalSeparatorLine=_horizontalSeparatorLine - In the implementation block
@property (nonatomic,retain) UIView * veriticalSeparatorLineFirst;                                        //@synthesize veriticalSeparatorLineFirst=_veriticalSeparatorLineFirst - In the implementation block
@property (nonatomic,retain) UIView * veriticalSeparatorLineSecond;                                       //@synthesize veriticalSeparatorLineSecond=_veriticalSeparatorLineSecond - In the implementation block
@property (nonatomic,retain) UILabel * currentPredicateLabel;                                             //@synthesize currentPredicateLabel=_currentPredicateLabel - In the implementation block
@property (nonatomic,retain) UIStackView * enterPredicateStackView;                                       //@synthesize enterPredicateStackView=_enterPredicateStackView - In the implementation block
@property (nonatomic,retain) UIButton * addButton;                                                        //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,retain) UITextField * predicateTextField;                                            //@synthesize predicateTextField=_predicateTextField - In the implementation block
@property (nonatomic,retain) UIButton * applyButton;                                                      //@synthesize applyButton=_applyButton - In the implementation block
-(void)_setup;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)addButton;
-(void)setAddButton:(UIButton *)arg1 ;
-(id)_createCollectionView;
-(id)_createTableView;
-(id)_createButtonWithTitle:(id)arg1 ;
-(id)_createSeparatorLine;
-(id)_createPredicateTextField;
-(id)_createEnterPredicateStackViewWithSubViews:(id)arg1 ;
-(id)_createCurrentPredicateLabel;
-(UILabel *)currentPredicateLabel;
-(UITableView *)existingPredicatesTableView;
-(UIButton *)applyButton;
-(UIView *)horizontalSeparatorLine;
-(UIStackView *)enterPredicateStackView;
-(UICollectionView *)predicatesKeyCandidateCollectionView;
-(UIView *)veriticalSeparatorLineFirst;
-(UICollectionView *)predicatesComparisonCandidateCollectionView;
-(UIView *)veriticalSeparatorLineSecond;
-(UICollectionView *)predicatesValueCandidateCollectionView;
-(id)_createEnterLabel;
-(void)setExistingPredicatesTableView:(UITableView *)arg1 ;
-(void)setPredicatesKeyCandidateCollectionView:(UICollectionView *)arg1 ;
-(void)setPredicatesComparisonCandidateCollectionView:(UICollectionView *)arg1 ;
-(void)setPredicatesValueCandidateCollectionView:(UICollectionView *)arg1 ;
-(void)setHorizontalSeparatorLine:(UIView *)arg1 ;
-(void)setVeriticalSeparatorLineFirst:(UIView *)arg1 ;
-(void)setVeriticalSeparatorLineSecond:(UIView *)arg1 ;
-(void)setCurrentPredicateLabel:(UILabel *)arg1 ;
-(void)setEnterPredicateStackView:(UIStackView *)arg1 ;
-(UITextField *)predicateTextField;
-(void)setPredicateTextField:(UITextField *)arg1 ;
-(void)setApplyButton:(UIButton *)arg1 ;
@end

