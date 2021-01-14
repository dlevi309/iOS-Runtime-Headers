/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScreen;

@interface UIKBScreenTraits : NSObject {

	BOOL _isEmulatingIdiom;
	long long _idiomToEmulate;
	BOOL _knobInput;
	BOOL _touchInput;
	BOOL _touchpadInput;
	BOOL _isKeyboardMinorEdgeWidth;
	BOOL _isInPopover;
	UIScreen* _screen;
	long long _orientation;
	double _keyboardWidth;
	double _keyboardBarHeight;
	CGRect _bounds;

}

@property (nonatomic,readonly) UIScreen * screen;                               //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) long long idiom; 
@property (nonatomic,readonly) BOOL knobInput;                                  //@synthesize knobInput=_knobInput - In the implementation block
@property (nonatomic,readonly) BOOL touchInput;                                 //@synthesize touchInput=_touchInput - In the implementation block
@property (nonatomic,readonly) BOOL touchpadInput;                              //@synthesize touchpadInput=_touchpadInput - In the implementation block
@property (assign,nonatomic) long long orientation;                             //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double keyboardWidth;                              //@synthesize keyboardWidth=_keyboardWidth - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                     //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) BOOL isKeyboardMinorEdgeWidth;                   //@synthesize isKeyboardMinorEdgeWidth=_isKeyboardMinorEdgeWidth - In the implementation block
@property (assign,nonatomic) double keyboardBarHeight;                          //@synthesize keyboardBarHeight=_keyboardBarHeight - In the implementation block
@property (nonatomic,readonly) BOOL isInPopover;                                //@synthesize isInPopover=_isInPopover - In the implementation block
@property (nonatomic,readonly) CGSize keyboardScreenReferenceSize; 
+(id)traitsForPopoverEmulatingWidth:(double)arg1 minorEdge:(BOOL)arg2 orientation:(long long)arg3 idiom:(long long)arg4 ;
+(id)traitsForInputModeWithScreen:(id)arg1 ;
+(id)fullScreenTraitsWithScreen:(id)arg1 orientation:(long long)arg2 ;
+(id)traitsWithScreen:(id)arg1 orientation:(long long)arg2 ;
+(void)setMockIdiom:(long long)arg1 ;
+(id)_activeKeyboardWindowForScreen:(id)arg1 ;
+(id)traitsWithScreen:(id)arg1 orientation:(long long)arg2 ignoreRemoteKeyboard:(BOOL)arg3 ;
-(CGSize)keyboardScreenReferenceSize;
-(CGRect)bounds;
-(id)initWithScreen:(id)arg1 orientation:(long long)arg2 allowFloating:(BOOL)arg3 ignoreRemoteKeyboard:(BOOL)arg4 ;
-(double)keyboardWidth;
-(id)initForInputModeWithScreen:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)knobInput;
-(long long)idiom;
-(id)description;
-(BOOL)isKeyboardMinorEdgeWidth;
-(BOOL)touchpadInput;
-(BOOL)touchInput;
-(void)updateForTextInputTraits:(id)arg1 supportedInteractionModel:(unsigned long long)arg2 ;
-(long long)orientation;
-(UIScreen *)screen;
-(BOOL)isInPopover;
-(void)setKeyboardWidth:(double)arg1 ;
-(double)keyboardBarHeight;
-(void)setKeyboardBarHeight:(double)arg1 ;
-(void)setOrientation:(long long)arg1 ;
@end

