/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSObservation.h>

@protocol NSObservable;
@class NSObject;

@interface _NSConcreteBlockSinkObservation : NSObservation {

	NSObject*<NSObservable> _LHSobservable;
	/*^block*/id _block;
	int _tag;

}
-(void)remove;
-(void)finishObserving;
-(void)_receiveBox:(id)arg1 ;
-(id)debugDescription;
-(id*)_observerStorage;
-(void*)_observerStorageOfSize:(unsigned long long)arg1 ;
-(id)initWithObservable:(id)arg1 blockSink:(/*^block*/id)arg2 tag:(int)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

