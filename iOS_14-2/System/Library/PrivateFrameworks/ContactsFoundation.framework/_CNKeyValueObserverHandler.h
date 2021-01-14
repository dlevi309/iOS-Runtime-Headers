/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNObserver;
@class NSString;

@interface _CNKeyValueObserverHandler : NSObject {

	id _object;
	NSString* _keyPath;
	id<CNObserver> _observer;

}
-(void)stopObserving;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startObservingWithOptions:(unsigned long long)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 observer:(id)arg3 ;
@end

