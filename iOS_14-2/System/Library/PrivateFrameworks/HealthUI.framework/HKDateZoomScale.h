/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKZoomScale.h>

@class HKValueRange, NSString;

@interface HKDateZoomScale : NSObject <HKZoomScale> {

	double _previousZoomScale;
	long long _previousZoom;
	HKValueRange* _unitZoomScaleValueRange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)maxDate;
-(id)minDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1 ;
-(id)unitZoomScaleValueRange;
-(long long)zoomForZoomScale:(double)arg1 ;
-(double)zoomScaleForRange:(HKRange)arg1 ;
@end

