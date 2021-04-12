/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITextFieldVisualStyleSubject;
@interface _UITextFieldVisualStyle : NSObject {

	id<_UITextFieldVisualStyleSubject> _styleSubject;

}

@property (assign,nonatomic,__weak) id<_UITextFieldVisualStyleSubject> styleSubject;              //@synthesize styleSubject=_styleSubject - In the implementation block
+(id)inferredVisualStyleWithStyleSubject:(id)arg1 ;
-(id)defaultTextColor;
-(id)defaultTextColorForKeyboardAppearance;
-(id)parentViewForTextContentView;
-(id)placeholderColor;
-(id)namesOfAttributesToOverrideForEditing;
-(id)overridingEditingAttributes:(id)arg1 forOriginalAttributes:(id)arg2 ;
-(id)defaultFocusedTextColor;
-(id)initWithStyleSubject:(id)arg1 ;
-(BOOL)textShouldUseVibrancy;
-(void)handleTextVibrancy;
-(id<_UITextFieldVisualStyleSubject>)styleSubject;
-(void)setStyleSubject:(id<_UITextFieldVisualStyleSubject>)arg1 ;
@end

