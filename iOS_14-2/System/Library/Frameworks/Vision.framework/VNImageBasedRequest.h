/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequest.h>
#import <libobjc.A.dylib/VNFaceObservationAcceptingInternal.h>

@class NSArray, NSString;

@interface VNImageBasedRequest : VNRequest <VNFaceObservationAcceptingInternal>

@property (assign,nonatomic) CGRect regionOfInterest; 
@property (nonatomic,copy) NSArray * inputFaceObservations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(CGRect)regionOfInterest;
-(BOOL)isFullCoverageRegionOfInterest;
-(CGRect)regionOfInterestNonIntegralPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(CGRect)regionOfInterestPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)_faceObservationsForRegionOfInterestContainingFaceObservations:(id)arg1 ;
-(void)setRegionOfInterest:(CGRect)arg1 ;
-(NSArray *)inputFaceObservations;
-(BOOL)getOptionalValidatedInputFaceObservations:(id*)arg1 clippedToRegionOfInterest:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(NSString *)description;
-(BOOL)validateConfigurationAndReturnError:(id*)arg1 ;
-(void)setInputFaceObservations:(NSArray *)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
@end

