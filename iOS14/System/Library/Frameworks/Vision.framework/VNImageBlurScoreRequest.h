/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNImageBasedRequest.h>

@interface VNImageBlurScoreRequest : VNImageBasedRequest

@property (assign,nonatomic) unsigned long long maximumIntermediateSideLength; 
@property (assign,nonatomic) unsigned long long blurDeterminationMethod; 
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(void)setBlurDeterminationMethod:(unsigned long long)arg1 ;
-(void)setMaximumIntermediateSideLength:(unsigned long long)arg1 ;
-(unsigned long long)maximumIntermediateSideLength;
-(unsigned long long)blurDeterminationMethod;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
@end

