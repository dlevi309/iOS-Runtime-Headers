/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>

@class UITextView;

@interface PSTextViewPane : PSEditingPane {

	UITextView* _textView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(BOOL)handlesDoneButton;
-(void)setText:(id)arg1 ;
@end

