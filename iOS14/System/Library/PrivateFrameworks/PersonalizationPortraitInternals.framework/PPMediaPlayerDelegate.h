/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue;
@class PPNamedEntityStore, PPMediaPlayerResponse, NSDate, NSObject;

@interface PPMediaPlayerDelegate : NSObject {

	PPNamedEntityStore* _namedEntityStore;
	double _donationDelaySeconds;
	BOOL _useSGNamedEntityDissector;
	PPMediaPlayerResponse* _pendingDonation;
	NSDate* _pendingDonationTimestamp;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)bundleIdOfCurrentForegroundApp;
-(void)waitForQueueEmpty;
-(id)init;
-(void)_donateDelayedResponse:(id)arg1 timePlayed:(double)arg2 bundleId:(id)arg3 ;
-(id)initWithNamedEntityStore:(id)arg1 donationDelaySeconds:(double)arg2 registersResponseLoading:(BOOL)arg3 useSGNamedEntityDissector:(BOOL)arg4 ;
-(void)_registerForNowPlayingNotifications;
-(void)processResponse:(id)arg1 ;
-(id)getResponse;
@end

