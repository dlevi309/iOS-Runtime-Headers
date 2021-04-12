/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<CNObservable>)observable;
-(id)subscribe:(id)arg1 ;
-(void)setObservable:(id<CNObservable>)arg1 ;
-(void)setScheduler:(id<CNScheduler>)arg1 ;
-(id)initWithObservable:(id)arg1 scheduler:(id)arg2 ;
-(id<CNScheduler>)scheduler;
@end

