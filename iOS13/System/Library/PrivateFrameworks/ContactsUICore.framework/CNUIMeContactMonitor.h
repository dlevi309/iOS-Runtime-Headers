/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id<CNReaderWriterScheduler>)lock;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setLock:(id<CNReaderWriterScheduler>)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(void)startMonitoring;
-(id<CNMeContactComparisonStrategy>)strategy;
-(void)setStrategy:(id<CNMeContactComparisonStrategy>)arg1 ;
-(id)initWithContactStore:(id)arg1 ;
-(BOOL)isMeContact:(id)arg1 ;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(id)initWithComparisonStrategy:(id)arg1 ;
-(id)initWithComparisonStrategy:(id)arg1 contactStore:(id)arg2 ;
-(id)initWithComparisonStrategy:(id)arg1 contactStore:(id)arg2 notificationCenter:(id)arg3 schedulerProvider:(id)arg4 ;
-(void)meChanged:(id)arg1 ;
-(NSArray *)meContactIdentifiers;
-(id<CNCancelable>)meNotificationToken;
-(void)setMeNotificationToken:(id<CNCancelable>)arg1 ;
@end

