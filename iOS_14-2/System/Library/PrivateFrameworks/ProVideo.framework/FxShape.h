/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxShape : NSObject {

	FxShapePriv* _priv;

}
+(id)shapeWithRect:(CGRect)arg1 ;
+(id)infiniteShape;
-(CGRect)extent;
-(id)initWithRect:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)isInfinite;
-(id)initWithInfiniteBounds;
-(id)intersectWithShape:(id)arg1 ;
@end
