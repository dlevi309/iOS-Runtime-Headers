/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>

@protocol OS_dispatch_queue;
@class PPNamedEntityStore, MPRequestResponseController, MPCPlayerResponse, NSDate, NSObject, NSString;

@interface PPPortraitMediaPlayerDelegate : NSObject <MPRequestResponseControllerDelegate> {

	PPNamedEntityStore* _namedEntityStore;
	double _donationDelaySeconds;
	BOOL _useSGNamedEntityDissector;
	MPRequestResponseController* _requestController;
	MPCPlayerResponse* _pendingDonation;
	NSDate* _pendingDonationTimestamp;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bundleIdOfCurrentForegroundApp;
+(BOOL)_response:(id)arg1 isEqualTo:(id)arg2 ;
+(id)_setupRequest;
-(id)init;
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2 ;
-(void)processResponse:(id)arg1 ;
-(id)initWithNamedEntityStore:(id)arg1 donationDelaySeconds:(double)arg2 registersResponseLoading:(BOOL)arg3 useSGNamedEntityDissector:(BOOL)arg4 ;
-(void)_donateDelayedResponse:(id)arg1 timePlayed:(double)arg2 bundleId:(id)arg3 ;
-(void)waitForQueueEmpty;
@end

