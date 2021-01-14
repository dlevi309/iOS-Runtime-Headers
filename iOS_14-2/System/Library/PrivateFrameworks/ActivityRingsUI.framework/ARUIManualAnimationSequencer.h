/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <libobjc.A.dylib/ARUIAnimationSequencing.h>

@class ARUIObserverStore, NSString;

@interface ARUIManualAnimationSequencer : NSObject <ARUIAnimationSequencing> {

	ARUIObserverStore* _observers;
	/*^block*/id _completion;
	double _timeUntilCompletion;
	BOOL _animating;

}

@property (getter=isAnimating,nonatomic,readonly) BOOL animating;              //@synthesize animating=_animating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tick;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isAnimating;
-(void)performAfter:(double)arg1 completion:(/*^block*/id)arg2 ;
@end

