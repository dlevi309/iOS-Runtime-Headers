/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITextFieldVisualStyleSubject;
@interface _UITextFieldVisualStyle : NSObject {

	id<_UITextFieldVisualStyleSubject> _styleSubject;

}

@property (assign,nonatomic,__weak) id<_UITextFieldVisualStyleSubject> styleSubject;              //@synthesize styleSubject=_styleSubject - In the implementation block
+(id)inferredVisualStyleWithStyleSubject:(id)arg1 ;
-(id)placeholderColor;
-(id)defaultTextColorForKeyboardAppearance;
-(void)setStyleSubject:(id<_UITextFieldVisualStyleSubject>)arg1 ;
-(id)initWithStyleSubject:(id)arg1 ;
-(id)defaultTextColor;
-(BOOL)textShouldUseVibrancy;
-(id)defaultFocusedTextColor;
-(void)handleTextVibrancy;
-(id)parentViewForTextContentView;
-(id<_UITextFieldVisualStyleSubject>)styleSubject;
@end

