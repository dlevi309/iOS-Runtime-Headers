/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIKeyboardEmojiKeyDisplayController;


@protocol UIKeyboardEmojiCategoryUpdate <NSObject>
@property (assign,nonatomic) UIKeyboardEmojiKeyDisplayController * emojiKeyManager; 
@optional
-(long long)updateToCategoryWithOffsetPercentage:(double)arg1;

@required
-(void)updateToCategory:(long long)arg1;
-(UIKeyboardEmojiKeyDisplayController *)emojiKeyManager;
-(void)setEmojiKeyManager:(id)arg1;

@end
