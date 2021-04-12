/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PTTestRecipe.h>

@interface PTSingleTestRecipe : PTTestRecipe {

	/*^block*/id _action;

}

@property (nonatomic,copy) id action;              //@synthesize action=_action - In the implementation block
+(id)recipeWithTitle:(id)arg1 prepareBlock:(/*^block*/id)arg2 action:(/*^block*/id)arg3 cleanupBlock:(/*^block*/id)arg4 ;
+(id)recipeWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)invalidate;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)_handleEvent:(long long)arg1 ;
-(BOOL)_wantsEvent:(long long)arg1 ;
@end

