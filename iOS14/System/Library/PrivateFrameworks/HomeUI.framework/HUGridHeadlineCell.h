/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HUGridCellProtocol.h>

@class HUGridCellLayoutOptions, HUGridHeadlineCellLayoutOptions, HFItem, UILabel, UIView, HUGridCellBackgroundView, UIImageView, NSArray, NSString;

@interface HUGridHeadlineCell : UICollectionViewCell <HUGridCellProtocol> {

	BOOL _cellContentsHidden;
	BOOL _editing;
	HUGridHeadlineCellLayoutOptions* _layoutOptions;
	HFItem* _item;
	UILabel* _headlineLabel;
	UIView* _editingBackgroundContainerView;
	HUGridCellBackgroundView* _editingBackgroundView;
	UIView* _editingBackgroundDarkeningView;
	UIImageView* _editingChevronImageView;
	NSArray* _headlineCellConstraints;

}

@property (nonatomic,retain) UILabel * headlineLabel;                                                        //@synthesize headlineLabel=_headlineLabel - In the implementation block
@property (nonatomic,retain) UIView * editingBackgroundContainerView;                                        //@synthesize editingBackgroundContainerView=_editingBackgroundContainerView - In the implementation block
@property (nonatomic,retain) HUGridCellBackgroundView * editingBackgroundView;                               //@synthesize editingBackgroundView=_editingBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * editingBackgroundDarkeningView;                                        //@synthesize editingBackgroundDarkeningView=_editingBackgroundDarkeningView - In the implementation block
@property (nonatomic,retain) UIImageView * editingChevronImageView;                                          //@synthesize editingChevronImageView=_editingChevronImageView - In the implementation block
@property (nonatomic,retain) NSArray * headlineCellConstraints;                                              //@synthesize headlineCellConstraints=_headlineCellConstraints - In the implementation block
@property (nonatomic,retain) HUGridHeadlineCellLayoutOptions * layoutOptions;                                //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                  //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) CGRect unpaddedContentFrame; 
@property (assign,getter=areCellContentsHidden,nonatomic) BOOL cellContentsHidden;                           //@synthesize cellContentsHidden=_cellContentsHidden - In the implementation block
@property (assign,getter=isRearranging,nonatomic) BOOL rearranging; 
@property (assign,getter=isPointerInteractionEnabled,nonatomic) BOOL pointerInteractionEnabled; 
@property (assign,nonatomic) double pointerRegionMargin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                                  //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
+(BOOL)requiresConstraintBasedLayout;
+(Class)layoutOptionsClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(HFItem *)item;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)prepareForReuse;
-(BOOL)isEditing;
-(void)setItem:(HFItem *)arg1 ;
-(CGRect)unpaddedContentFrame;
-(void)updateConstraints;
-(HUGridHeadlineCellLayoutOptions *)layoutOptions;
-(id)initWithCoder:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setLayoutOptions:(HUGridHeadlineCellLayoutOptions *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)areCellContentsHidden;
-(void)setCellContentsHidden:(BOOL)arg1 ;
-(void)_setupCommonCellAppearance;
-(void)_updateHeadlineLabel;
-(HUGridCellBackgroundView *)editingBackgroundView;
-(UIView *)editingBackgroundDarkeningView;
-(void)setEditingBackgroundContainerView:(UIView *)arg1 ;
-(UIView *)editingBackgroundContainerView;
-(void)setEditingBackgroundView:(HUGridCellBackgroundView *)arg1 ;
-(void)setEditingBackgroundDarkeningView:(UIView *)arg1 ;
-(void)setHeadlineLabel:(UILabel *)arg1 ;
-(UILabel *)headlineLabel;
-(void)setEditingChevronImageView:(UIImageView *)arg1 ;
-(UIImageView *)editingChevronImageView;
-(NSArray *)headlineCellConstraints;
-(void)setHeadlineCellConstraints:(NSArray *)arg1 ;
@end

