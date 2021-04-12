/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLManagedAsset;

@interface PLComputedAssetAttributes : PLManagedObject

@property (nonatomic,retain) PLManagedAsset * asset; 
@property (assign,nonatomic) float wellFramedSubjectScore; 
@property (assign,nonatomic) float wellChosenSubjectScore; 
@property (assign,nonatomic) float tastefullyBlurredScore; 
@property (assign,nonatomic) float sharplyFocusedSubjectScore; 
@property (assign,nonatomic) float wellTimedShotScore; 
@property (assign,nonatomic) float pleasantLightingScore; 
@property (assign,nonatomic) float pleasantReflectionsScore; 
@property (assign,nonatomic) float harmoniousColorScore; 
@property (assign,nonatomic) float livelyColorScore; 
@property (assign,nonatomic) float pleasantSymmetryScore; 
@property (assign,nonatomic) float pleasantPatternScore; 
@property (assign,nonatomic) float immersivenessScore; 
@property (assign,nonatomic) float pleasantPerspectiveScore; 
@property (assign,nonatomic) float pleasantPostProcessingScore; 
@property (assign,nonatomic) float noiseScore; 
@property (assign,nonatomic) float failureScore; 
@property (assign,nonatomic) float pleasantCompositionScore; 
@property (assign,nonatomic) float interestingSubjectScore; 
@property (assign,nonatomic) float intrusiveObjectPresenceScore; 
@property (assign,nonatomic) float pleasantCameraTiltScore; 
@property (assign,nonatomic) float lowLight; 
@property (assign,nonatomic) float behavioralScore; 
@property (assign,nonatomic) float interactionScore; 
+(id)fetchRequest;
+(id)entityName;
-(void)setPropertiesFromImageAestheticsObservation:(id)arg1 ;
@end

