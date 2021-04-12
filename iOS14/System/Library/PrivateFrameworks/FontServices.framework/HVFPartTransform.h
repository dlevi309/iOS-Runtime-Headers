/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
*/


#import <libhvf.dylib/libhvf.dylib-Structs.h>
@interface HVFPartTransform : NSObject {

	HVF_PartTransform* partTransform;

}

@property (assign,nonatomic) CGVector translation; 
@property (assign,nonatomic) double rotation; 
@property (assign,nonatomic) HVFAxisValues* axisValues; 
@property (assign,nonatomic) HVFSubpartTransforms* subpartTransforms; 
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(void)setTranslation:(CGVector)arg1 ;
-(CGVector)translation;
-(id)initForPartAtIndex:(unsigned long long)arg1 withLoader:(/*^block*/id)arg2 ;
-(HVFAxisValues*)axisValues;
-(HVFSubpartTransforms*)subpartTransforms;
-(BOOL)renderToContext:(/*^block*/id)arg1 ;
@end

