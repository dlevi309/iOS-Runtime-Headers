/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNSchedulerProvider;
@class CNObservable;

@interface _CNFlatMapObservable : CNObservable {

	CNObservable* _observable;
	/*^block*/id _decoratorGenerator;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) CNObservable * observable;                              //@synthesize observable=_observable - In the implementation block
@property (nonatomic,copy,readonly) id decoratorGenerator;                             //@synthesize decoratorGenerator=_decoratorGenerator - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
+(id)concatMapWithObservable:(id)arg1 transform:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
+(id)flatMapWithObservable:(id)arg1 transform:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
+(id)observableWithObservable:(id)arg1 transform:(/*^block*/id)arg2 decoratorGenerator:(/*^block*/id)arg3 schedulerProvider:(id)arg4 ;
-(CNObservable *)observable;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 transform:(/*^block*/id)arg2 decoratorGenerator:(/*^block*/id)arg3 schedulerProvider:(id)arg4 ;
-(id)subscribeInnerObservable:(id)arg1 observer:(id)arg2 context:(id)arg3 ;
-(id)decoratorGenerator;
@end

