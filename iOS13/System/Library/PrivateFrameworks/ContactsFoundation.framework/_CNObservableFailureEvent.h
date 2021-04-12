/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservableEvent.h>

@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {

	NSError* _error;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)error;
-(id)value;
-(unsigned long long)eventType;
-(id)initWithError:(id)arg1 ;
-(BOOL)hasValue;
-(void)dematerializeWithObserver:(id)arg1 ;
@end

