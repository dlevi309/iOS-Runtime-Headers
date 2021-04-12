/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

@class NSArray;


@protocol MDLTransformComponent <MDLComponent>
@property (assign,nonatomic) SCD_Struct_MD1 matrix; 
@property (assign,nonatomic) BOOL resetsTransform; 
@property (nonatomic,readonly) double minimumTime; 
@property (nonatomic,readonly) double maximumTime; 
@property (nonatomic,copy,readonly) NSArray * keyTimes; 
@optional
+(/*function pointer*/void**)globalTransformWithObject:(id)arg1 atTime:(double)arg2;
-(/*function pointer*/void**)localTransformAtTime:(double)arg1;
-(void)setLocalTransform:(/*function pointer*/void*)arg1;
-(void)setLocalTransform:(/*function pointer*/void*)arg1 forTime:(double)arg2;

@required
-(SCD_Struct_MD1)matrix;
-(void)setMatrix:(/*function pointer*/void*)arg1;
-(NSArray *)keyTimes;
-(double)minimumTime;
-(double)maximumTime;
-(BOOL)resetsTransform;
-(void)setResetsTransform:(BOOL)arg1;

@end

