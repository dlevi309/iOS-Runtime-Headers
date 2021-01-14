/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/


#import <CoreChart/CoreChart-Structs.h>
@class NSMutableArray;

@interface CCVegaAccessibilityHelper : NSObject {

	stack<CCVegaAccessibilityHelperState, std::__1::deque<CCVegaAccessibilityHelperState, std::__1::allocator<CCVegaAccessibilityHelperState> > >* _stateStack;
	SCD_Struct_CC17 _currentState;
	NSMutableArray* _elementCache;
	NSMutableArray* _rootAccessibilityElements;
	NSMutableArray* _children;
	NSMutableArray* _groupStack;
	id container;

}

@property (__weak) id container; 
-(void)saveState;
-(void)setContainer:(id)arg1 ;
-(void)restoreState;
-(id)container;
-(id)initWithElements:(id)arg1 ;
-(void)addElementWithLabel:(id)arg1 roleDescription:(id)arg2 frame:(CGRect)arg3 ;
-(id)newAccessibilityElementWithFrame:(CGRect)arg1 ;
-(void)translateX:(double)arg1 Y:(double)arg2 ;
-(void)markAriaHidden;
-(void)enterGroupWithLabel:(id)arg1 roleDescription:(id)arg2 frame:(CGRect)arg3 ;
-(void)exitGroup;
-(id)getElements;
@end

