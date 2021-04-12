/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDPathManipulation.h>

@class NSMutableDictionary, NSMutableArray;

@interface TSDBrushPathManipulation : TSDPathManipulation {

	CGPathRef mBrushStroke;
	double mRepeatLength;
	NSMutableDictionary* mSections;
	NSMutableArray* mMiddleSections;
	NSMutableArray* mSmallSections;
	double mSmallLimitWidth;
	BOOL mSplitAtSharpAngles;

}
@end

