/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/PHMediaFormatConversionRequest.h>

@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest
-(BOOL)isCompositeRequest;
-(void)setupProgress;
-(void)preflightWithConversionManager:(id)arg1 ;
-(BOOL)requiresLocationMetadataChange;
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

