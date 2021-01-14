/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <SearchUI/SearchUIKeyboardableNavigationProtocol.h>

@protocol SearchUIFeedbackDelegateInternal;
@class SearchUIRowModel, UIView, SearchUIDragSource, NSArray, NSString;

@interface SearchUITableViewCell : UITableViewCell <SearchUIKeyboardableNavigationProtocol> {

	BOOL _isExpanded;
	int _sfSeparatorStyle;
	SearchUIRowModel* _rowModel;
	UIView* _platterView;
	id<SearchUIFeedbackDelegateInternal> _delegate;
	UIView* _sizingContainer;
	SearchUIDragSource* _dragSource;
	UIView* _leadingView;
	UIView* _leadingTextView;

}

@property (nonatomic,retain) SearchUIRowModel * rowModel;                                       //@synthesize rowModel=_rowModel - In the implementation block
@property (nonatomic,retain) UIView * platterView;                                              //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic) BOOL isExpanded;                                                   //@synthesize isExpanded=_isExpanded - In the implementation block
@property (readonly) BOOL shouldDrawBackgroundColor; 
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegateInternal> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * sizingContainer;                                          //@synthesize sizingContainer=_sizingContainer - In the implementation block
@property (nonatomic,retain) SearchUIDragSource * dragSource;                                   //@synthesize dragSource=_dragSource - In the implementation block
@property (readonly) NSArray * visibleResults; 
@property (nonatomic,readonly) UIView * leadingView;                                            //@synthesize leadingView=_leadingView - In the implementation block
@property (nonatomic,readonly) UIView * leadingTextView;                                        //@synthesize leadingTextView=_leadingTextView - In the implementation block
@property (assign,nonatomic) int sfSeparatorStyle;                                              //@synthesize sfSeparatorStyle=_sfSeparatorStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifierForResult:(id)arg1 ;
+(BOOL)canCellExpandWithResults:(id)arg1 forView:(id)arg2 ;
+(double)distanceToTopOfAppIconsForMultiResultCell;
+(id)cellViewForRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(BOOL)navigateKeyboardUp;
-(BOOL)isExpanded;
-(void)updateWithRowModel:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)returnKeyPressed;
-(CGSize)intrinsicContentSize;
-(UIView *)platterView;
-(void)setDragSource:(SearchUIDragSource *)arg1 ;
-(void)setPlatterView:(UIView *)arg1 ;
-(id)init;
-(id<SearchUIFeedbackDelegateInternal>)delegate;
-(void)updateWithResult:(id)arg1 ;
-(BOOL)navigateKeyboardDown;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2 ;
-(SearchUIRowModel *)rowModel;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(BOOL)shouldDrawBackgroundColor;
-(int)sfSeparatorStyle;
-(UIView *)sizingContainer;
-(void)tabKeyPressed;
-(id)keyboardCardSectionForFocus;
-(void)updateWithResults:(id)arg1 ;
-(BOOL)supportsRecycling;
-(void)setSizingContainer:(UIView *)arg1 ;
-(void)_setAnimating:(BOOL)arg1 clippingAdjacentCells:(BOOL)arg2 ;
-(void)_setSeparatorDrawsInVibrantLightMode:(BOOL)arg1 ;
-(void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1 ;
-(BOOL)canSetupKeyboardHandler;
-(void)setDelegate:(id<SearchUIFeedbackDelegateInternal>)arg1 ;
-(void)setIsExpanded:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setupKeyboardHandler;
-(UIView *)leadingView;
-(id)keyboardResultForFocus;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setRowModel:(SearchUIRowModel *)arg1 ;
-(BOOL)navigateKeyboardRight;
-(void)removeKeyboardHandler;
-(void)willMoveToWindow:(id)arg1 ;
-(SearchUIDragSource *)dragSource;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(BOOL)navigateKeyboardLeft;
-(BOOL)isExpandable;
-(UIView *)leadingTextView;
-(NSArray *)visibleResults;
-(void)updateExpanded:(BOOL)arg1 ;
-(void)setSfSeparatorStyle:(int)arg1 ;
@end

