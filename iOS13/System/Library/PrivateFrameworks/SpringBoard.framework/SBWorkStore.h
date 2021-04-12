/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject, NSArray;

@interface SBWorkStore : NSObject {

	NSMutableDictionary* _workItemsPerKey;
	NSMutableArray* _keysWithWork;
	NSMutableDictionary* _workExpirationPeriods;
	NSObject*<OS_dispatch_queue> _workQueue;
	unsigned long long _maxWorkPerKey;
	NSMutableArray* _observers;
	NSObject*<OS_dispatch_queue> _observerQueue;
	double _defaultWorkExpirationPeriod;

}

@property (nonatomic,readonly) NSMutableDictionary * workItemsPerKey;              //@synthesize workItemsPerKey=_workItemsPerKey - In the implementation block
@property (nonatomic,readonly) NSMutableArray * observers;                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) unsigned long long maxWorkPerKey;                   //@synthesize maxWorkPerKey=_maxWorkPerKey - In the implementation block
@property (nonatomic,readonly) NSArray * keysWithWork; 
@property (assign,nonatomic) double defaultWorkExpirationPeriod;                   //@synthesize defaultWorkExpirationPeriod=_defaultWorkExpirationPeriod - In the implementation block
-(id)description;
-(id)debugDescription;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSMutableArray *)observers;
-(void)_workQueue_expireWorkForKey:(id)arg1 ;
-(void)_notifyObserversWorkDidChange;
-(id)dequeueWorkForKey:(id)arg1 ;
-(id)initWithMaximumNumberOfWorkItemsPerKey:(unsigned long long)arg1 ;
-(NSArray *)keysWithWork;
-(void)addWorkItem:(id)arg1 forKey:(id)arg2 ;
-(void)purgeWorkForKey:(id)arg1 ;
-(void)setWorkExpirationPeriod:(double)arg1 forKey:(id)arg2 ;
-(double)defaultWorkExpirationPeriod;
-(void)setDefaultWorkExpirationPeriod:(double)arg1 ;
-(NSMutableDictionary *)workItemsPerKey;
-(unsigned long long)maxWorkPerKey;
@end

