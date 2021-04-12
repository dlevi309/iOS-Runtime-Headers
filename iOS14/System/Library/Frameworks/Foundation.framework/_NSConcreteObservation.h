/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)remove;
-(void)finishObserving;
-(void)_receiveBox:(id)arg1 ;
-(id)debugDescription;
-(void*)_observerStorageOfSize:(unsigned long long)arg1 ;
-(id)initWithObservable:(id)arg1 observer:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

