/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSDictionary, PGManager, PGSuggestionSession, NSSet;

@interface PGPhotosChallengeMetricEventFetchHelper : NSObject {

	NSDictionary* _questionsByQuestionTypeByEntityType;
	PGManager* _manager;
	PGSuggestionSession* _featuredPhotosSuggestionSession;
	NSDictionary* _assetByAssetIdentifier;
	NSDictionary* _momentUUIDByAssetIdentifier;
	NSDictionary* _activePersonUUIDByPersonIdentifier;
	NSDictionary* _memoryByMemoryIdentifier;
	NSSet* _tripKeyAssetIdentifiers;

}

@property (nonatomic,retain) NSDictionary * questionsByQuestionTypeByEntityType;                 //@synthesize questionsByQuestionTypeByEntityType=_questionsByQuestionTypeByEntityType - In the implementation block
@property (nonatomic,retain) PGManager * manager;                                                //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) PGSuggestionSession * featuredPhotosSuggestionSession;              //@synthesize featuredPhotosSuggestionSession=_featuredPhotosSuggestionSession - In the implementation block
@property (nonatomic,retain) NSDictionary * assetByAssetIdentifier;                              //@synthesize assetByAssetIdentifier=_assetByAssetIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * momentUUIDByAssetIdentifier;                         //@synthesize momentUUIDByAssetIdentifier=_momentUUIDByAssetIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * activePersonUUIDByPersonIdentifier;                  //@synthesize activePersonUUIDByPersonIdentifier=_activePersonUUIDByPersonIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * memoryByMemoryIdentifier;                            //@synthesize memoryByMemoryIdentifier=_memoryByMemoryIdentifier - In the implementation block
@property (nonatomic,retain) NSSet * tripKeyAssetIdentifiers;                                    //@synthesize tripKeyAssetIdentifiers=_tripKeyAssetIdentifiers - In the implementation block
-(id)initWithGraphManager:(id)arg1 ;
-(void)setManager:(PGManager *)arg1 ;
-(PGManager *)manager;
-(id)initForTestingWithQuestions:(id)arg1 assetsByAssetId:(id)arg2 momentUUIDByAssetIdentifier:(id)arg3 activePersonUUIDByPersonIdentifier:(id)arg4 tripKeyAssetIdentifiers:(id)arg5 ;
-(id)questionsForQuestionMetricType:(unsigned short)arg1 ;
-(id)questionsForQuestionType:(unsigned short)arg1 questionEntityType:(unsigned short)arg2 ;
-(void)_prefetchQuestions;
-(void)_buildQuestionsByQuestionTypeByEntityTypeFromQuestions:(id)arg1 ;
-(NSDictionary *)assetByAssetIdentifier;
-(void)_prefetchAssetByAssetIdentifier;
-(NSDictionary *)momentUUIDByAssetIdentifier;
-(void)_prefetchMomentUUIDByAssetIdentifier;
-(NSDictionary *)activePersonUUIDByPersonIdentifier;
-(void)_prefetchActivePersonUUIDByPersonIdentifier;
-(NSDictionary *)memoryByMemoryIdentifier;
-(void)_prefetchMemoryByMemoryIdentifier;
-(NSSet *)tripKeyAssetIdentifiers;
-(void)_prefetchTripKeyAssetIdentifiers;
-(NSDictionary *)questionsByQuestionTypeByEntityType;
-(void)setQuestionsByQuestionTypeByEntityType:(NSDictionary *)arg1 ;
-(PGSuggestionSession *)featuredPhotosSuggestionSession;
-(void)setFeaturedPhotosSuggestionSession:(PGSuggestionSession *)arg1 ;
-(void)setAssetByAssetIdentifier:(NSDictionary *)arg1 ;
-(void)setMomentUUIDByAssetIdentifier:(NSDictionary *)arg1 ;
-(void)setActivePersonUUIDByPersonIdentifier:(NSDictionary *)arg1 ;
-(void)setMemoryByMemoryIdentifier:(NSDictionary *)arg1 ;
-(void)setTripKeyAssetIdentifiers:(NSSet *)arg1 ;
@end

