/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@protocol PVPersonPromoterDelegate, PVPhotoLibraryProtocol;
@class PVPersonClusterManager, NSMutableDictionary, NSNumber, PVPersonPromoterProfile, PVPersonDeduperProfile;

@interface PVPersonPromoter : NSObject {

	BOOL _didAskFaceProcesingProgress;
	float _faceProcessingProgress;
	PVPersonClusterManager* _personClusterManager;
	id<PVPersonPromoterDelegate> _delegate;
	id<PVPhotoLibraryProtocol> _photoLibrary;
	NSMutableDictionary* _metricsReport;
	NSNumber* _quiescentState;
	PVPersonPromoterProfile* _promoterProfile;
	PVPersonDeduperProfile* _deduperProfile;

}

@property (assign,nonatomic,__weak) id<PVPersonPromoterDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<PVPhotoLibraryProtocol> photoLibrary;                    //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) float faceProcessingProgress;                               //@synthesize faceProcessingProgress=_faceProcessingProgress - In the implementation block
@property (assign,nonatomic) BOOL didAskFaceProcesingProgress;                           //@synthesize didAskFaceProcesingProgress=_didAskFaceProcesingProgress - In the implementation block
@property (nonatomic,retain) NSNumber * quiescentState;                                  //@synthesize quiescentState=_quiescentState - In the implementation block
@property (nonatomic,retain) PVPersonClusterManager * personClusterManager;              //@synthesize personClusterManager=_personClusterManager - In the implementation block
@property (nonatomic,retain) PVPersonPromoterProfile * promoterProfile;                  //@synthesize promoterProfile=_promoterProfile - In the implementation block
@property (nonatomic,retain) PVPersonDeduperProfile * deduperProfile;                    //@synthesize deduperProfile=_deduperProfile - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * metricsReport;                      //@synthesize metricsReport=_metricsReport - In the implementation block
+(BOOL)isEnabled;
+(void)setProcessed:(BOOL)arg1 forLibrary:(id)arg2 ;
+(BOOL)hasProcessedForLibrary:(id)arg1 ;
+(id)requestSuggestedMePersonIdentifierAtURL:(id)arg1 withError:(id*)arg2 ;
+(BOOL)_writePersonPromoterInformation:(id)arg1 atURL:(id)arg2 ;
+(id)_personPromoterInformationAtURL:(id)arg1 ;
+(void)cumulativeNormalDistributionWithData:(id)arg1 sigmaFactor:(double)arg2 usingBlock:(/*^block*/id)arg3 ;
+(unsigned long long)numberOfFacesProcessedOnLastRunAtURL:(id)arg1 ;
+(void)probabilityDensityNormalDistributionWithData:(id)arg1 sigmaFactor:(double)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id<PVPersonPromoterDelegate>)delegate;
-(void)setDelegate:(id<PVPersonPromoterDelegate>)arg1 ;
-(void)reportMetrics;
-(id<PVPhotoLibraryProtocol>)photoLibrary;
-(void)setPhotoLibrary:(id<PVPhotoLibraryProtocol>)arg1 ;
-(BOOL)promoteUnverifiedPersonsWithUpdateBlock:(/*^block*/id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 andDelegate:(id)arg2 ;
-(id)advancedStatus;
-(BOOL)isInQuiescentState;
-(double)_personTimespan:(id)arg1 ;
-(id)interestingPersonsFromPersons:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(id)_newPersonDeduperWithVerifiedPersons:(id)arg1 ;
-(id)_verifiedPersonsToProcess;
-(id)_sortedUnverifiedPersonsToDedupForVerifiedPersons:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(BOOL)_personClusterShouldBeVerified:(id)arg1 ;
-(id)_interestingPersonsFromVerifiedPersons:(id)arg1 unverifiedPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(BOOL)_promoteInterestingPersons:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(BOOL)_updateSuggestedMeIdentifierWithPersons:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(id)_graphOrderedPersonsWithPersons:(id)arg1 withAllPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(id)_sortedSocialGroups:(id)arg1 withPersonsByLocalIdentifier:(id)arg2 ;
-(PVPersonClusterManager *)personClusterManager;
-(void)setPersonClusterManager:(PVPersonClusterManager *)arg1 ;
-(NSMutableDictionary *)metricsReport;
-(NSNumber *)quiescentState;
-(void)setQuiescentState:(NSNumber *)arg1 ;
-(float)faceProcessingProgress;
-(void)setFaceProcessingProgress:(float)arg1 ;
-(BOOL)didAskFaceProcesingProgress;
-(void)setDidAskFaceProcesingProgress:(BOOL)arg1 ;
-(PVPersonPromoterProfile *)promoterProfile;
-(void)setPromoterProfile:(PVPersonPromoterProfile *)arg1 ;
-(PVPersonDeduperProfile *)deduperProfile;
-(void)setDeduperProfile:(PVPersonDeduperProfile *)arg1 ;
-(void)incrementMetricForKey:(id)arg1 withValue:(unsigned long long)arg2 ;
@end

