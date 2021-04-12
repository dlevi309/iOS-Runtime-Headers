/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PTTestRecipe.h>

@interface PTToggleTestRecipe : PTTestRecipe {

	BOOL _on;
	/*^block*/id _toggleAction;

}

@property (nonatomic,copy) id toggleAction;                      //@synthesize toggleAction=_toggleAction - In the implementation block
@property (getter=isOn,nonatomic,readonly) BOOL on;              //@synthesize on=_on - In the implementation block
+(id)recipeWithTitle:(id)arg1 prepareBlock:(/*^block*/id)arg2 toggleAction:(/*^block*/id)arg3 cleanupBlock:(/*^block*/id)arg4 ;
+(id)recipeWithTitle:(id)arg1 toggleAction:(/*^block*/id)arg2 ;
-(void)_activate;
-(void)invalidate;
-(BOOL)isOn;
-(void)_deactivate;
-(void)_handleEvent:(long long)arg1 ;
-(BOOL)_wantsEvent:(long long)arg1 ;
-(void)setToggleAction:(id)arg1 ;
-(id)toggleAction;
@end

