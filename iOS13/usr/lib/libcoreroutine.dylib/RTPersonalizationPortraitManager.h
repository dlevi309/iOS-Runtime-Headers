/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface RTPersonalizationPortraitManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)fetchRecentLocationDonationsSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchRecentLocationDonationsSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationNamesStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)feedbackUsedNamedEntities:(id)arg1 ;
@end

