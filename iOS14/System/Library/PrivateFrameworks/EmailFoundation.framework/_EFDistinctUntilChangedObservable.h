/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFObservable.h>

@protocol EFObservable;
@class NSLock;

@interface _EFDistinctUntilChangedObservable : EFObservable {

	id<EFObservable> _observable;
	id _lastObservedResult;
	NSLock* _lock;

}
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 ;
-(BOOL)_isLastResultDistinctFromResult:(id)arg1 ;
@end

