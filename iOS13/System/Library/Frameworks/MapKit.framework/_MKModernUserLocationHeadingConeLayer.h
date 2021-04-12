/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKUserLocationHeadingConeLayer.h>

@interface _MKModernUserLocationHeadingConeLayer : MKUserLocationHeadingConeLayer
-(void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2 ;
-(id)initWithUserLocationView:(id)arg1 ;
-(id)_headingImage:(CGPoint*)arg1 ;
-(void)_createMaskLayer;
-(void)_updateHeadingMaskForAccuracy:(double)arg1 previousAccuracy:(double)arg2 ;
-(void)_updateShowHeadingForAccuracy:(double)arg1 ;
-(unsigned long long)_keyframeIndexForAccuracy:(double)arg1 ;
-(CGRect)_normalizedHeadingMaskRectForIndex:(unsigned long long)arg1 ;
-(BOOL)_shouldShowHeadingForAccuracy:(double)arg1 ;
@end

