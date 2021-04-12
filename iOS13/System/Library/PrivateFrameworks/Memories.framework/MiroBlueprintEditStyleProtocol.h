/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class NSArray, NSDictionary, NSString;


@protocol MiroBlueprintEditStyleProtocol <NSObject>
@property (nonatomic,readonly) NSArray * burstStyleNames; 
@property (nonatomic,readonly) NSDictionary * healingEditTransitionDictionary; 
@property (nonatomic,readonly) NSArray * transitionsAsDictionaries; 
@property (nonatomic,readonly) NSArray * multiUpTransitionsAsDictionaries; 
@property (nonatomic,readonly) NSArray * multiUpTransitionDictionaries; 
@property (nonatomic,readonly) NSArray * expandedMultiUpTransitionDictionaries; 
@property (nonatomic,readonly) double maxZoomLevel; 
@property (nonatomic,readonly) BOOL extremeZoomAllowed; 
@property (nonatomic,readonly) NSArray * allowedCropTreatments; 
@property (nonatomic,readonly) BOOL defaultCameraMotionIsPan; 
@property (nonatomic,readonly) BOOL sweepingPansAllowed; 
@property (nonatomic,readonly) BOOL centerOnFrame; 
@property (nonatomic,readonly) BOOL healingTransitionsAllowed; 
@property (nonatomic,readonly) NSString * sequentialNUpEffect; 
@property (nonatomic,readonly) double hardCutPercentage; 
@property (nonatomic,readonly) double kenBurnsAnyStillPercentage; 
@required
-(double)maxZoomLevel;
-(NSArray *)transitionsAsDictionaries;
-(NSArray *)expandedMultiUpTransitionDictionaries;
-(NSDictionary *)healingEditTransitionDictionary;
-(NSArray *)multiUpTransitionsAsDictionaries;
-(BOOL)centerOnFrame;
-(double)kenBurnsAnyStillPercentage;
-(NSArray *)allowedCropTreatments;
-(NSString *)sequentialNUpEffect;
-(BOOL)defaultCameraMotionIsPan;
-(BOOL)sweepingPansAllowed;
-(BOOL)healingTransitionsAllowed;
-(double)hardCutPercentage;
-(NSArray *)multiUpTransitionDictionaries;
-(NSArray *)burstStyleNames;
-(BOOL)extremeZoomAllowed;

@end

