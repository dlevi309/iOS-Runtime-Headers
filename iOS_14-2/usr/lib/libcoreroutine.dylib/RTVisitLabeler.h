/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTDefaultsManager, RTPlaceInferenceManager;

@interface RTVisitLabeler : NSObject {

	RTDefaultsManager* _defaultsManager;
	RTPlaceInferenceManager* _placeInferenceManager;

}

@property (nonatomic,readonly) RTDefaultsManager * defaultsManager;                          //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,readonly) RTPlaceInferenceManager * placeInferenceManager;              //@synthesize placeInferenceManager=_placeInferenceManager - In the implementation block
-(RTPlaceInferenceManager *)placeInferenceManager;
-(id)init;
-(RTDefaultsManager *)defaultsManager;
-(id)initWithDefaultsManager:(id)arg1 placeInferenceManager:(id)arg2 ;
-(void)labelVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)labelVisit:(id)arg1 error:(id*)arg2 ;
@end

