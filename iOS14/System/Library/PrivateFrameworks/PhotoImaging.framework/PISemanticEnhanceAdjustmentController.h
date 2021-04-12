/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PIAdjustmentController.h>

@class NSArray;

@interface PISemanticEnhanceAdjustmentController : PIAdjustmentController

@property (assign,nonatomic) double intensity; 
@property (nonatomic,readonly) long long scene; 
@property (nonatomic,readonly) double sceneConfidence; 
@property (nonatomic,copy,readonly) NSArray * boundingBoxes; 
+(id)intensityKey;
+(id)faceBoundingBoxesKey;
+(id)boundingBoxesKey;
+(id)sceneConfidenceKey;
+(id)sceneLabelKey;
+(id)genericLandscapeSceneLabel;
+(id)sunriseSunsetSceneLabel;
+(id)platedFoodSceneLabel;
-(long long)scene;
-(double)intensity;
-(void)setIntensity:(double)arg1 ;
-(void)setFaceBoundingBoxesFromObservations:(id)arg1 orientation:(long long)arg2 ;
-(void)setScene:(long long)arg1 confidence:(double)arg2 ;
-(void)setBoundingBoxesFromObservations:(id)arg1 orientation:(long long)arg2 ;
-(NSArray *)boundingBoxes;
-(BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2 ;
-(double)sceneConfidence;
@end

