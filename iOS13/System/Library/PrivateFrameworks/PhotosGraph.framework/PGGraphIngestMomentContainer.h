/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestMoment.h>

@class NSDate, NSString, CLSClueCollection, CLSInvestigationPhotoKitFeeder, NSNumber, PGManager;

@interface PGGraphIngestMomentContainer : NSObject <PGGraphIngestMoment> {

	CLSClueCollection* _clueCollection;
	CLSInvestigationPhotoKitFeeder* _feeder;
	NSNumber* _isInterestingNumber;
	NSNumber* _isSmartInterestingNumber;
	NSNumber* _contentScoreNumber;
	PGManager* _manager;

}

@property (nonatomic,retain) CLSClueCollection * clueCollection;                         //@synthesize clueCollection=_clueCollection - In the implementation block
@property (nonatomic,retain) CLSInvestigationPhotoKitFeeder * feeder;                    //@synthesize feeder=_feeder - In the implementation block
@property (nonatomic,retain) NSNumber * isInterestingNumber;                             //@synthesize isInterestingNumber=_isInterestingNumber - In the implementation block
@property (nonatomic,retain) NSNumber * isSmartInterestingNumber;                        //@synthesize isSmartInterestingNumber=_isSmartInterestingNumber - In the implementation block
@property (nonatomic,retain) NSNumber * contentScoreNumber;                              //@synthesize contentScoreNumber=_contentScoreNumber - In the implementation block
@property (nonatomic,retain) PGManager * manager;                                        //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) BOOL isSmartInteresting; 
@property (nonatomic,readonly) BOOL isInteresting; 
@property (nonatomic,readonly) double contentScore; 
@property (nonatomic,readonly) unsigned long long numberOfItems; 
@property (nonatomic,readonly) unsigned long long numberOfItemsWithPersons; 
@property (nonatomic,readonly) unsigned long long totalNumberOfPersons; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) double inhabitationScore; 
@property (nonatomic,readonly) BOOL hasHigherThanImprovedAssets; 
@property (nonatomic,readonly) BOOL hasAssetsWithInterestingScenes; 
@property (nonatomic,readonly) BOOL containsBetterScoringAsset; 
@property (nonatomic,readonly) BOOL containsNonJunkAssets; 
@property (nonatomic,readonly) unsigned long long numberOfShinyGemItems; 
@property (nonatomic,readonly) unsigned long long numberOfRegularGemItems; 
@property (nonatomic,readonly) double behavioralScore; 
-(NSString *)uuid;
-(PGManager *)manager;
-(void)setManager:(PGManager *)arg1 ;
-(unsigned long long)numberOfItems;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(double)behavioralScore;
-(CLSInvestigationPhotoKitFeeder *)feeder;
-(void)setFeeder:(CLSInvestigationPhotoKitFeeder *)arg1 ;
-(double)contentScore;
-(unsigned long long)numberOfShinyGemItems;
-(unsigned long long)numberOfRegularGemItems;
-(CLSClueCollection *)clueCollection;
-(BOOL)isInteresting;
-(BOOL)isSmartInteresting;
-(unsigned long long)numberOfItemsWithPersons;
-(unsigned long long)totalNumberOfPersons;
-(double)inhabitationScore;
-(BOOL)hasHigherThanImprovedAssets;
-(BOOL)hasAssetsWithInterestingScenes;
-(BOOL)containsBetterScoringAsset;
-(BOOL)containsNonJunkAssets;
-(id)initMomentContainerWithFeeder:(id)arg1 clueCollection:(id)arg2 manager:(id)arg3 ;
-(void)_computeScoresIfNeeded;
-(void)setClueCollection:(CLSClueCollection *)arg1 ;
-(NSNumber *)isInterestingNumber;
-(void)setIsInterestingNumber:(NSNumber *)arg1 ;
-(NSNumber *)isSmartInterestingNumber;
-(void)setIsSmartInterestingNumber:(NSNumber *)arg1 ;
-(NSNumber *)contentScoreNumber;
-(void)setContentScoreNumber:(NSNumber *)arg1 ;
@end

