/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isOn;
-(void)_deactivate;
-(void)_activate;
-(BOOL)_wantsEvent:(long long)arg1 ;
-(void)_handleEvent:(long long)arg1 ;
-(void)invalidate;
-(void)setToggleAction:(id)arg1 ;
-(id)toggleAction;
@end

