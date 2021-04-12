/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

