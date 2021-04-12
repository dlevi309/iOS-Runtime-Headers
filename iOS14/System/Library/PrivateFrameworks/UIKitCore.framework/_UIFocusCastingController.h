/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIFocusCastingControllerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIFocusCastingController : NSObject {

	BOOL _isRememberingEntryPoint;
	id<_UIFocusCastingControllerDelegate> _delegate;
	unsigned long long _entryPointAxis;
	CGPoint _screenEntryPoint;

}

@property (assign,nonatomic) CGPoint screenEntryPoint;                                           //@synthesize screenEntryPoint=_screenEntryPoint - In the implementation block
@property (assign,nonatomic) unsigned long long entryPointAxis;                                  //@synthesize entryPointAxis=_entryPointAxis - In the implementation block
@property (assign,nonatomic) BOOL isRememberingEntryPoint;                                       //@synthesize isRememberingEntryPoint=_isRememberingEntryPoint - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFocusCastingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<_UIFocusCastingControllerDelegate>)delegate;
-(unsigned long long)entryPointAxis;
-(void)_forgetEntryPoint;
-(unsigned long long)_axisForHeading:(unsigned long long)arg1 ;
-(void)setScreenEntryPoint:(CGPoint)arg1 ;
-(void)_updateFocusItemFromGlobalFrame:(CGRect)arg1 toGlobalFrame:(CGRect)arg2 withHeading:(unsigned long long)arg3 ;
-(CGPoint)_castingPointInGlobalFrame:(CGRect)arg1 forHeading:(unsigned long long)arg2 ;
-(CGRect)_globalFrameForFocusItem:(id)arg1 ;
-(void)setIsRememberingEntryPoint:(BOOL)arg1 ;
-(void)setEntryPointAxis:(unsigned long long)arg1 ;
-(CGPoint)screenEntryPoint;
-(BOOL)isRememberingEntryPoint;
-(CGPoint)_entryPointInGlobalFrame:(CGRect)arg1 forHeading:(unsigned long long)arg2 ;
-(CGPoint)_movementPointInGlobalFrame:(CGRect)arg1 ;
-(id)_focusEffectsControllerForFocusedItem;
-(void)_updateFocusFromItem:(id)arg1 toItem:(id)arg2 withHeading:(unsigned long long)arg3 ;
-(void)setDelegate:(id<_UIFocusCastingControllerDelegate>)arg1 ;
-(CGRect)castingFrameForFocusedGlobalFrame:(CGRect)arg1 heading:(unsigned long long)arg2 ;
-(void)updateFocusCastingWithContext:(id)arg1 ;
@end

