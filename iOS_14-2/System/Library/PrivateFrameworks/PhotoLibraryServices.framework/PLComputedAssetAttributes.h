/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)entityName;
+(id)fetchRequest;
-(void)setPropertiesFromImageAestheticsObservation:(id)arg1 ;
@end

