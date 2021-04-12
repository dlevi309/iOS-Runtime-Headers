/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateToCategory:(long long)arg1 ;
-(long long)updateToCategoryWithOffsetPercentage:(double)arg1 ;
-(UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate>)emojiKeyManager;
-(void)setEmojiKeyManager:(UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate>)arg1 ;
@end

