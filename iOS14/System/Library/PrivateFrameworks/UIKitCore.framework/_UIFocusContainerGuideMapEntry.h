/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFocusContainerGuide:(UIFocusContainerGuide *)arg1 ;
-(id)description;
-(CGRect)focusContainmentFrame;
-(void)setFocusContainmentFrame:(CGRect)arg1 ;
-(void)setAxisAlignedDistanceFromFocusedRect:(double)arg1 ;
-(double)axisAlignedDistanceFromFocusedRect;
-(void)drawVisualRepresentationInContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 ;
-(id)visualRepresentationColor;
-(UIFocusContainerGuide *)focusContainerGuide;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

