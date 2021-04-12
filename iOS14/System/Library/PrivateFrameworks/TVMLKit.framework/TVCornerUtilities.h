/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface TVCornerUtilities : NSObject
+(double)radiusFromCornerRadii:(TVCornerRadii)arg1 ;
+(BOOL)radiiIsZero:(TVCornerRadii)arg1 ;
+(TVCornerRadii)radiiFromRadius:(double)arg1 ;
+(CGPathRef)createPathForRadii:(TVCornerRadii)arg1 inRect:(CGRect)arg2 ;
+(CGPathRef)createPathForRadii:(TVCornerRadii)arg1 inRect:(CGRect)arg2 isContinuous:(BOOL)arg3 ;
+(TVCornerRadii)flipCGOriginRadii:(TVCornerRadii)arg1 ;
@end

