/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CPCopying.h>

@class CPZoneBorder;

@interface CPZoneBorderIntersection : NSObject <NSCopying, CPCopying> {

	CGRect intersectionRect;
	CPZoneBorder* intersectingBorder;
	BOOL forwardVector;
	BOOL backwardVector;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initSuper;
-(void)setIntersectionRect:(CGRect)arg1 ;
-(void)setIntersectingBorder:(id)arg1 ;
-(long long)comparePositionLengthwise:(id)arg1 ;
-(id)intersectingBorder;
-(CGRect)intersectionRect;
-(BOOL)forwardVector;
-(BOOL)backwardVector;
-(void)setForwardVector:(BOOL)arg1 ;
-(void)setBackwardVector:(BOOL)arg1 ;
@end

