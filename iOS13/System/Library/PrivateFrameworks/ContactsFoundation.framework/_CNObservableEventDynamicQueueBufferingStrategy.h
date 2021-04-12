/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/_CNObservableEventBufferingStrategy.h>

@class CNQueue;

@interface _CNObservableEventDynamicQueueBufferingStrategy : _CNObservableEventBufferingStrategy {

	CNQueue* _queue;

}

@property (nonatomic,readonly) CNQueue * queue;              //@synthesize queue=_queue - In the implementation block
-(CNQueue *)queue;
-(id)initWithQueue:(id)arg1 ;
-(id)allEvents;
-(void)addEvent:(id)arg1 ;
-(BOOL)isSequenceTerminated;
@end

