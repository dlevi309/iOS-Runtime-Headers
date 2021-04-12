/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;
@interface _CNOnEmptyObservable : CNObservable {

	id<CNObservable> _observable;
	id<CNObservable> _nextObservable;
	BOOL _observableIsEmpty;

}

@property (nonatomic,retain) id<CNObservable> observable;              //@synthesize observable=_observable - In the implementation block
-(id<CNObservable>)observable;
-(id)subscribe:(id)arg1 ;
-(id)subscribeNextObservable:(id)arg1 ;
-(void)setObservable:(id<CNObservable>)arg1 ;
-(void)observableDidSendResult;
-(BOOL)isObservableEmpty;
-(id)initWithObservable:(id)arg1 nextObservable:(id)arg2 ;
@end

