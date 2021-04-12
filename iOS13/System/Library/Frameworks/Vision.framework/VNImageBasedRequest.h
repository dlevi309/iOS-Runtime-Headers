/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequest.h>
#import <libobjc.A.dylib/VNFaceObservationAcceptingInternal.h>

@class NSString, NSArray;

@interface VNImageBasedRequest : VNRequest <VNFaceObservationAcceptingInternal>

@property (assign,nonatomic) CGRect regionOfInterest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * inputFaceObservations; 
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(NSString *)description;
-(void)setInputFaceObservations:(NSArray *)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(NSArray *)inputFaceObservations;
-(BOOL)validateConfigurationAndReturnError:(id*)arg1 ;
-(CGRect)regionOfInterest;
-(void)setRegionOfInterest:(CGRect)arg1 ;
-(BOOL)getOptionalValidatedInputFaceObservations:(id*)arg1 clippedToRegionOfInterest:(BOOL)arg2 error:(id*)arg3 ;
-(id)validatedInputFaceObservationsClippedToRegionOfInterest:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)isFullCoverageRegionOfInterest;
-(CGRect)regionOfInterestNonIntegralPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(CGRect)regionOfInterestPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)_faceObservationsForRegionOfInterestContainingFaceObservations:(id)arg1 ;
@end

