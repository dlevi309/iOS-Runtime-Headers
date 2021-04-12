/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestMoment.h>

@class NSDate, NSString, CLSClueCollection, CLSInvestigationPhotoKitFeeder, NSNumber, PGManager;

@interface PGGraphIngestMomentContainer : NSObject <PGGraphIngestMoment> {

	CLSClueCollection* _clueCollection;
	CLSInvestigationPhotoKitFeeder* _feeder;
	NSNumber* _isInterestingNumber;
	NSNumber* _isInterestingWithAlternateJunkingNumber;
	NSNumber* _isSmartInterestingNumber;
	NSNumber* _contentScoreNumber;
	PGManager* _manager;

}

@property (nonatomic,retain) CLSClueCollection * clueCollection;                                 //@synthesize clueCollection=_clueCollection - In the implementation block
@property (nonatomic,retain) CLSInvestigationPhotoKitFeeder * feeder;                            //@synthesize feeder=_feeder - In the implementation block
@property (nonatomic,retain) NSNumber * isInterestingNumber;                                     //@synthesize isInterestingNumber=_isInterestingNumber - In the implementation block
@property (nonatomic,retain) NSNumber * isInterestingWithAlternateJunkingNumber;                 //@synthesize isInterestingWithAlternateJunkingNumber=_isInterestingWithAlternateJunkingNumber - In the implementation block
@property (nonatomic,retain) NSNumber * isSmartInterestingNumber;                                //@synthesize isSmartInterestingNumber=_isSmartInterestingNumber - In the implementation block
@property (nonatomic,retain) NSNumber * contentScoreNumber;                                      //@synthesize contentScoreNumber=_contentScoreNumber - In the implementation block
@property (nonatomic,retain) PGManager * manager;                                                //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) BOOL isSmartInteresting; 
@property (nonatomic,readonly) BOOL isInteresting; 
@property (nonatomic,readonly) BOOL isInterestingWithAlternateJunking; 
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
@property (nonatomic,readonly) double scenesProcessedRatio; 
@property (nonatomic,readonly) double facesProcessedRatio; 
@property (nonatomic,readonly) unsigned long long numberOfAssetsInExtendedCuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInteresting;
-(double)contentScore;
-(BOOL)isSmartInteresting;
-(NSDate *)universalEndDate;
-(BOOL)isInterestingWithAlternateJunking;
-(NSDate *)localStartDate;
-(NSString *)uuid;
-(NSDate *)localEndDate;
-(NSDate *)universalStartDate;
-(unsigned long long)numberOfItems;
-(NSNumber *)contentScoreNumber;
-(void)setManager:(PGManager *)arg1 ;
-(BOOL)hasHigherThanImprovedAssets;
-(double)inhabitationScore;
-(void)setIsInterestingNumber:(NSNumber *)arg1 ;
-(NSNumber *)isInterestingWithAlternateJunkingNumber;
-(void)setContentScoreNumber:(NSNumber *)arg1 ;
-(unsigned long long)numberOfItemsWithPersons;
-(void)setClueCollection:(CLSClueCollection *)arg1 ;
-(BOOL)containsNonJunkAssets;
-(BOOL)containsBetterScoringAsset;
-(CLSClueCollection *)clueCollection;
-(NSNumber *)isInterestingNumber;
-(PGManager *)manager;
-(unsigned long long)numberOfRegularGemItems;
-(void)setIsSmartInterestingNumber:(NSNumber *)arg1 ;
-(CLSInvestigationPhotoKitFeeder *)feeder;
-(void)setIsInterestingWithAlternateJunkingNumber:(NSNumber *)arg1 ;
-(void)_computeScoresIfNeeded;
-(unsigned long long)numberOfAssetsInExtendedCuration;
-(NSNumber *)isSmartInterestingNumber;
-(unsigned long long)totalNumberOfPersons;
-(unsigned long long)numberOfShinyGemItems;
-(void)setFeeder:(CLSInvestigationPhotoKitFeeder *)arg1 ;
-(BOOL)hasAssetsWithInterestingScenes;
-(id)initMomentContainerWithFeeder:(id)arg1 clueCollection:(id)arg2 manager:(id)arg3 ;
-(double)behavioralScore;
-(double)scenesProcessedRatio;
-(double)facesProcessedRatio;
@end

