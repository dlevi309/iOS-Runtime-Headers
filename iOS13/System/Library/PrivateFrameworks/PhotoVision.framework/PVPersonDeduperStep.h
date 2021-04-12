/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@protocol PVPersonPromoterDelegate;
@class PVPersonClusterManager, NSDictionary, NSMapTable, PVPersonDeduperProfile, NSString;

@interface PVPersonDeduperStep : NSObject {

	BOOL _shouldStop;
	float _progress;
	PVPersonClusterManager* _personClusterManager;
	NSDictionary* _invalidCandidatesMapping;
	NSMapTable* _mergeRelations;
	id<PVPersonPromoterDelegate> _delegate;
	PVPersonDeduperProfile* _profile;

}

@property (nonatomic,readonly) PVPersonClusterManager * personClusterManager;              //@synthesize personClusterManager=_personClusterManager - In the implementation block
@property (nonatomic,readonly) NSDictionary * invalidCandidatesMapping;                    //@synthesize invalidCandidatesMapping=_invalidCandidatesMapping - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic,__weak) id<PVPersonPromoterDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMapTable * mergeRelations;                                //@synthesize mergeRelations=_mergeRelations - In the implementation block
@property (nonatomic,readonly) PVPersonDeduperProfile * profile;                           //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) BOOL shouldStop;                                              //@synthesize shouldStop=_shouldStop - In the implementation block
@property (assign,nonatomic) float progress;                                               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSString * metricsKey; 
-(NSString *)name;
-(id<PVPersonPromoterDelegate>)delegate;
-(void)setDelegate:(id<PVPersonPromoterDelegate>)arg1 ;
-(float)progress;
-(PVPersonDeduperProfile *)profile;
-(BOOL)shouldStop;
-(void)setShouldStop:(BOOL)arg1 ;
-(void)setProgress:(float)arg1 ;
-(NSString *)metricsKey;
-(BOOL)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3 minAgeType:(unsigned short)arg4 ;
-(void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 resultBlock:(/*^block*/id)arg4 ;
-(PVPersonClusterManager *)personClusterManager;
-(id)initWithPersonClusterManager:(id)arg1 invalidCandidatesMapping:(id)arg2 profile:(id)arg3 ;
-(BOOL)shouldStopWithUpdateBlock:(/*^block*/id)arg1 ;
-(id)_resolveMergeCandidate:(id)arg1 forPerson:(id)arg2 ;
-(id)mergeCandidatePersonsWithUpdateBlock:(/*^block*/id)arg1 ;
-(BOOL)addPotentialMergeCandidateForPerson:(id)arg1 withOtherPerson:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(float)adjustedThreshold:(float)arg1 forMinAgeType:(unsigned short)arg2 ;
-(NSDictionary *)invalidCandidatesMapping;
-(NSMapTable *)mergeRelations;
@end

