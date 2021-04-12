/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusRegionMapEntry.h>

@class UIFocusContainerGuide;

@interface _UIFocusContainerGuideMapEntry : _UIFocusRegionMapEntry {

	UIFocusContainerGuide* _focusContainerGuide;
	double _axisAlignedDistanceFromFocusedRect;
	CGRect _focusContainmentFrame;

}

@property (assign,nonatomic,__weak) UIFocusContainerGuide * focusContainerGuide;              //@synthesize focusContainerGuide=_focusContainerGuide - In the implementation block
@property (assign,nonatomic) CGRect focusContainmentFrame;                                    //@synthesize focusContainmentFrame=_focusContainmentFrame - In the implementation block
@property (assign,nonatomic) double axisAlignedDistanceFromFocusedRect;                       //@synthesize axisAlignedDistanceFromFocusedRect=_axisAlignedDistanceFromFocusedRect - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIFocusContainerGuide *)focusContainerGuide;
-(void)setFocusContainerGuide:(UIFocusContainerGuide *)arg1 ;
-(void)setFocusContainmentFrame:(CGRect)arg1 ;
-(CGRect)focusContainmentFrame;
-(void)setAxisAlignedDistanceFromFocusedRect:(double)arg1 ;
-(double)axisAlignedDistanceFromFocusedRect;
-(void)drawVisualRepresentationInContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 ;
-(id)visualRepresentationColor;
@end

