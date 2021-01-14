/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SymptomsAWDObserverDelegate>)delegate;
-(void)setEvents:(NSMutableSet *)arg1 ;
-(void)setDelegate:(id<SymptomsAWDObserverDelegate>)arg1 ;
-(id)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)matchesDelegate:(id)arg1 ;
-(NSMutableSet *)events;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

