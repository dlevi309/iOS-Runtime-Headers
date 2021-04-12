/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMMobileAssetEvaluationNode.h>

@class AXShotflowDetector;

@interface AXMAXElementDetectorNode : AXMMobileAssetEvaluationNode {

	int _ANODModelVersion;
	AXShotflowDetector* _shotflowDetector;

}

@property (nonatomic,readonly) AXShotflowDetector * shotflowDetector;              //@synthesize shotflowDetector=_shotflowDetector - In the implementation block
@property (assign,nonatomic) int ANODModelVersion;                                 //@synthesize ANODModelVersion=_ANODModelVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
+(id)title;
-(void)_evaluateANOD:(id)arg1 ;
-(double)IoUForbb1:(CGRect)arg1 bb2:(CGRect)arg2 ;
-(void)_initializeShotflowDetector;
-(id)_screenEquivalenceToken:(id)arg1 ;
-(id)_performCrossClassNMSForDetections:(id)arg1 iouThreshold:(double)arg2 ;
-(id)iconPictureModel;
-(id)_imageByWipingTextFromRects:(id)arg1 image:(id)arg2 colorSpace:(CGColorSpaceRef)arg3 ciContext:(id)arg4 ;
-(id)_nonMaxSupression:(id)arg1 iouThreshold:(double)arg2 ;
-(AXShotflowDetector *)shotflowDetector;
-(int)ANODModelVersion;
-(void)setANODModelVersion:(int)arg1 ;
-(id)modelResourceNames;
-(id)mlModelClasses;
-(id)mobileAssetType;
-(unsigned long long)minSupportedFormatVersion;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
@end

