/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;
@interface _CNDistinctUntilChangedObservable : CNObservable {

	id<CNObservable> _observable;
	id _lastObservedResult;

}
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 ;
-(BOOL)_resultIsDistinctFromLastResult:(id)arg1 ;
@end

