/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNImageBasedRequest.h>

@interface VNCreateSmartCamprintRequest : VNImageBasedRequest

@property (assign,nonatomic) BOOL returnAllResults; 
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)returnAllResults;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(void)setReturnAllResults:(BOOL)arg1 ;
@end

