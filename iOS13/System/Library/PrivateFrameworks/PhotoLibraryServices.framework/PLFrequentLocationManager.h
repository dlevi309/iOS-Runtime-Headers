/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSSet, PLRoutineService;

@interface PLFrequentLocationManager : NSObject {

	NSSet* _currentFrequentLocations;
	PLRoutineService* _routineManager;

}

@property (nonatomic,retain) PLRoutineService * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
@property (nonatomic,retain) NSSet * currentFrequentLocations;               //@synthesize currentFrequentLocations=_currentFrequentLocations - In the implementation block
-(id)init;
-(BOOL)frequentLocationsDidChangeFromUpdateWithAllMoments:(id)arg1 ;
-(id)_createFrequentLocationsWithAllMoments:(id)arg1 ;
-(NSSet *)currentFrequentLocations;
-(void)setCurrentFrequentLocations:(NSSet *)arg1 ;
-(PLRoutineService *)routineManager;
-(void)setRoutineManager:(PLRoutineService *)arg1 ;
@end

