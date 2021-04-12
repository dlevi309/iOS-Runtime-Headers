/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNImageBasedRequest.h>

@interface VNDetectContoursRequest : VNImageBasedRequest

@property (assign,nonatomic) BOOL forceUseInputCVPixelBufferDirectly; 
@property (assign,nonatomic) BOOL inHierarchy; 
@property (assign,nonatomic) float contrastAdjustment; 
@property (assign,nonatomic) BOOL detectsDarkOnLight; 
@property (assign,nonatomic) BOOL detectDarkOnLight; 
@property (assign,nonatomic) unsigned long long maximumImageDimension; 
+(Class)configurationClass;
-(float)contrastAdjustment;
-(void)setContrastAdjustment:(float)arg1 ;
-(BOOL)detectsDarkOnLight;
-(void)setDetectsDarkOnLight:(BOOL)arg1 ;
-(unsigned long long)maximumImageDimension;
-(void)setMaximumImageDimension:(unsigned long long)arg1 ;
-(BOOL)inHierarchy;
-(void)setInHierarchy:(BOOL)arg1 ;
-(BOOL)forceUseInputCVPixelBufferDirectly;
-(void)setForceUseInputCVPixelBufferDirectly:(BOOL)arg1 ;
-(BOOL)detectDarkOnLight;
-(void)setDetectDarkOnLight:(BOOL)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
@end

