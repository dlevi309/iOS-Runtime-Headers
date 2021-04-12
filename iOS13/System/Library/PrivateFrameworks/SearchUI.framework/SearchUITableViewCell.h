/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <SearchUI/SearchUIKeyboardableNavigationProtocol.h>

@protocol SearchUIFeedbackDelegateInternal, SearchUIResultShortLook;
@class SearchUIRowModel, UIView, SearchUIDragSource, UIViewController, NSArray, NSString;

@interface SearchUITableViewCell : UITableViewCell <SearchUIKeyboardableNavigationProtocol> {

	BOOL _isExpanded;
	SearchUIRowModel* _rowModel;
	UIView* _platterView;
	id<SearchUIFeedbackDelegateInternal> _delegate;
	UIView* _sizingContainer;
	SearchUIDragSource* _dragSource;
	UIViewController*<SearchUIResultShortLook> _shortLookViewController;

}

@property (nonatomic,retain) SearchUIRowModel * rowModel;                                                            //@synthesize rowModel=_rowModel - In the implementation block
@property (nonatomic,retain) UIView * platterView;                                                                   //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic) BOOL isExpanded;                                                                        //@synthesize isExpanded=_isExpanded - In the implementation block
@property (readonly) BOOL shouldDrawBackgroundColor; 
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegateInternal> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * sizingContainer;                                                               //@synthesize sizingContainer=_sizingContainer - In the implementation block
@property (nonatomic,retain) SearchUIDragSource * dragSource;                                                        //@synthesize dragSource=_dragSource - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<SearchUIResultShortLook> shortLookViewController;              //@synthesize shortLookViewController=_shortLookViewController - In the implementation block
@property (readonly) NSArray * visibleResults; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellViewForRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
+(id)reuseIdentifierForResult:(id)arg1 ;
+(BOOL)canCellExpandWithResults:(id)arg1 forView:(id)arg2 ;
+(double)distanceToTopOfAppIconsForMultiResultCell;
-(id)init;
-(id<SearchUIFeedbackDelegateInternal>)delegate;
-(void)setDelegate:(id<SearchUIFeedbackDelegateInternal>)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(SearchUIDragSource *)dragSource;
-(void)setDragSource:(SearchUIDragSource *)arg1 ;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setPlatterView:(UIView *)arg1 ;
-(UIView *)platterView;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2 ;
-(void)_setAnimating:(BOOL)arg1 clippingAdjacentCells:(BOOL)arg2 ;
-(void)_setSeparatorDrawsInVibrantLightMode:(BOOL)arg1 ;
-(void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1 ;
-(void)updateWithResult:(id)arg1 ;
-(BOOL)isExpandable;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(SearchUIRowModel *)rowModel;
-(void)updateWithRowModel:(id)arg1 ;
-(void)setRowModel:(SearchUIRowModel *)arg1 ;
-(BOOL)shouldDrawBackgroundColor;
-(UIView *)sizingContainer;
-(BOOL)canSetupKeyboardHandler;
-(void)setupKeyboardHandler;
-(BOOL)navigateKeyboardRight;
-(void)returnKeyPressed;
-(BOOL)navigateKeyboardLeft;
-(BOOL)navigateKeyboardUp;
-(BOOL)navigateKeyboardDown;
-(void)removeKeyboardHandler;
-(NSArray *)visibleResults;
-(void)updateWithResults:(id)arg1 ;
-(void)updateExpanded:(BOOL)arg1 ;
-(BOOL)supportsRecycling;
-(void)setSizingContainer:(UIView *)arg1 ;
-(UIViewController*<SearchUIResultShortLook>)shortLookViewController;
-(void)setShortLookViewController:(UIViewController*<SearchUIResultShortLook>)arg1 ;
@end

