/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable, CNCancelable;
@interface _CNSamplingObservable : CNObservable {

	id<CNObservable> _observable;
	id<CNObservable> _sampler;
	id _sample;
	id<CNCancelable> _timer;

}

@property (nonatomic,readonly) id<CNObservable> observable;              //@synthesize observable=_observable - In the implementation block
@property (nonatomic,readonly) id<CNObservable> sampler;                 //@synthesize sampler=_sampler - In the implementation block
@property (retain) id sample;                                            //@synthesize sample=_sample - In the implementation block
@property (retain) id<CNCancelable> timer;                               //@synthesize timer=_timer - In the implementation block
-(id<CNCancelable>)timer;
-(void)setTimer:(id<CNCancelable>)arg1 ;
-(id)subscribe:(id)arg1 ;
-(id<CNObservable>)observable;
-(id)initWithObservable:(id)arg1 sampler:(id)arg2 ;
-(id<CNObservable>)sampler;
-(void)sendSampleToObserver:(id)arg1 ;
-(void)receiveResult:(id)arg1 ;
-(void)setSample:(id)arg1 ;
-(id)sample;
@end

