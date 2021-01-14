/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/AWDObserverDelegate.h>

@protocol OS_dispatch_queue;
@class AWDObserver, NSMutableArray, NSMutableSet, NSObject, NSString;

@interface SymptomsAWDObserver : NSObject <AWDObserverDelegate> {

	AWDObserver* _awdObserver;
	NSMutableArray* _delegates;
	NSMutableSet* _combinedEvents;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) AWDObserver * awdObserver;                       //@synthesize awdObserver=_awdObserver - In the implementation block
@property (nonatomic,retain) NSMutableArray * delegates;                      //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSMutableSet * combinedEvents;                   //@synthesize combinedEvents=_combinedEvents - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSMutableArray *)delegates;
-(void)setDelegates:(NSMutableArray *)arg1 ;
-(id)init;
-(void)addDelegate:(id)arg1 forEvents:(id)arg2 withQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)description;
-(void)observer:(id)arg1 handleEvent:(id)arg2 ;
-(AWDObserver *)awdObserver;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)updateAWDObserverRegistrationOnQueueWithCompletion:(/*^block*/id)arg1 completionQueue:(id)arg2 ;
-(void)setCombinedEvents:(NSMutableSet *)arg1 ;
-(NSMutableSet *)combinedEvents;
-(void)removeDelegate:(id)arg1 withQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAwdObserver:(AWDObserver *)arg1 ;
-(void)dealloc;
@end

