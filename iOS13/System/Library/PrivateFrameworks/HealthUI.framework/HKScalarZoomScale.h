/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKZoomScale.h>

@class NSString;

@interface HKScalarZoomScale : NSObject <HKZoomScale>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)zoomForZoomScale:(double)arg1 ;
-(id)unitZoomScaleValueRange;
-(double)zoomScaleForRange:(HKRange)arg1 ;
-(void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1 ;
@end

