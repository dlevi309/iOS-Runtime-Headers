/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPTextBox : CPRegion {

	double rotationAngle;

}
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)bounds;
-(BOOL)isRotated;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)accept:(id)arg1 ;
-(BOOL)isBoxRegion;
@end

