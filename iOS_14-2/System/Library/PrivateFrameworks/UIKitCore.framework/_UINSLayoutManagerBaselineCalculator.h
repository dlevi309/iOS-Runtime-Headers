/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UINSLayoutManagerBaselineCalculator.h>

@protocol _UINSLayoutManagerBaselineCalculator <NSObject>
@property (nonatomic,readonly) double firstBaselineOffsetFromTop; 
@property (nonatomic,readonly) double lastBaselineOffsetFromBottom; 
@required
-(double)lastBaselineOffsetFromBottom;
-(double)firstBaselineOffsetFromTop;

@end


@protocol UICoordinateSpace;
@class NSLayoutManager, NSString;

@interface _UINSLayoutManagerBaselineCalculator : NSObject <_UINSLayoutManagerBaselineCalculator> {

	NSLayoutManager* _layoutManager;
	id<UICoordinateSpace> _coordinateSpace;
	double _scale;

}

@property (nonatomic,readonly) double firstBaselineOffsetFromTop; 
@property (nonatomic,readonly) double lastBaselineOffsetFromBottom; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)lastBaselineOffsetFromBottom;
-(double)_convertOffset:(double)arg1 ;
-(double)firstBaselineOffsetFromTop;
-(double)_baselineOffsetForGlyphAtIndex:(long long)arg1 ;
-(id)initWithLayoutManager:(id)arg1 coordinateSpace:(id)arg2 scale:(double)arg3 ;
@end

