/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSObservation.h>

@protocol NSObservable, NSObserver;
@class NSObject;

@interface _NSConcreteObservation : NSObservation {

	NSObject*<NSObservable> _LHSobservable;
	NSObject*<NSObserver> _RHSobserver;
	id _observers[4];

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(void)_receiveBox:(id)arg1 ;
-(void)finishObserving;
-(void)remove;
-(id)initWithObservable:(id)arg1 observer:(id)arg2 ;
-(void*)_observerStorageOfSize:(unsigned long long)arg1 ;
@end

