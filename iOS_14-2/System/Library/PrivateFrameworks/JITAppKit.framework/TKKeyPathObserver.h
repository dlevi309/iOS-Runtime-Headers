/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/


@class NSMutableArray;

@interface TKKeyPathObserver : NSObject {

	/*^block*/id _block;
	NSMutableArray* _observations;

}
-(void)stopObserving;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)observe:(id)arg1 keyPath:(id)arg2 ;
@end

