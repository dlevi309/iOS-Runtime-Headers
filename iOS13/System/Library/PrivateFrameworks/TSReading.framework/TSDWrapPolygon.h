/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSDWrapPolygon : NSObject <NSCopying> {

	void* mPolygon;
	BOOL mIntersectsSelf;
	BOOL mComputedSelfIntersection;
	CGRect mBounds;
	BOOL mComputedBounds;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)setPath:(id)arg1 ;
-(CGRect)bounds;
-(id)bezierPath;
-(void*)polygon;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(BOOL)intersectsSelf;
-(void)setIntersectsSelf:(BOOL)arg1 ;
-(void)p_setPolygon:(SCD_Struct_TS76*)arg1 ;
-(void)p_freePolygon;
-(void)p_computeIntersectionState;
-(CGPoint)intersectionPointBetween:(CGPoint)arg1 and:(CGPoint)arg2 ;
-(int)p_countSegments;
@end

