/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUQuickControlAuxiliaryView.h>

@class NSNumber, NSArray, UIStackView, UILongPressGestureRecognizer, NSString;

@interface HUQuickControlSegmentedControl : UIView <HUQuickControlAuxiliaryView> {

	/*^block*/id _selectionChangeHandler;
	NSNumber* _selectedSegmentIndex;
	NSArray* _segments;
	UIStackView* _segmentStackView;
	NSArray* _segmentViews;
	UILongPressGestureRecognizer* _gestureRecognizer;
	NSNumber* _trackingSegmentIndex;

}

@property (nonatomic,retain) UIStackView * segmentStackView;                                //@synthesize segmentStackView=_segmentStackView - In the implementation block
@property (nonatomic,retain) NSArray * segmentViews;                                        //@synthesize segmentViews=_segmentViews - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) NSNumber * trackingSegmentIndex;                               //@synthesize trackingSegmentIndex=_trackingSegmentIndex - In the implementation block
@property (nonatomic,copy) id selectionChangeHandler;                                       //@synthesize selectionChangeHandler=_selectionChangeHandler - In the implementation block
@property (nonatomic,retain) NSNumber * selectedSegmentIndex;                               //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
@property (nonatomic,copy,readonly) NSArray * segments;                                     //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) BOOL hasCenteredContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupConstraints;
-(UILongPressGestureRecognizer *)gestureRecognizer;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithSegments:(id)arg1 ;
-(NSArray *)segmentViews;
-(NSArray *)segments;
-(void)setSelectedSegmentIndex:(NSNumber *)arg1 ;
-(void)setGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(NSNumber *)selectedSegmentIndex;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSegmentViews:(NSArray *)arg1 ;
-(void)_updateSegmentViewsForUILayoutDirection;
-(void)setSegmentStackView:(UIStackView *)arg1 ;
-(UIStackView *)segmentStackView;
-(void)_handleGesture:(id)arg1 ;
-(void)_updateSegmentSelectionStateAnimated:(BOOL)arg1 ;
-(void)setTrackingSegmentIndex:(NSNumber *)arg1 ;
-(id)selectionChangeHandler;
-(NSNumber *)trackingSegmentIndex;
-(BOOL)preferVerticalLayout;
-(void)ensureCorrectHeaderViewOrientation;
-(BOOL)hasCenteredContent;
-(void)setSelectionChangeHandler:(id)arg1 ;
@end

