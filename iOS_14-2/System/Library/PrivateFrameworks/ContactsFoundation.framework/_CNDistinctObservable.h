/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;
@class NSMutableSet;

@interface _CNDistinctObservable : CNObservable {

	id<CNObservable> _observable;
	NSMutableSet* _previouslyObservedResults;

}
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 ;
-(BOOL)_resultIsDistinct:(id)arg1 ;
@end

