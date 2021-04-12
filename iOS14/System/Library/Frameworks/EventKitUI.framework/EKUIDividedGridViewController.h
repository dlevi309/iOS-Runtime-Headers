/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol EKUIDividedGridViewControllerDelegate;
@class UIColor, NSArray;

@interface EKUIDividedGridViewController : UIViewController {

	long long _type;
	UIColor* _cellBackgroundColor;
	NSArray* _buttonTitles;
	NSArray* _allCells;
	id<EKUIDividedGridViewControllerDelegate> _delegate;
	NSArray* _weekViews;
	double _preferredWidth;
	double _preferredInset;

}

@property (retain) NSArray * allCells;                                              //@synthesize allCells=_allCells - In the implementation block
@property (retain) NSArray * weekViews;                                             //@synthesize weekViews=_weekViews - In the implementation block
@property (assign,nonatomic) double preferredWidth;                                 //@synthesize preferredWidth=_preferredWidth - In the implementation block
@property (assign,nonatomic) double preferredInset;                                 //@synthesize preferredInset=_preferredInset - In the implementation block
@property (nonatomic,retain) NSArray * buttonTitles;                                //@synthesize buttonTitles=_buttonTitles - In the implementation block
@property (__weak) id<EKUIDividedGridViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)dividerColor;
-(void)viewWillLayoutSubviews;
-(void)setPreferredWidth:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(double)preferredWidth;
-(NSArray *)buttonTitles;
-(id)_newDividerView;
-(void)setAllCells:(NSArray *)arg1 ;
-(void)setWeekViews:(NSArray *)arg1 ;
-(double)preferredInset;
-(double)_rowHeightForWidth:(double)arg1 ;
-(NSArray *)weekViews;
-(double)_neededHeight;
-(id)initWithType:(long long)arg1 buttonTitles:(id)arg2 cellBackgroundColor:(id)arg3 ;
-(void)setButtonTitles:(NSArray *)arg1 ;
-(id<EKUIDividedGridViewControllerDelegate>)delegate;
-(void)setPreferredInset:(double)arg1 ;
-(void)setDelegate:(id<EKUIDividedGridViewControllerDelegate>)arg1 ;
-(NSArray *)allCells;
-(void)loadView;
-(void)cellTapped:(id)arg1 ;
-(void)viewDidLayoutSubviews;
@end

