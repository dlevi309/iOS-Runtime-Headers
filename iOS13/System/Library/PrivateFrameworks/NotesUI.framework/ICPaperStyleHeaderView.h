/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface ICPaperStyleHeaderView : UICollectionReusableView {

	UILabel* _label;
	NSLayoutConstraint* _labelConstraintLeading;
	NSLayoutConstraint* _labelConstraintTrailing;

}

@property (nonatomic,retain) UILabel * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelConstraintLeading;               //@synthesize labelConstraintLeading=_labelConstraintLeading - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelConstraintTrailing;              //@synthesize labelConstraintTrailing=_labelConstraintTrailing - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) double titleInset; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)contentSizeCategoryDidChange;
-(void)setLabelConstraintLeading:(NSLayoutConstraint *)arg1 ;
-(void)setLabelConstraintTrailing:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelConstraintLeading;
-(NSLayoutConstraint *)labelConstraintTrailing;
-(void)setTitleInset:(double)arg1 ;
-(double)titleInset;
@end

