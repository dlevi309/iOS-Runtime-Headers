/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSOrderedSet *)availabilityEntriesInPreferredOrder;
-(void)setPreferredSourceChangedNotificationBlock:(id)arg1 ;
-(id)init;
-(void)_recomputePreferredAvailableTodayResultsSource;
-(void)setPreferredSourceFetchDescriptorClass:(Class)arg1 ;
-(void)_setPreferredAvailableTodayResultsSource:(Class)arg1 ;
-(id)preferredSourceChangedNotificationBlock;
-(void)setAvailabilityEntriesInPreferredOrder:(NSOrderedSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(Class)preferredSourceFetchDescriptorClass;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithAvailabilityEntriesInPreferredOrder:(id)arg1 queue:(id)arg2 ;
@end

