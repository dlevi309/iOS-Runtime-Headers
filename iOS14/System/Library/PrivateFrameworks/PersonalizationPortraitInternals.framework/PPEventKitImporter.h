/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PPLocalEventStore, PPLocalNamedEntityStore, PPLocalLocationStore, SGSqlEntityStore, SGURLDissector, SGNamedEntityDissector;

@interface PPEventKitImporter : NSObject {

	PPLocalEventStore* _eventStore;
	PPLocalNamedEntityStore* _namedEntityStore;
	PPLocalLocationStore* _locationStore;
	SGSqlEntityStore* _urlStore;
	SGURLDissector* _urlDissector;
	SGNamedEntityDissector* _neDissector;
	Class _dataDetectorMatchClass;
	atomic_flag _fullImportInProgress;

}
+(BOOL)_shouldImport;
+(id)defaultInstance;
-(void)_donateLocationFromPreferredLocationOfEvent:(id)arg1 source:(id)arg2 ;
-(void)_donateEntityContainer:(id)arg1 ;
-(id)init;
-(void)importEventData;
-(void)_donateURLContainer:(id)arg1 ;
-(void)importEvent:(id)arg1 ;
-(BOOL)_setDissectorsFromPipeline;
-(void)_importEvent:(id)arg1 ;
-(id)initWithEventStore:(id)arg1 namedEntityStore:(id)arg2 locationStore:(id)arg3 urlStore:(id)arg4 urlDissector:(id)arg5 namedEntityDissector:(id)arg6 dataDetectorMatchClass:(Class)arg7 ;
-(BOOL)_deleteOldLocations;
-(BOOL)_deleteOldEntities;
-(BOOL)_flush;
-(void)_donateEntitiesForPropertiesOfEvent:(id)arg1 source:(id)arg2 ;
-(void)importEventDataWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(void)_dissectAndDonateEntitiesFromRawTextOfEvent:(id)arg1 source:(id)arg2 ;
-(id)_entitiesFromPropertiesOfEvent:(id)arg1 ;
-(void)_dissectAndDonateURLsFromEvent:(id)arg1 source:(id)arg2 ;
-(BOOL)deleteAllExtractions;
@end

