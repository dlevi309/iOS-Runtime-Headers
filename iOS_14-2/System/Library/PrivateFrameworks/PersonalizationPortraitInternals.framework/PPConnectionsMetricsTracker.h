/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue;
@class NSObject, PETScalarEventTracker, PETGoalConversionEventTracker, PETDistributionEventTracker;

@interface PPConnectionsMetricsTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PETScalarEventTracker* _opportunityTracker;
	PETGoalConversionEventTracker* _conversionTracker;
	PETScalarEventTracker* _dismissalTracker;
	PETDistributionEventTracker* _timingTracker;
	PETScalarEventTracker* _donationTracker;
	PETScalarEventTracker* _pasteboardTracker;

}

@property (nonatomic,retain) PETScalarEventTracker * opportunityTracker;                     //@synthesize opportunityTracker=_opportunityTracker - In the implementation block
@property (nonatomic,retain) PETGoalConversionEventTracker * conversionTracker;              //@synthesize conversionTracker=_conversionTracker - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * dismissalTracker;                       //@synthesize dismissalTracker=_dismissalTracker - In the implementation block
@property (nonatomic,retain) PETDistributionEventTracker * timingTracker;                    //@synthesize timingTracker=_timingTracker - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * donationTracker;                        //@synthesize donationTracker=_donationTracker - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * pasteboardTracker;                      //@synthesize pasteboardTracker=_pasteboardTracker - In the implementation block
+(id)sharedInstance;
+(id)donationSourceFromBundleID:(id)arg1 ;
+(id)triggerFromCriteria:(id)arg1 ;
+(id)consumerStringForConsumerType:(unsigned long long)arg1 ;
-(PETScalarEventTracker *)pasteboardTracker;
-(id)init;
-(void)setTimingTracker:(PETDistributionEventTracker *)arg1 ;
-(PETDistributionEventTracker *)timingTracker;
-(void)trackTimingForConsumer:(id)arg1 time:(unsigned long long)arg2 ;
-(void)trackPasteboardItemFromBundleId:(id)arg1 hasAddress:(BOOL)arg2 isEligible:(BOOL)arg3 ;
-(void)setDonationTracker:(PETScalarEventTracker *)arg1 ;
-(PETScalarEventTracker *)donationTracker;
-(void)setOpportunityTracker:(PETScalarEventTracker *)arg1 ;
-(void)setDismissalTracker:(PETScalarEventTracker *)arg1 ;
-(void)trackOpportunityForConsumer:(id)arg1 trigger:(id)arg2 targetApp:(id)arg3 ;
-(PETGoalConversionEventTracker *)conversionTracker;
-(void)setPasteboardTracker:(PETScalarEventTracker *)arg1 ;
-(void)trackDonationFromBundleId:(id)arg1 source:(id)arg2 hasLatLon:(BOOL)arg3 isEligible:(BOOL)arg4 ;
-(void)trackDismissalForConsumer:(id)arg1 source:(id)arg2 trigger:(id)arg3 originatingApp:(id)arg4 targetApp:(id)arg5 ;
-(PETScalarEventTracker *)dismissalTracker;
-(void)setConversionTracker:(PETGoalConversionEventTracker *)arg1 ;
-(id)privacyFriendlyBundleIdentifierWith:(id)arg1 ;
-(PETScalarEventTracker *)opportunityTracker;
-(void)trackConversionGoalForConsumer:(id)arg1 source:(id)arg2 trigger:(id)arg3 originatingApp:(id)arg4 targetApp:(id)arg5 converted:(BOOL)arg6 ;
@end

