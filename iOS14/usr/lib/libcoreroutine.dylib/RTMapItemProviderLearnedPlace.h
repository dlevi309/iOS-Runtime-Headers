/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTMapItemProviderBase.h>
#import <libobjc.A.dylib/RTMapItemProvider.h>

@class RTLearnedLocationStore, RTMapItemProviderLearnedPlaceParameters, NSString;

@interface RTMapItemProviderLearnedPlace : RTMapItemProviderBase <RTMapItemProvider> {

	RTLearnedLocationStore* _learnedLocationStore;
	RTMapItemProviderLearnedPlaceParameters* _parameters;

}

@property (nonatomic,retain) RTLearnedLocationStore * learnedLocationStore;                            //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (nonatomic,copy,readonly) RTMapItemProviderLearnedPlaceParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RTMapItemProviderLearnedPlaceParameters *)parameters;
-(RTLearnedLocationStore *)learnedLocationStore;
-(id)init;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 learnedLocationStore:(id)arg3 ;
-(id)mapItemsWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 learnedLocationStore:(id)arg3 parameters:(id)arg4 ;
-(double)confidenceForPlaceType:(unsigned long long)arg1 ;
-(id)adjustConfidenceAndCollectMetrics:(id)arg1 learnedPlace:(id)arg2 maxConfidence:(double)arg3 ;
-(unsigned long long)coalescedMapItemSourceForPlace:(id)arg1 ;
-(id)learnedPlaceForInferredMapItem:(id)arg1 error:(id*)arg2 ;
-(void)setLearnedLocationStore:(RTLearnedLocationStore *)arg1 ;
@end

