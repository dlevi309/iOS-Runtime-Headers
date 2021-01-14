/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSMutableArray, NSArray;

@interface SKUIInteractiveSegmentedControl : UIControl {

	NSMutableArray* _dividerViews;
	/*^block*/id _dividerCreationBlock;
	double _dividerWidth;
	NSArray* _segments;
	double _selectionProgress;

}

@property (nonatomic,copy) id dividerCreationBlock;                 //@synthesize dividerCreationBlock=_dividerCreationBlock - In the implementation block
@property (assign,nonatomic) double dividerWidth;                   //@synthesize dividerWidth=_dividerWidth - In the implementation block
@property (nonatomic,copy) NSArray * segments;                      //@synthesize segments=_segments - In the implementation block
@property (assign,nonatomic) double selectionProgress;              //@synthesize selectionProgress=_selectionProgress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSegments:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)segments;
-(void)dealloc;
-(double)dividerWidth;
-(void)setDividerWidth:(double)arg1 ;
-(void)setSelectionProgress:(double)arg1 ;
-(void)setDividerCreationBlock:(id)arg1 ;
-(double)selectionProgress;
-(void)_unregisterForObservationOfSegment:(id)arg1 ;
-(id)_createDividerViewWithFrame:(CGRect)arg1 ;
-(long long)selectedSegmentIndexForSelectionProgress:(double)arg1 ;
-(double)relativeSelectionProgressForSelectionProgress:(double)arg1 segmentIndex:(long long)arg2 ;
-(void)_registerForObservationOfSegment:(id)arg1 ;
-(double)selectionProgressForRelativeSectionProgress:(double)arg1 segmentIndex:(long long)arg2 ;
-(BOOL)_setSelectionProgress:(double)arg1 ;
-(void)_applySelectionProgressToSegments;
-(void)_notifyClientsOfSelectionProgressChange;
-(double)selectionProgressForSelectedSegmentAtIndex:(long long)arg1 ;
-(void)_segmentControlTouchUpInsideAction:(id)arg1 ;
-(id)dividerCreationBlock;
@end

