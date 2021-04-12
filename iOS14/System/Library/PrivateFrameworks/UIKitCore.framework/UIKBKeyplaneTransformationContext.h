/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIKBTree, NSString, UIKBScreenTraits;

@interface UIKBKeyplaneTransformationContext : NSObject {

	BOOL _usesScriptSwitch;
	UIKBTree* _activeKeyboard;
	UIKBTree* _activeKeyplane;
	NSString* _currentKeyplaneName;
	UIKBScreenTraits* _screenTraits;
	double _resizingOffset;
	CGSize _keyboardSize;

}

@property (nonatomic,retain) UIKBTree * activeKeyboard;                    //@synthesize activeKeyboard=_activeKeyboard - In the implementation block
@property (nonatomic,retain) UIKBTree * activeKeyplane;                    //@synthesize activeKeyplane=_activeKeyplane - In the implementation block
@property (assign,nonatomic) CGSize keyboardSize;                          //@synthesize keyboardSize=_keyboardSize - In the implementation block
@property (nonatomic,retain) NSString * currentKeyplaneName;               //@synthesize currentKeyplaneName=_currentKeyplaneName - In the implementation block
@property (nonatomic,retain) UIKBScreenTraits * screenTraits;              //@synthesize screenTraits=_screenTraits - In the implementation block
@property (assign,nonatomic) BOOL usesScriptSwitch;                        //@synthesize usesScriptSwitch=_usesScriptSwitch - In the implementation block
@property (assign,nonatomic) double resizingOffset;                        //@synthesize resizingOffset=_resizingOffset - In the implementation block
-(void)setResizingOffset:(double)arg1 ;
-(void)setScreenTraits:(UIKBScreenTraits *)arg1 ;
-(void)setActiveKeyboard:(UIKBTree *)arg1 ;
-(CGSize)keyboardSize;
-(UIKBTree *)activeKeyboard;
-(void)setKeyboardSize:(CGSize)arg1 ;
-(UIKBScreenTraits *)screenTraits;
-(void)setActiveKeyplane:(UIKBTree *)arg1 ;
-(void)setCurrentKeyplaneName:(NSString *)arg1 ;
-(void)setUsesScriptSwitch:(BOOL)arg1 ;
-(BOOL)usesScriptSwitch;
-(UIKBTree *)activeKeyplane;
-(NSString *)currentKeyplaneName;
-(double)resizingOffset;
@end

