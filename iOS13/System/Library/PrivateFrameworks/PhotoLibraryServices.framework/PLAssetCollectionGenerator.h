/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLLibraryClustererDelegate.h>

@protocol PLMomentGenerationDataManagement;
@class PLFrequentLocationManager, PLLocalCreationDateCreator, NSMutableSet, NSMutableArray, NSDateFormatter, NSString;

@interface PLAssetCollectionGenerator : NSObject <PLLibraryClustererDelegate> {

	id<PLMomentGenerationDataManagement> _manager;
	PLFrequentLocationManager* _frequentLocationManager;
	PLLocalCreationDateCreator* _localCreationDateCreator;
	NSMutableSet* _usedMomentObjectIDs;
	NSMutableSet* _insertedOrUpdatedMoments;
	NSMutableArray* _momentsFromAssetClusters;
	NSDateFormatter* _debugDateFormatter;

}

@property (assign,nonatomic,__weak) id<PLMomentGenerationDataManagement> manager;                //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) PLFrequentLocationManager * frequentLocationManager;                //@synthesize frequentLocationManager=_frequentLocationManager - In the implementation block
@property (nonatomic,retain) PLLocalCreationDateCreator * localCreationDateCreator;              //@synthesize localCreationDateCreator=_localCreationDateCreator - In the implementation block
@property (nonatomic,retain) NSMutableSet * usedMomentObjectIDs;                                 //@synthesize usedMomentObjectIDs=_usedMomentObjectIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * insertedOrUpdatedMoments;                            //@synthesize insertedOrUpdatedMoments=_insertedOrUpdatedMoments - In the implementation block
@property (nonatomic,retain) NSMutableArray * momentsFromAssetClusters;                          //@synthesize momentsFromAssetClusters=_momentsFromAssetClusters - In the implementation block
@property (nonatomic,retain) NSDateFormatter * debugDateFormatter;                               //@synthesize debugDateFormatter=_debugDateFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PLMomentGenerationDataManagement>)manager;
-(void)setManager:(id<PLMomentGenerationDataManagement>)arg1 ;
-(void)logRoutineInformation;
-(id)initWithDataManager:(id)arg1 frequentLocationManager:(id)arg2 localCreationDateCreator:(id)arg3 ;
-(PLFrequentLocationManager *)frequentLocationManager;
-(PLLocalCreationDateCreator *)localCreationDateCreator;
-(NSMutableSet *)insertedOrUpdatedMoments;
-(id)libraryClusterer:(id)arg1 createMomentClustersForAssetClusters:(id)arg2 existingMomentDataForAssets:(id)arg3 ;
-(id)libraryClusterer:(id)arg1 createMonthListForMoments:(id)arg2 month:(long long)arg3 year:(long long)arg4 ;
-(id)libraryClusterer:(id)arg1 createYearListForMoments:(id)arg2 year:(long long)arg3 ;
-(id)processMomentsWithAssets:(id)arg1 affectedMoments:(id)arg2 processMonthsAndYears:(BOOL)arg3 ;
-(id)_processMomentsCollectionsYearsWithAssets:(id)arg1 affectedMoments:(id)arg2 processMonthsAndYears:(BOOL)arg3 ;
-(id)_createMomentOrUpdateForAssetCluster:(id)arg1 existingMomentDataForAssets:(id)arg2 ;
-(id)_createYearListOrAppendMomentsForYear:(long long)arg1 moments:(id)arg2 ;
-(id)_createMonthListOrAppendMomentsForMonth:(long long)arg1 year:(long long)arg2 moments:(id)arg3 ;
-(void)_cleanUpMoment:(id)arg1 ;
-(void)_refreshMonthList:(id)arg1 ;
-(void)_refreshYearListWithMoments:(id)arg1 ;
-(NSDateFormatter *)debugDateFormatter;
-(void)setFrequentLocationManager:(PLFrequentLocationManager *)arg1 ;
-(void)setLocalCreationDateCreator:(PLLocalCreationDateCreator *)arg1 ;
-(NSMutableSet *)usedMomentObjectIDs;
-(void)setUsedMomentObjectIDs:(NSMutableSet *)arg1 ;
-(void)setInsertedOrUpdatedMoments:(NSMutableSet *)arg1 ;
-(NSMutableArray *)momentsFromAssetClusters;
-(void)setMomentsFromAssetClusters:(NSMutableArray *)arg1 ;
-(void)setDebugDateFormatter:(NSDateFormatter *)arg1 ;
@end

