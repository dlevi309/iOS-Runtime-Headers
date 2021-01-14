/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@protocol CNMeContactComparisonStrategy, CNReaderWriterScheduler, CNCancelable;
@class CNContactStore, NSNotificationCenter, NSArray;

@interface CNUIMeContactMonitor : NSObject {

	id<CNMeContactComparisonStrategy> _strategy;
	CNContactStore* _contactStore;
	NSNotificationCenter* _notificationCenter;
	id<CNReaderWriterScheduler> _lock;
	id<CNCancelable> _meNotificationToken;

}

@property (nonatomic,retain) id<CNMeContactComparisonStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                           //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * notificationCenter;               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) id<CNReaderWriterScheduler> lock;                        //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) id<CNCancelable> meNotificationToken;                    //@synthesize meNotificationToken=_meNotificationToken - In the implementation block
@property (nonatomic,readonly) NSArray * meContactIdentifiers; 
+(id)unifiedMeContactMonitor;
+(id)makeMeContactMonitor;
+(id)makeUnifiedMeContactMonitor;
+(id)meContactMonitor;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(void)setStrategy:(id<CNMeContactComparisonStrategy>)arg1 ;
-(CNContactStore *)contactStore;
-(id<CNMeContactComparisonStrategy>)strategy;
-(id)init;
-(NSNotificationCenter *)notificationCenter;
-(void)startMonitoring;
-(id<CNReaderWriterScheduler>)lock;
-(void)setLock:(id<CNReaderWriterScheduler>)arg1 ;
-(BOOL)isMeContact:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 ;
-(void)dealloc;
-(id)initWithComparisonStrategy:(id)arg1 ;
-(id)initWithComparisonStrategy:(id)arg1 contactStore:(id)arg2 ;
-(id)initWithComparisonStrategy:(id)arg1 contactStore:(id)arg2 notificationCenter:(id)arg3 schedulerProvider:(id)arg4 ;
-(void)meChanged:(id)arg1 ;
-(NSArray *)meContactIdentifiers;
-(id<CNCancelable>)meNotificationToken;
-(void)setMeNotificationToken:(id<CNCancelable>)arg1 ;
@end

