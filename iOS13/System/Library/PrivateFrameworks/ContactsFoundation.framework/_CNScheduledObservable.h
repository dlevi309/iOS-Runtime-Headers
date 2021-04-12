/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable, CNScheduler;
@interface _CNScheduledObservable : CNObservable {

	id<CNObservable> _observable;
	id<CNScheduler> _scheduler;

}

@property (nonatomic,retain) id<CNObservable> observable;              //@synthesize observable=_observable - In the implementation block
@property (nonatomic,retain) id<CNScheduler> scheduler;                //@synthesize scheduler=_scheduler - In the implementation block
-(id<CNScheduler>)scheduler;
-(void)setScheduler:(id<CNScheduler>)arg1 ;
-(id)subscribe:(id)arg1 ;
-(id<CNObservable>)observable;
-(id)initWithObservable:(id)arg1 scheduler:(id)arg2 ;
-(void)setObservable:(id<CNObservable>)arg1 ;
@end

