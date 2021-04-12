/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/


@protocol OS_dispatch_queue;
@class NSOrderedSet, NSObject;

@interface NTSourceAvailabilityManager : NSObject {

	/*^block*/id _preferredSourceChangedNotificationBlock;
	Class _preferredSourceFetchDescriptorClass;
	NSOrderedSet* _availabilityEntriesInPreferredOrder;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) NSOrderedSet * availabilityEntriesInPreferredOrder;              //@synthesize availabilityEntriesInPreferredOrder=_availabilityEntriesInPreferredOrder - In the implementation block
@property (assign,nonatomic) Class preferredSourceFetchDescriptorClass;                     //@synthesize preferredSourceFetchDescriptorClass=_preferredSourceFetchDescriptorClass - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id preferredSourceChangedNotificationBlock;                      //@synthesize preferredSourceChangedNotificationBlock=_preferredSourceChangedNotificationBlock - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_recomputePreferredAvailableTodayResultsSource;
-(NSOrderedSet *)availabilityEntriesInPreferredOrder;
-(void)_setPreferredAvailableTodayResultsSource:(Class)arg1 ;
-(Class)preferredSourceFetchDescriptorClass;
-(void)setPreferredSourceFetchDescriptorClass:(Class)arg1 ;
-(id)preferredSourceChangedNotificationBlock;
-(id)initWithAvailabilityEntriesInPreferredOrder:(id)arg1 queue:(id)arg2 ;
-(void)setPreferredSourceChangedNotificationBlock:(id)arg1 ;
-(void)setAvailabilityEntriesInPreferredOrder:(NSOrderedSet *)arg1 ;
@end

