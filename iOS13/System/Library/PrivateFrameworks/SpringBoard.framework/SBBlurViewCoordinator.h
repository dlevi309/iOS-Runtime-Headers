/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSArray, NSMutableDictionary;

@interface SBBlurViewCoordinator : NSObject {

	NSArray* _elementVCs;
	unsigned long long _state;
	NSMutableDictionary* _mapStateToBlocks;

}

@property (nonatomic,readonly) NSArray * viewControllers;                  //@synthesize elementVCs=_elementVCs - In the implementation block
@property (getter=isBlurred,nonatomic,readonly) BOOL blurred; 
@property (nonatomic,readonly) unsigned long long state;                   //@synthesize state=_state - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)state;
-(void)_setState:(unsigned long long)arg1 ;
-(NSArray *)viewControllers;
-(id)initWithElementViewControllers:(id)arg1 ;
-(void)setBlurred:(BOOL)arg1 withAnimationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isBlurred;
-(void)_fireBlocksForState:(unsigned long long)arg1 ;
-(void)addNotifyBlock:(/*^block*/id)arg1 forState:(unsigned long long)arg2 ;
-(void)removeNotifyBlock:(/*^block*/id)arg1 forState:(unsigned long long)arg2 ;
@end

