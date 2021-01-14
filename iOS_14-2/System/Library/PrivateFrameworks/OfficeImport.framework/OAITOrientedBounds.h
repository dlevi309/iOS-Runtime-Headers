/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAITOrientedBounds : NSObject
+(id)absoluteOrientedBoundsOfDrawable:(id)arg1 ;
+(float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2 ;
+(CGAffineTransform)transformFromBounds:(CGRect)arg1 toOrientedBounds:(id)arg2 ;
+(id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(CGRect)arg3 ;
+(id)relativeOrientedBoundsOfDrawable:(id)arg1 ;
+(id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1 logicalBounds:(CGRect)arg2 ;
+(id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1 ;
+(id)relativeOrientedBoundsWithAbsoluteOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(CGRect)arg3 ;
+(CGRect)axisParallelBoundsOfOrientedBounds:(id)arg1 ;
@end

