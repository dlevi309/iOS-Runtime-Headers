/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

