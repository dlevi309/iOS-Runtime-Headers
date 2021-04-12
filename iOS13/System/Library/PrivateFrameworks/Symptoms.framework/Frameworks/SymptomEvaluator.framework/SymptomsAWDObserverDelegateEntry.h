/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol SymptomsAWDObserverDelegate, OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface SymptomsAWDObserverDelegateEntry : NSObject {

	id<SymptomsAWDObserverDelegate> _delegate;
	NSMutableSet* _events;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) id<SymptomsAWDObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableSet * events;                                 //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<SymptomsAWDObserverDelegate>)delegate;
-(void)setDelegate:(id<SymptomsAWDObserverDelegate>)arg1 ;
-(NSMutableSet *)events;
-(void)setEvents:(NSMutableSet *)arg1 ;
-(BOOL)matchesDelegate:(id)arg1 ;
@end

