/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/


@class NSMutableArray;

@interface TKKeyPathObserver : NSObject {

	/*^block*/id _block;
	NSMutableArray* _observations;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)stopObserving;
-(void)observe:(id)arg1 keyPath:(id)arg2 ;
@end

