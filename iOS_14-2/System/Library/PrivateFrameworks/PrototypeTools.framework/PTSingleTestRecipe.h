/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PTTestRecipe.h>

@interface PTSingleTestRecipe : PTTestRecipe {

	/*^block*/id _action;

}

@property (nonatomic,copy) id action;              //@synthesize action=_action - In the implementation block
+(id)recipeWithTitle:(id)arg1 prepareBlock:(/*^block*/id)arg2 action:(/*^block*/id)arg3 cleanupBlock:(/*^block*/id)arg4 ;
+(id)recipeWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(BOOL)_wantsEvent:(long long)arg1 ;
-(void)_handleEvent:(long long)arg1 ;
-(void)invalidate;
@end

