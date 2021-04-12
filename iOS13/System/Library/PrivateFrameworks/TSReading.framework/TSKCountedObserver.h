/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class TSUWeakReference;

@interface TSKCountedObserver : NSObject {

	TSUWeakReference* mWeakObserver;
	unsigned long long mCount;

}
-(void)dealloc;
-(id)observer;
-(unsigned long long)incrementCount;
-(id)initWithObserver:(id)arg1 ;
-(unsigned long long)decrementCount;
@end

