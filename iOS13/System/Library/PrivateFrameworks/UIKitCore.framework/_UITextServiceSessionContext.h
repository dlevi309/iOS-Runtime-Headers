/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol UITextInput;
@class UIResponder, UIView, NSString;

@interface _UITextServiceSessionContext : NSObject <NSSecureCoding> {

	UIResponder*<UITextInput> _textInput;
	UIView* _view;
	NSString* _textWithContext;
	NSRange _selectedRange;
	CGRect _presentationRect;

}

@property (nonatomic,readonly) UIResponder*<UITextInput> textInput;              //@synthesize textInput=_textInput - In the implementation block
@property (nonatomic,retain) UIView * view;                                      //@synthesize view=_view - In the implementation block
@property (nonatomic,copy,readonly) NSString * textWithContext;                  //@synthesize textWithContext=_textWithContext - In the implementation block
@property (nonatomic,readonly) NSRange selectedRange;                            //@synthesize selectedRange=_selectedRange - In the implementation block
@property (nonatomic,readonly) CGRect presentationRect;                          //@synthesize presentationRect=_presentationRect - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sessionContextWithText:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3 ;
+(id)sessionContextForType:(long long)arg1 withTextInput:(id)arg2 ;
+(id)sessionContextWithText:(id)arg1 withRect:(CGRect)arg2 withRange:(NSRange)arg3 withView:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(NSRange)selectedRange;
-(UIResponder*<UITextInput>)textInput;
-(id)initForType:(long long)arg1 withText:(id)arg2 withTextInput:(id)arg3 withView:(id)arg4 ;
-(BOOL)_typeRequiresContext:(long long)arg1 ;
-(void)_gatherAdditionalContext;
-(void)convertRectToView:(id)arg1 ;
-(NSString *)textWithContext;
-(CGRect)presentationRect;
@end

