/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setState:(unsigned long long)arg1 ;
-(id)init;
-(NSArray *)viewControllers;
-(BOOL)isBlurred;
-(id)description;
-(unsigned long long)state;
-(id)initWithElementViewControllers:(id)arg1 ;
-(void)setBlurred:(BOOL)arg1 withAnimationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fireBlocksForState:(unsigned long long)arg1 ;
-(void)addNotifyBlock:(/*^block*/id)arg1 forState:(unsigned long long)arg2 ;
-(void)removeNotifyBlock:(/*^block*/id)arg1 forState:(unsigned long long)arg2 ;
@end

