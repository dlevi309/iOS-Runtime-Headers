/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@protocol PVPersonPromoterDelegate;
@class PVPersonClusterManager, NSDictionary, PVPersonDeduperProfile, PVPersonPromoter;

@interface PVPersonDeduper : NSObject {

	PVPersonClusterManager* _personClusterManager;
	NSDictionary* _invalidCandidatesMapping;
	PVPersonDeduperProfile* _profile;
	id<PVPersonPromoterDelegate> _delegate;
	PVPersonPromoter* _personPromoter;

}

@property (assign,nonatomic,__weak) PVPersonPromoter * personPromoter;                  //@synthesize personPromoter=_personPromoter - In the implementation block
@property (assign,nonatomic,__weak) id<PVPersonPromoterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PVPersonPromoterDelegate>)delegate;
-(void)setDelegate:(id<PVPersonPromoterDelegate>)arg1 ;
-(PVPersonPromoter *)personPromoter;
-(void)setPersonPromoter:(PVPersonPromoter *)arg1 ;
-(id)initWithPersonClusterManager:(id)arg1 andInvalidCandidatesMapping:(id)arg2 profile:(id)arg3 ;
-(void)_executeStepsInSequences:(id)arg1 forPersons:(id)arg2 andOtherPersons:(id)arg3 updateBlock:(/*^block*/id)arg4 resultBlock:(/*^block*/id)arg5 ;
-(id)basicSequence;
-(id)dedupeUnverifiedPersons:(id)arg1 withVerifiedPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(id)dedupeUnverifiedPersons:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(id)dedupeNewVerifiedPersons:(id)arg1 withExistingVerifiedPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
@end

