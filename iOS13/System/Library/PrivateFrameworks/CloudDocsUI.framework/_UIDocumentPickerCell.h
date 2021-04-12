/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UICollectionViewTableCell.h>

@class UILabel, UIImageView, UIProgressView, NSArray, _UIDocumentPickerDocumentCollectionViewController, _UIDocumentPickerContainerItem, NSLayoutConstraint, UIView, NSMutableArray, UILongPressGestureRecognizer;

@interface _UIDocumentPickerCell : UICollectionViewTableCell {

	BOOL _transitioningLayout;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _subtitle2Label;
	UILabel* _subtitleJoiner;
	UIImageView* _tagView;
	UIImageView* _thumbnailView;
	UIProgressView* _progressView;
	long long _cellStyle;
	NSArray* _actions;
	_UIDocumentPickerDocumentCollectionViewController* _collectionView;
	_UIDocumentPickerContainerItem* _item;
	NSLayoutConstraint* _thumbnailCenterWidthConstraint;
	NSLayoutConstraint* _thumbnailCenterHeightConstraint;
	NSArray* _gridConstraints;
	NSArray* _tableConstraints;
	NSArray* _indentedConstraints;
	NSArray* _activeConstraints;
	UIView* _indentationHelperView;
	NSLayoutConstraint* _indentationConstraint;
	UIImageView* _selectionView;
	UIView* _selectionViewsThumbnailView;
	NSMutableArray* _selectionViewConstraints;
	UILongPressGestureRecognizer* _pickableDiagnosticGestureRecognizer;
	UILongPressGestureRecognizer* _actionGestureRecognizer;
	NSArray* _availableActions;
	UIView* _cachedSelectedBackgroundView;

}

@property (nonatomic,retain) NSLayoutConstraint * thumbnailCenterWidthConstraint;                                    //@synthesize thumbnailCenterWidthConstraint=_thumbnailCenterWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * thumbnailCenterHeightConstraint;                                   //@synthesize thumbnailCenterHeightConstraint=_thumbnailCenterHeightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * gridConstraints;                                                              //@synthesize gridConstraints=_gridConstraints - In the implementation block
@property (nonatomic,retain) NSArray * tableConstraints;                                                             //@synthesize tableConstraints=_tableConstraints - In the implementation block
@property (nonatomic,retain) NSArray * indentedConstraints;                                                          //@synthesize indentedConstraints=_indentedConstraints - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                                            //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (assign,getter=isTransitioningLayout,nonatomic) BOOL transitioningLayout;                                  //@synthesize transitioningLayout=_transitioningLayout - In the implementation block
@property (nonatomic,retain) UIView * indentationHelperView;                                                         //@synthesize indentationHelperView=_indentationHelperView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * indentationConstraint;                                             //@synthesize indentationConstraint=_indentationConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * selectionView;                                                            //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,retain) UIView * selectionViewsThumbnailView;                                                   //@synthesize selectionViewsThumbnailView=_selectionViewsThumbnailView - In the implementation block
@property (nonatomic,retain) NSMutableArray * selectionViewConstraints;                                              //@synthesize selectionViewConstraints=_selectionViewConstraints - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * pickableDiagnosticGestureRecognizer;                     //@synthesize pickableDiagnosticGestureRecognizer=_pickableDiagnosticGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * actionGestureRecognizer;                                 //@synthesize actionGestureRecognizer=_actionGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSArray * availableActions;                                                             //@synthesize availableActions=_availableActions - In the implementation block
@property (nonatomic,retain) UIView * cachedSelectedBackgroundView;                                                  //@synthesize cachedSelectedBackgroundView=_cachedSelectedBackgroundView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitle2Label;                                                               //@synthesize subtitle2Label=_subtitle2Label - In the implementation block
@property (nonatomic,retain) UILabel * subtitleJoiner;                                                               //@synthesize subtitleJoiner=_subtitleJoiner - In the implementation block
@property (nonatomic,retain) UIImageView * tagView;                                                                  //@synthesize tagView=_tagView - In the implementation block
@property (nonatomic,retain) UIImageView * thumbnailView;                                                            //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                                          //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) long long cellStyle;                                                                    //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,retain) NSArray * actions;                                                                      //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic,__weak) _UIDocumentPickerDocumentCollectionViewController * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerContainerItem * item;                                                  //@synthesize item=_item - In the implementation block
+(id)_titleFontForTable:(BOOL)arg1 ;
+(id)_subtitleFontForTable:(BOOL)arg1 ;
+(CGSize)thumbnailSizeForTraits:(id)arg1 cellStyle:(long long)arg2 ;
+(CGSize)defaultSizeForCellStyle:(long long)arg1 traitCollection:(id)arg2 ;
-(void)dealloc;
-(_UIDocumentPickerContainerItem *)item;
-(void)setItem:(_UIDocumentPickerContainerItem *)arg1 ;
-(void)prepareForReuse;
-(UILabel *)subtitle2Label;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSArray *)actions;
-(_UIDocumentPickerDocumentCollectionViewController *)collectionView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)selectionView;
-(void)setCollectionView:(_UIDocumentPickerDocumentCollectionViewController *)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setActions:(NSArray *)arg1 ;
-(UILongPressGestureRecognizer *)actionGestureRecognizer;
-(void)setSelectionView:(UIImageView *)arg1 ;
-(long long)cellStyle;
-(void)setCellStyle:(long long)arg1 ;
-(void)_updateFonts;
-(void)_updateSeparatorInset;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(UIProgressView *)progressView;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(NSArray *)availableActions;
-(void)setAvailableActions:(NSArray *)arg1 ;
-(void)_deleteAction:(id)arg1 ;
-(void)setSubtitle2Label:(UILabel *)arg1 ;
-(UIImageView *)thumbnailView;
-(void)setThumbnailView:(UIImageView *)arg1 ;
-(void)_showPickableDiagnostic;
-(void)setPickableDiagnosticGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)pickableDiagnosticGestureRecognizer;
-(void)setSubtitleJoiner:(UILabel *)arg1 ;
-(UILabel *)subtitleJoiner;
-(void)setIndentationHelperView:(UIView *)arg1 ;
-(void)setTagView:(UIImageView *)arg1 ;
-(UIImageView *)tagView;
-(UIView *)indentationHelperView;
-(void)_dynamicTypeSizeChanged:(id)arg1 ;
-(void)_updateIconSize;
-(NSArray *)gridConstraints;
-(NSArray *)tableConstraints;
-(NSArray *)indentedConstraints;
-(void)setGridConstraints:(NSArray *)arg1 ;
-(void)setTableConstraints:(NSArray *)arg1 ;
-(void)setIndentedConstraints:(NSArray *)arg1 ;
-(void)_updateConstraintsForCellStyle;
-(void)setTransitioningLayout:(BOOL)arg1 ;
-(NSLayoutConstraint *)thumbnailCenterHeightConstraint;
-(NSLayoutConstraint *)thumbnailCenterWidthConstraint;
-(void)setSelectionViewsThumbnailView:(UIView *)arg1 ;
-(UIView *)cachedSelectedBackgroundView;
-(void)setCachedSelectedBackgroundView:(UIView *)arg1 ;
-(void)updateForEditingState:(BOOL)arg1 ;
-(void)setIndentationConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)indentationConstraint;
-(void)setThumbnailCenterHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setThumbnailCenterWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateSelectionState:(BOOL)arg1 ;
-(void)_updateAccessoryType;
-(void)updateActionGestureRecognizer;
-(void)_udpateLabelAlpha;
-(BOOL)isTransitioningLayout;
-(void)reloadItem:(BOOL)arg1 ;
-(void)_showActions:(id)arg1 ;
-(void)setActionGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)_moreAction:(id)arg1 ;
-(void)_renameAction:(id)arg1 ;
-(void)_activityAction:(id)arg1 ;
-(void)_moveAction:(id)arg1 ;
-(void)_infoAction:(id)arg1 ;
-(UIView *)selectionViewsThumbnailView;
-(NSMutableArray *)selectionViewConstraints;
-(void)setSelectionViewConstraints:(NSMutableArray *)arg1 ;
@end

