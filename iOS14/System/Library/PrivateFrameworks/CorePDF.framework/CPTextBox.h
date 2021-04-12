/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPTextBox : CPRegion {

	double rotationAngle;

}
-(double)rotationAngle;
-(CGRect)bounds;
-(void)setRotationAngle:(double)arg1 ;
-(id)init;
-(BOOL)isRotated;
-(id)description;
-(void)accept:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isBoxRegion;
@end

