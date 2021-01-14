/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLMomentGenerationDataManagement;
@class NSSet;

@interface PLFrequentLocationManager : NSObject {

	BOOL _invalidateCurrentFrequentLocations;
	id<PLMomentGenerationDataManagement> _momentGenerationDataManager;
	NSSet* _currentFrequentLocations;

}

@property (assign,nonatomic,__weak) id<PLMomentGenerationDataManagement> momentGenerationDataManager;              //@synthesize momentGenerationDataManager=_momentGenerationDataManager - In the implementation block
@property (nonatomic,retain) NSSet * currentFrequentLocations;                                                     //@synthesize currentFrequentLocations=_currentFrequentLocations - In the implementation block
-(id)initWithMomentGenerationDataManager:(id)arg1 ;
-(void)setCurrentFrequentLocations:(NSSet *)arg1 ;
-(id<PLMomentGenerationDataManagement>)momentGenerationDataManager;
-(id)_createFrequentLocationsWithAllMoments:(id)arg1 ;
-(void)invalidateCurrentFrequentLocations;
-(void)setMomentGenerationDataManager:(id<PLMomentGenerationDataManagement>)arg1 ;
-(NSSet *)currentFrequentLocations;
-(BOOL)frequentLocationsDidChangeFromUpdateWithAllMoments:(id)arg1 ;
@end

