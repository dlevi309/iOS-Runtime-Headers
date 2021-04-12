/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface TVCornerUtilities : NSObject
+(TVCornerRadii)radiiFromRadius:(double)arg1 ;
+(CGPathRef)createPathForRadii:(TVCornerRadii)arg1 inRect:(CGRect)arg2 ;
+(BOOL)radiiIsZero:(TVCornerRadii)arg1 ;
+(CGPathRef)createPathForRadii:(TVCornerRadii)arg1 inRect:(CGRect)arg2 isContinuous:(BOOL)arg3 ;
+(double)radiusFromCornerRadii:(TVCornerRadii)arg1 ;
+(TVCornerRadii)flipCGOriginRadii:(TVCornerRadii)arg1 ;
@end

