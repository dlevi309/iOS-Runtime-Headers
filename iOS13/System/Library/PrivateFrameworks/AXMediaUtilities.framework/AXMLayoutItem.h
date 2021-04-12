/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@interface AXMLayoutItem : NSObject

@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double top; 
@property (nonatomic,readonly) double bottom; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double left; 
@property (nonatomic,readonly) double right; 
@property (nonatomic,readonly) CGRect normalizedFrame; 
+(CGRect)boundingFrameForItems:(id)arg1 ;
+(CGRect)normalizedBoundingFrameForItems:(id)arg1 ;
-(id)description;
-(double)left;
-(double)width;
-(double)height;
-(double)top;
-(double)bottom;
-(double)right;
-(long long)_metricTypeForMetric:(long long)arg1 ;
-(double)_floatValueForMetric:(long long)arg1 ;
-(CGRect)_rectValueForMetric:(long long)arg1 ;
-(BOOL)metric:(long long)arg1 inProximityOfMetric:(long long)arg2 item:(id)arg3 threshold:(double)arg4 ;
@end

