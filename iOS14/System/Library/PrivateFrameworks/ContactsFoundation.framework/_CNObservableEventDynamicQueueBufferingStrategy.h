/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/_CNObservableEventBufferingStrategy.h>

@class CNQueue;

@interface _CNObservableEventDynamicQueueBufferingStrategy : _CNObservableEventBufferingStrategy {

	CNQueue* _queue;

}

@property (nonatomic,readonly) CNQueue * queue;              //@synthesize queue=_queue - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(CNQueue *)queue;
-(BOOL)isSequenceTerminated;
-(id)allEvents;
@end

