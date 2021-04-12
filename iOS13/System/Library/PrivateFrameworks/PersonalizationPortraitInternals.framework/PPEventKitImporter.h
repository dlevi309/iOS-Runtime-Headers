/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PPLocalEventStore, PPLocalNamedEntityStore, PPLocalLocationStore, SGSqlEntityStore, SGURLDissector, SGNamedEntityDissector, SGDataDetectorDissector;

@interface PPEventKitImporter : NSObject {

	PPLocalEventStore* _eventStore;
	PPLocalNamedEntityStore* _namedEntityStore;
	PPLocalLocationStore* _locationStore;
	SGSqlEntityStore* _urlStore;
	SGURLDissector* _urlDissector;
	SGNamedEntityDissector* _neDissector;
	SGDataDetectorDissector* _ddDissector;
	atomic_flag _fullImportInProgress;

}
+(id)defaultInstance;
+(BOOL)_shouldImport;
-(id)init;
-(BOOL)_flush;
-(id)initWithEventStore:(id)arg1 namedEntityStore:(id)arg2 locationStore:(id)arg3 urlStore:(id)arg4 urlDissector:(id)arg5 namedEntityDissector:(id)arg6 dataDetectorDissector:(id)arg7 ;
-(BOOL)_setDissectorsFromPipeline;
-(void)importEventData;
-(void)importEventDataWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(void)importEvent:(id)arg1 ;
-(void)_importEvent:(id)arg1 ;
-(void)_donateEntitiesForPropertiesOfEvent:(id)arg1 source:(id)arg2 ;
-(id)_entitiesFromPropertiesOfEvent:(id)arg1 ;
-(void)_dissectAndDonateEntitiesFromRawTextOfEvent:(id)arg1 source:(id)arg2 ;
-(void)_donateLocationFromPreferredLocationOfEvent:(id)arg1 source:(id)arg2 ;
-(void)_dissectAndDonateURLsFromEvent:(id)arg1 source:(id)arg2 ;
-(void)_donateURLContainer:(id)arg1 ;
-(void)_donateEntityContainer:(id)arg1 ;
-(BOOL)deleteAllExtractions;
-(BOOL)_deleteOldEntities;
-(BOOL)_deleteOldLocations;
@end

