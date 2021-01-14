/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MDLTransformComponent.h>

@class CAAnimation, NSArray, NSString;

@interface MDLTransform : NSObject <NSCopying, MDLTransformComponent> {

	MDLAffineTransform* _transform;

}

@property (nonatomic,readonly) CAAnimation * transformAnimation; 
@property (assign,nonatomic)  translation; 
@property (assign,nonatomic)  rotation; 
@property (assign,nonatomic)  shear; 
@property (assign,nonatomic)  scale; 
@property (assign,nonatomic) SCD_Struct_MD1 matrix; 
@property (assign,nonatomic) BOOL resetsTransform; 
@property (nonatomic,readonly) double minimumTime; 
@property (nonatomic,readonly) double maximumTime; 
@property (nonatomic,copy,readonly) NSArray * keyTimes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_MD1)globalTransformWithObject:(id)arg1 atTime:(double)arg2 ;
+(SCD_Struct_MD1)localTransformWithObject:(id)arg1 atTime:(double)arg2 ;
-(SCD_Struct_MD1)matrix;
-(void)setRotation:;
-(id)init;
-()rotation;
-()scale;
-()shear;
-(void)setTranslation:;
-(void)setLocalTransform:(SCD_Struct_MD1)arg1 ;
-(NSArray *)keyTimes;
-()translation;
-(void)setScale:;
-(double)minimumTime;
-(double)maximumTime;
-(void)setMatrix:(SCD_Struct_MD1)arg1 ;
-(void)setIdentity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMatrix:(SCD_Struct_MD1)arg1 ;
-(id)initWithIdentity;
-(SCD_Struct_MD1)rotationMatrixAtTime:(double)arg1 ;
-(SCD_Struct_MD1)localTransformAtTime:(double)arg1 ;
-(BOOL)resetsTransform;
-(void)setResetsTransform:(BOOL)arg1 ;
-(void)setLocalTransform:(SCD_Struct_MD1)arg1 forTime:(double)arg2 ;
-(CAAnimation *)transformAnimation;
-(id)initWithTransformComponent:(id)arg1 ;
-(void)setShear:;
-(2)scaleAtTime:(double)arg1 ;
-(2)shearAtTime:(double)arg1 ;
-(2)translationAtTime:(double)arg1 ;
-(2)rotationAtTime:(double)arg1 ;
-(void)setMatrix:(SCD_Struct_MD1)arg1 forTime:(double)arg2 ;
-(void)setRotation:()arg1 ;
-(void)setShear:()arg1 ;
-(void)setScale:()arg1 ;
-(void)setTranslation:()arg1 ;
-(id)initWithTransformComponent:(id)arg1 resetsTransform:(BOOL)arg2 ;
-(id)initWithMatrix:(SCD_Struct_MD1)arg1 resetsTransform:(BOOL)arg2 ;
@end

