/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFAdjustableLabelDelegate.h>

@protocol WFNumericPageControlDelegate;
@class UIColor, UIPageControl, UILabel, NSString;

@interface WFNumericPageControl : UIView <WFAdjustableLabelDelegate> {

	BOOL _usesBoldText;
	long long _currentPage;
	long long _numberOfPages;
	id<WFNumericPageControlDelegate> _delegate;
	UIColor* _selectedPageTintColor;
	UIColor* _deselectedPageTintColor;
	UIPageControl* _pageControl;
	UILabel* _pageLabel;

}

@property (assign,nonatomic,__weak) UIPageControl * pageControl;                            //@synthesize pageControl=_pageControl - In the implementation block
@property (assign,nonatomic,__weak) UILabel * pageLabel;                                    //@synthesize pageLabel=_pageLabel - In the implementation block
@property (assign,nonatomic) long long currentPage;                                         //@synthesize currentPage=_currentPage - In the implementation block
@property (assign,nonatomic) long long numberOfPages;                                       //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (assign,nonatomic,__weak) id<WFNumericPageControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * selectedPageTintColor;                               //@synthesize selectedPageTintColor=_selectedPageTintColor - In the implementation block
@property (nonatomic,retain) UIColor * deselectedPageTintColor;                             //@synthesize deselectedPageTintColor=_deselectedPageTintColor - In the implementation block
@property (assign,nonatomic) BOOL usesBoldText;                                             //@synthesize usesBoldText=_usesBoldText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFNumericPageControlDelegate>)delegate;
-(void)setDelegate:(id<WFNumericPageControlDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setCurrentPage:(long long)arg1 ;
-(long long)currentPage;
-(void)setNumberOfPages:(long long)arg1 ;
-(long long)numberOfPages;
-(UIPageControl *)pageControl;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)updateControls;
-(void)adjustableLabelRequestedIncrement:(id)arg1 ;
-(void)adjustableLabelRequestedDecrement:(id)arg1 ;
-(void)pageControlValueChanged:(id)arg1 ;
-(UIColor *)selectedPageTintColor;
-(void)setSelectedPageTintColor:(UIColor *)arg1 ;
-(UIColor *)deselectedPageTintColor;
-(void)setDeselectedPageTintColor:(UIColor *)arg1 ;
-(BOOL)usesBoldText;
-(void)setUsesBoldText:(BOOL)arg1 ;
-(UILabel *)pageLabel;
-(void)setPageLabel:(UILabel *)arg1 ;
@end

