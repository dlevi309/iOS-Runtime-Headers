/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1 ;
-(id)unitZoomScaleValueRange;
-(long long)zoomForZoomScale:(double)arg1 ;
-(double)zoomScaleForRange:(HKRange)arg1 ;
@end

