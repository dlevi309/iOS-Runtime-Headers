/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNRequest.h>

@interface VNBurstAnalysisResultsRequest : VNRequest

@property (assign,nonatomic) BOOL includeClusters; 
@property (assign,nonatomic) BOOL includeAllImageIdentifiers; 
@property (assign,nonatomic) BOOL includeAllImageStats; 
+(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)sequencedRequestPreviousObservationsKey;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)includeClusters;
-(void)setIncludeClusters:(BOOL)arg1 ;
-(BOOL)includeAllImageIdentifiers;
-(void)setIncludeAllImageIdentifiers:(BOOL)arg1 ;
-(BOOL)includeAllImageStats;
-(void)setIncludeAllImageStats:(BOOL)arg1 ;
@end

