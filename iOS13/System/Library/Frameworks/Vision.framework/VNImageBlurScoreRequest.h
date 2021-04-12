/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNImageBasedRequest.h>

@interface VNImageBlurScoreRequest : VNImageBasedRequest

@property (assign,nonatomic) unsigned long long maximumIntermediateSideLength; 
@property (assign,nonatomic) unsigned long long blurDeterminationMethod; 
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(unsigned long long)maximumIntermediateSideLength;
-(void)setMaximumIntermediateSideLength:(unsigned long long)arg1 ;
-(unsigned long long)blurDeterminationMethod;
-(void)setBlurDeterminationMethod:(unsigned long long)arg1 ;
@end

