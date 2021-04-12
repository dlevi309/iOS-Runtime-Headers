/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue;
@class EMFEmojiPreferencesClient, NSObject, NSArray, NSDictionary;

@interface UIKeyboardEmojiPreferences : NSObject {

	EMFEmojiPreferencesClient* _preferencesClient;
	NSObject*<OS_dispatch_queue> _clientDispatchQueue;
	NSArray* _localRecentsWithClient;
	NSArray* _localRecentsWithoutClient;

}

@property (nonatomic,readonly) EMFEmojiPreferencesClient * preferencesClient; 
@property (assign,nonatomic) unsigned long long maximumRecentsCount; 
@property (nonatomic,retain) NSArray * recents; 
@property (nonatomic,retain) NSDictionary * skinToneBaseKeyPreferences; 
@property (assign,nonatomic) long long selectedCategoryType; 
@property (nonatomic,readonly) BOOL hasDisplayedSkinToneHelp; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(long long)selectedCategoryType;
-(long long)emojiCategoryDefaultsIndex:(id)arg1 ;
-(void)clearEmojiKeyboardPreferenceClient;
-(BOOL)hasDisplayedSkinToneHelp;
-(void)didDisplaySkinToneHelp;
-(BOOL)hasLastUsedVariantForEmojiString:(id)arg1 ;
-(void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2 ;
-(void)emojiUsed:(id)arg1 language:(id)arg2 ;
-(id)recentEmojiAtIndex:(long long)arg1 size:(unsigned long long*)arg2 ;
-(id)emojiWithoutDuplicateRecents:(id)arg1 ;
-(id)lastUsedVariantEmojiForEmojiString:(id)arg1 ;
-(void)writeEmojiDefaults;
-(void)refreshLocalRecents;
-(NSArray *)recents;
-(NSDictionary *)skinToneBaseKeyPreferences;
-(void)setSelectedCategoryType:(long long)arg1 ;
-(void)setEmojiCategoryDefaultsIndex:(long long)arg1 forCategory:(id)arg2 ;
-(void)emojiUsed:(id)arg1 ;
-(void)readEmojiDefaults;
-(void)handleSuspend:(id)arg1 ;
-(void)handleWrite:(id)arg1 ;
-(void)handleRead:(id)arg1 ;
-(void)clearLocalRecentsCache;
-(EMFEmojiPreferencesClient *)preferencesClient;
-(unsigned long long)maximumRecentsCount;
-(void)setMaximumRecentsCount:(unsigned long long)arg1 ;
-(void)_usageForEmoji:(id)arg1 language:(id)arg2 mode:(id)arg3 typingName:(id)arg4 ;
-(void)setRecents:(NSArray *)arg1 ;
-(void)setSkinToneBaseKeyPreferences:(NSDictionary *)arg1 ;
-(void)emojiPredicted:(id)arg1 typingName:(id)arg2 language:(id)arg3 ;
-(id)typingNameForEmoji:(id)arg1 language:(id)arg2 ;
@end

