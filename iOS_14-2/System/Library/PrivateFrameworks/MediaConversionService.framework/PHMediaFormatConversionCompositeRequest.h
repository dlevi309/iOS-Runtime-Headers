/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/PHMediaFormatConversionRequest.h>

@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest
-(BOOL)isCompositeRequest;
-(void)setupProgress;
-(void)preflightWithConversionManager:(id)arg1 ;
-(BOOL)requiresLocationMetadataChange;
-(BOOL)requiresCreationDateMetadataChange;
-(BOOL)requiresCaptionMetadataChange;
-(BOOL)requiresAccessibilityDescriptionMetadataChange;
-(BOOL)requiresFormatConversion;
-(void)didFinishProcessing;
-(void)didPreflightSubrequest:(id)arg1 ;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(void)postProcessSuccessfulCompositeRequest;
-(void)propagateRequestOptionsToSubrequests;
-(BOOL)areAllSubrequestsPreflighted;
-(id)compositeRequestCommonInitWithError:(id*)arg1 ;
@end

