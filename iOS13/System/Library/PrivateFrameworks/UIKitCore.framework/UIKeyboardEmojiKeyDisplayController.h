/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIKeyboardEmojiCategoryUpdateDelegate.h>

@class UIKeyboardEmojiKeyView, UIKeyboardEmojiCategory, NSString;

@interface UIKeyboardEmojiKeyDisplayController : NSObject <UIKeyboardEmojiCategoryUpdateDelegate> {

	UIKeyboardEmojiKeyView* _inputView;
	UIKeyboardEmojiKeyView* _categoryView;
	UIKeyboardEmojiCategory* _lastViewedCategory;

}

@property (nonatomic,retain) UIKeyboardEmojiKeyView * inputView;                 //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) UIKeyboardEmojiKeyView * categoryView;              //@synthesize categoryView=_categoryView - In the implementation block
@property (assign) UIKeyboardEmojiCategory * lastViewedCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)classForInputView;
+(Class)classForCategoryControl;
+(void)writeEmojiDefaultsAndReleaseActiveInputView;
-(id)init;
-(void)dealloc;
-(UIKeyboardEmojiKeyView *)inputView;
-(void)setInputView:(UIKeyboardEmojiKeyView *)arg1 ;
-(void)updateEmojiKeyManagerWithKey:(id)arg1 withKeyView:(id)arg2 ;
-(BOOL)userHasSelectedSkinToneEmoji;
-(UIKeyboardEmojiCategory *)lastViewedCategory;
-(void)reloadForCategory:(long long)arg1 withSender:(id)arg2 ;
-(long long)reloadCategoryForOffsetPercentage:(double)arg1 withSender:(id)arg2 ;
-(BOOL)hasLastUsedVariantForEmojiString:(id)arg1 ;
-(void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2 ;
-(void)emojiUsed:(id)arg1 language:(id)arg2 ;
-(id)recentEmojiAtIndex:(long long)arg1 size:(unsigned long long*)arg2 ;
-(id)emojiWithoutDuplicateRecents:(id)arg1 ;
-(id)lastUsedVariantEmojiForEmojiString:(id)arg1 ;
-(void)setLastViewedCategory:(UIKeyboardEmojiCategory *)arg1 ;
-(long long)lastVisibleFirstEmojiIndexforCategory:(id)arg1 ;
-(UIKeyboardEmojiKeyView *)categoryView;
-(id)recents;
-(id)skinToneBaseKeyPreferences;
-(void)emojiUsed:(id)arg1 ;
-(void)setCategoryView:(UIKeyboardEmojiKeyView *)arg1 ;
@end

