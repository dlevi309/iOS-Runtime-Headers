/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class UIBezierPath, NSArray, NSDictionary;

@interface NTKBezierPathPointModel : NSObject {

	UIBezierPath* _path;
	NSArray* _pathElements;
	NSDictionary* _horizontalPercentageCache;

}

@property (nonatomic,readonly) UIBezierPath * path;              //@synthesize path=_path - In the implementation block
-(id)initWithPath:(id)arg1 ;
-(UIBezierPath *)path;
-(id)_buildHorizontalPercentageCache;
-(CGPoint)pointOnPathForHorizontalPercentage:(double)arg1 withEndPadding:(double)arg2 ;
-(double)_estimatePercentageForEndPadding:(double)arg1 ;
-(CGPoint)_computePointOnPathForHorizontalPercentage:(double)arg1 ;
-(double)_computeDistanceBetweenPointA:(CGPoint)arg1 andPointB:(CGPoint)arg2 ;
-(CGPoint)pointOnPathForHorizontalPercentage:(double)arg1 ;
@end

