/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISwipeViewManipulator.h>

@class NSString;

@interface _UIDefaultSwipeViewManipulator : NSObject <_UISwipeViewManipulator> {

	double _swipedViewRestingOffset;

}

@property (assign,nonatomic) double swipedViewRestingOffset;              //@synthesize swipedViewRestingOffset=_swipedViewRestingOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)swipedViewRestingOffset;
-(void)removeAnimationsFromSwipedView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)moveSwipedView:(id)arg1 atIndexPath:(id)arg2 withSwipeInfo:(SCD_Struct_UI126)arg3 animator:(id)arg4 ;
-(CGRect)restingFrameForSwipedView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setSwipedViewRestingOffset:(double)arg1 ;
@end

