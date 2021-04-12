/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class NSString;

@interface GKObserverTrampoline : NSObject {

	id _observee;
	NSString* _keyPath;
	/*^block*/id _block;
	int _cancellationPredicate;
	unsigned long long _options;

}

@property (readonly) id token; 
-(void)dealloc;
-(id)token;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startObserving;
-(void)cancelObservation;
-(id)initObservingObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
@end

