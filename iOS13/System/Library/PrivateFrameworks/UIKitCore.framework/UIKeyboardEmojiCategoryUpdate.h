/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIKeyboardEmojiKeyDisplayController;


@protocol UIKeyboardEmojiCategoryUpdate <NSObject>
@property (assign,nonatomic) UIKeyboardEmojiKeyDisplayController * emojiKeyManager; 
@optional
-(long long)updateToCategoryWithOffsetPercentage:(double)arg1;

@required
-(UIKeyboardEmojiKeyDisplayController *)emojiKeyManager;
-(void)setEmojiKeyManager:(id)arg1;
-(void)updateToCategory:(long long)arg1;

@end

