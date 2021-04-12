/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARImageBasedTechnique.h>
#import <ARKit/ARTechniqueDelegate.h>

@class ARDepthTechnique, ARDepthEstimationTechnique, NSString;

@interface ARDynamicDepthTechnique : ARImageBasedTechnique <ARTechniqueDelegate> {

	double _lastTimeStamp;
	float _autoSwithThreshold;
	BOOL _useAppleDepth;
	ARDepthTechnique* _appleDepthTechnique;
	ARDepthEstimationTechnique* _monocularDepthTechnique;

}

@property (assign) BOOL useAppleDepth;                                                            //@synthesize useAppleDepth=_useAppleDepth - In the implementation block
@property (nonatomic,readonly) ARDepthTechnique * appleDepthTechnique;                            //@synthesize appleDepthTechnique=_appleDepthTechnique - In the implementation block
@property (nonatomic,readonly) ARDepthEstimationTechnique * monocularDepthTechnique;              //@synthesize monocularDepthTechnique=_monocularDepthTechnique - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)processData:(id)arg1 ;
-(id)_fullDescription;
-(void)prepare:(BOOL)arg1 ;
-(void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)technique:(id)arg1 didFailWithError:(id)arg2 ;
-(double)requiredTimeInterval;
-(id)initWithPrioritization:(long long)arg1 temporalSmoothing:(BOOL)arg2 ;
-(BOOL)useAppleDepth;
-(void)setUseAppleDepth:(BOOL)arg1 ;
-(ARDepthTechnique *)appleDepthTechnique;
-(ARDepthEstimationTechnique *)monocularDepthTechnique;
@end

