/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIKBTree, NSString, UIKBScreenTraits;

@interface UIKBKeyplaneTransformationContext : NSObject {

	BOOL _usesScriptSwitch;
	UIKBTree* _activeKeyboard;
	NSString* _currentKeyplaneName;
	UIKBScreenTraits* _screenTraits;
	double _resizingOffset;

}

@property (nonatomic,retain) UIKBTree * activeKeyboard;                    //@synthesize activeKeyboard=_activeKeyboard - In the implementation block
@property (nonatomic,retain) NSString * currentKeyplaneName;               //@synthesize currentKeyplaneName=_currentKeyplaneName - In the implementation block
@property (nonatomic,retain) UIKBScreenTraits * screenTraits;              //@synthesize screenTraits=_screenTraits - In the implementation block
@property (assign,nonatomic) BOOL usesScriptSwitch;                        //@synthesize usesScriptSwitch=_usesScriptSwitch - In the implementation block
@property (assign,nonatomic) double resizingOffset;                        //@synthesize resizingOffset=_resizingOffset - In the implementation block
-(UIKBTree *)activeKeyboard;
-(UIKBScreenTraits *)screenTraits;
-(double)resizingOffset;
-(void)setResizingOffset:(double)arg1 ;
-(void)setScreenTraits:(UIKBScreenTraits *)arg1 ;
-(void)setCurrentKeyplaneName:(NSString *)arg1 ;
-(void)setUsesScriptSwitch:(BOOL)arg1 ;
-(void)setActiveKeyboard:(UIKBTree *)arg1 ;
-(NSString *)currentKeyplaneName;
-(BOOL)usesScriptSwitch;
@end

