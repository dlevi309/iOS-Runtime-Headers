/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PTTestRecipe.h>

@interface PTDoubleTestRecipe : PTTestRecipe {

	/*^block*/id _increaseAction;
	/*^block*/id _decreaseAction;

}

@property (nonatomic,copy) id increaseAction;              //@synthesize increaseAction=_increaseAction - In the implementation block
@property (nonatomic,copy) id decreaseAction;              //@synthesize decreaseAction=_decreaseAction - In the implementation block
+(id)recipeWithTitle:(id)arg1 increaseAction:(/*^block*/id)arg2 decreaseAction:(/*^block*/id)arg3 ;
+(id)recipeWithTitle:(id)arg1 prepareBlock:(/*^block*/id)arg2 increaseAction:(/*^block*/id)arg3 decreaseAction:(/*^block*/id)arg4 cleanupBlock:(/*^block*/id)arg5 ;
-(id)increaseAction;
-(BOOL)_wantsEvent:(long long)arg1 ;
-(id)decreaseAction;
-(void)_handleEvent:(long long)arg1 ;
-(void)invalidate;
-(void)setIncreaseAction:(id)arg1 ;
-(void)setDecreaseAction:(id)arg1 ;
@end

