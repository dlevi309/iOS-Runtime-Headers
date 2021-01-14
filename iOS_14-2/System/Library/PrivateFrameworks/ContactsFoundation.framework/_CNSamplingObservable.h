/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<CNObservable>)observable;
-(id<CNCancelable>)timer;
-(id)sample;
-(void)setTimer:(id<CNCancelable>)arg1 ;
-(id<CNObservable>)sampler;
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 sampler:(id)arg2 ;
-(void)setSample:(id)arg1 ;
-(void)sendSampleToObserver:(id)arg1 ;
-(void)receiveResult:(id)arg1 ;
@end

