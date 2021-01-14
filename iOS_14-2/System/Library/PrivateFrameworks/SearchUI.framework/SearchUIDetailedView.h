/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <AppSupportUI/NUIContainerStackView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>
#import <SearchUI/SearchUIAccessoryViewDelegate.h>
#import <libobjc.A.dylib/TLKDetailsViewDelegate.h>

@protocol SearchUIFeedbackDelegate, SearchUIDetailedViewDelegate;
@class SearchUIAccessoryViewController, SearchUILeadingViewController, SearchUIDetailedRowModel, TLKStackView, NSMutableArray, TLKDetailsView, UIView, NSString;

@interface SearchUIDetailedView : NUIContainerStackView <NUIContainerViewDelegate, SearchUIAccessoryViewDelegate, TLKDetailsViewDelegate> {

	BOOL _isVerticalAlignment;
	BOOL _isCompactWidth;
	id<SearchUIFeedbackDelegate> _feedbackDelegate;
	id<SearchUIDetailedViewDelegate> _buttonDelegate;
	SearchUIAccessoryViewController* _currentAccessoryViewController;
	SearchUILeadingViewController* _currentLeadingViewController;
	SearchUIDetailedRowModel* _rowModel;
	TLKStackView* _innerContainer;
	NSMutableArray* _leadingViewControllers;
	TLKDetailsView* _detailsView;
	NSMutableArray* _accessoryViewControllers;

}

@property (nonatomic,retain) SearchUIDetailedRowModel * rowModel;                                           //@synthesize rowModel=_rowModel - In the implementation block
@property (nonatomic,retain) TLKStackView * innerContainer;                                                 //@synthesize innerContainer=_innerContainer - In the implementation block
@property (nonatomic,retain) NSMutableArray * leadingViewControllers;                                       //@synthesize leadingViewControllers=_leadingViewControllers - In the implementation block
@property (nonatomic,retain) SearchUILeadingViewController * currentLeadingViewController;                  //@synthesize currentLeadingViewController=_currentLeadingViewController - In the implementation block
@property (nonatomic,retain) TLKDetailsView * detailsView;                                                  //@synthesize detailsView=_detailsView - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessoryViewControllers;                                     //@synthesize accessoryViewControllers=_accessoryViewControllers - In the implementation block
@property (nonatomic,retain) SearchUIAccessoryViewController * currentAccessoryViewController;              //@synthesize currentAccessoryViewController=_currentAccessoryViewController - In the implementation block
@property (assign,nonatomic) BOOL isVerticalAlignment;                                                      //@synthesize isVerticalAlignment=_isVerticalAlignment - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate;                          //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIDetailedViewDelegate> buttonDelegate;                        //@synthesize buttonDelegate=_buttonDelegate - In the implementation block
@property (nonatomic,readonly) UIView * leadingView; 
@property (nonatomic,readonly) UIView * leadingTextView; 
@property (assign) BOOL isCompactWidth;                                                                     //@synthesize isCompactWidth=_isCompactWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bannerBadgeForRowModel:(id)arg1 ;
+(void)addViewIfNecessary:(id)arg1 toStackView:(id)arg2 removeFromStackView:(id)arg3 ;
-(void)updateWithRowModel:(id)arg1 ;
-(id)initWithFeedbackDelegate:(id)arg1 ;
-(void)setIsCompactWidth:(BOOL)arg1 ;
-(SearchUIAccessoryViewController *)currentAccessoryViewController;
-(SearchUIDetailedRowModel *)rowModel;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(id<SearchUIDetailedViewDelegate>)buttonDelegate;
-(void)setButtonDelegate:(id<SearchUIDetailedViewDelegate>)arg1 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(void)setIsVerticalAlignment:(BOOL)arg1 ;
-(BOOL)isVerticalAlignment;
-(SearchUILeadingViewController *)currentLeadingViewController;
-(UIView *)leadingView;
-(void)setRowModel:(SearchUIDetailedRowModel *)arg1 ;
-(void)setInnerContainer:(TLKStackView *)arg1 ;
-(void)setDetailsView:(TLKDetailsView *)arg1 ;
-(void)setLeadingViewControllers:(NSMutableArray *)arg1 ;
-(void)setAccessoryViewControllers:(NSMutableArray *)arg1 ;
-(TLKStackView *)innerContainer;
-(TLKDetailsView *)detailsView;
-(NSMutableArray *)leadingViewControllers;
-(void)setCurrentLeadingViewController:(SearchUILeadingViewController *)arg1 ;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(BOOL)isCompactWidth;
-(void)footnoteButtonPressed;
-(NSMutableArray *)accessoryViewControllers;
-(void)setCurrentAccessoryViewController:(SearchUIAccessoryViewController *)arg1 ;
-(BOOL)arrangedViewMustCenter:(id)arg1 ;
-(UIView *)leadingTextView;
@end

