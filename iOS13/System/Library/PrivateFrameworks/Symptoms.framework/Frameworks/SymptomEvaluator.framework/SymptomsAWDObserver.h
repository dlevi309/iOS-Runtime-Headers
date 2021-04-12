/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)observer:(id)arg1 handleEvent:(id)arg2 ;
-(NSMutableArray *)delegates;
-(void)setDelegates:(NSMutableArray *)arg1 ;
-(void)addDelegate:(id)arg1 forEvents:(id)arg2 withQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeDelegate:(id)arg1 withQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAwdObserver:(AWDObserver *)arg1 ;
-(NSMutableSet *)combinedEvents;
-(void)updateAWDObserverRegistrationOnQueueWithCompletion:(/*^block*/id)arg1 completionQueue:(id)arg2 ;
-(AWDObserver *)awdObserver;
-(void)setCombinedEvents:(NSMutableSet *)arg1 ;
@end
