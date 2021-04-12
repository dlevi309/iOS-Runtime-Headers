/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MeasureFoundation.framework/MeasureFoundation
*/

#import <MeasureFoundation/MeasureFoundation.MeasureObject.h>

@class NSArray;

@interface MeasureFoundation.WorldLine : MeasureFoundation.MeasureObject {

	 lineType;
	 ends;
	 center;
	 snappedPoints;
	 isOnVerticalGuide;
	 identifiersOfObjectsComposedInto;
	 isALineMeasurement;

}

@property (copy,nonatomic) NSArray * identifiersOfObjectsComposedInto; 
-(id)init;
-(NSArray *)identifiersOfObjectsComposedInto;
-(void)setIdentifiersOfObjectsComposedInto:(NSArray *)arg1 ;
@end

