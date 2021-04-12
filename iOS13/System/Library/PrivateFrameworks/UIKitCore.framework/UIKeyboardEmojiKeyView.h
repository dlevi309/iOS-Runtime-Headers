/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKBKeyView.h>
#import <UIKit/UIKeyboardEmojiCategoryUpdate.h>

@protocol UIKeyboardEmojiCategoryUpdateDelegate;
@class UIKeyboardEmojiKeyDisplayController, NSString;

@interface UIKeyboardEmojiKeyView : UIKBKeyView <UIKeyboardEmojiCategoryUpdate> {

	UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate> emojiKeyManager;

}

@property (assign,nonatomic) UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate> emojiKeyManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate>)emojiKeyManager;
-(void)setEmojiKeyManager:(UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate>)arg1 ;
-(void)updateToCategory:(long long)arg1 ;
-(long long)updateToCategoryWithOffsetPercentage:(double)arg1 ;
@end

