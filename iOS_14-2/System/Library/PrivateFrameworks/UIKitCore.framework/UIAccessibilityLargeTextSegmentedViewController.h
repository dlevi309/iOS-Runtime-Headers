/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>

@class UISegmentedControl, NSMutableArray, UISegment, NSArray, UIScrollView;

@interface UIAccessibilityLargeTextSegmentedViewController : UIViewController {

	UISegmentedControl* _segmentedControl;
	NSMutableArray* _segmentButtons;
	UISegment* _originalSelectedSegment;
	NSArray* _segments;
	UIScrollView* _mainScrollView;

}

@property (nonatomic,retain) UISegment * originalSelectedSegment;                //@synthesize originalSelectedSegment=_originalSelectedSegment - In the implementation block
@property (nonatomic,retain) NSArray * segments;                                 //@synthesize segments=_segments - In the implementation block
@property (nonatomic,retain) UIScrollView * mainScrollView;                      //@synthesize mainScrollView=_mainScrollView - In the implementation block
@property (nonatomic,retain) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) NSMutableArray * segmentButtons;                    //@synthesize segmentButtons=_segmentButtons - In the implementation block
-(void)_orientationChanged:(id)arg1 ;
-(void)setSegments:(NSArray *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(NSArray *)segments;
-(void)buttonPress:(id)arg1 ;
-(id)segmentFromSegment:(id)arg1 ;
-(void)_configureSegmentViews;
-(void)buttonTouchDown:(id)arg1 ;
-(UISegment *)originalSelectedSegment;
-(UISegmentedControl *)segmentedControl;
-(id)initWithSegmentedControl:(id)arg1 segments:(id)arg2 delegate:(id)arg3 ;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)setSegmentButtons:(NSMutableArray *)arg1 ;
-(void)setOriginalSelectedSegment:(UISegment *)arg1 ;
-(void)setMainScrollView:(UIScrollView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)buttonTouchUp:(id)arg1 ;
-(NSMutableArray *)segmentButtons;
-(UIScrollView *)mainScrollView;
@end

