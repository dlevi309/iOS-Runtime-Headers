/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PTTestRecipe.h>

@interface PTDoubleTestRecipe : PTTestRecipe {

	/*^block*/id _increaseAction;
	/*^block*/id _decreaseAction;

}

@property (nonatomic,copy) id increaseAction;              //@synthesize increaseAction=_increaseAction - In the implementation block
@property (nonatomic,copy) id decreaseAction;              //@synthesize decreaseAction=_decreaseAction - In the implementation block
+(id)recipeWithTitle:(id)arg1 prepareBlock:(/*^block*/id)arg2 increaseAction:(/*^block*/id)arg3 decreaseAction:(/*^block*/id)arg4 cleanupBlock:(/*^block*/id)arg5 ;
+(id)recipeWithTitle:(id)arg1 increaseAction:(/*^block*/id)arg2 decreaseAction:(/*^block*/id)arg3 ;
-(void)invalidate;
-(void)_handleEvent:(long long)arg1 ;
-(BOOL)_wantsEvent:(long long)arg1 ;
-(void)setIncreaseAction:(id)arg1 ;
-(void)setDecreaseAction:(id)arg1 ;
-(id)increaseAction;
-(id)decreaseAction;
@end

