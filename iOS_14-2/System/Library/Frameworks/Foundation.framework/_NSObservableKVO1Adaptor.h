/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/_NSObservableObservation.h>

@class NSObservableKeyPath;

@interface _NSObservableKVO1Adaptor : _NSObservableObservation {

	NSObservableKeyPath* kp;
	BOOL emitsChanges;

}
-(void)remove;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7 ;
-(void)finishObserving;
-(id)initWithObservable:(id)arg1 observer:(id)arg2 keyPath:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

