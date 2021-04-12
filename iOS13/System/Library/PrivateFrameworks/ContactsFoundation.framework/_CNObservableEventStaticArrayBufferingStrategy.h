/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/_CNObservableEventBufferingStrategy.h>

@class NSArray;

@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy {

	NSArray* _events;

}

@property (nonatomic,readonly) NSArray * events;              //@synthesize events=_events - In the implementation block
-(id)allEvents;
-(NSArray *)events;
-(void)addEvent:(id)arg1 ;
-(id)initWithEvents:(id)arg1 ;
-(BOOL)isSequenceTerminated;
@end

