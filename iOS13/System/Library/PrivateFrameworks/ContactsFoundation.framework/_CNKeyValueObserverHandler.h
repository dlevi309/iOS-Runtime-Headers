/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNObserver;
@class NSString;

@interface _CNKeyValueObserverHandler : NSObject {

	id _object;
	NSString* _keyPath;
	id<CNObserver> _observer;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stopObserving;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 observer:(id)arg3 ;
-(void)startObservingWithOptions:(unsigned long long)arg1 ;
@end

