/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clearEmojiKeyboardPreferenceClient;
-(NSArray *)recents;
-(BOOL)hasDisplayedSkinToneHelp;
-(void)didDisplaySkinToneHelp;
-(BOOL)hasLastUsedVariantForEmojiString:(id)arg1 ;
-(void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2 ;
-(void)emojiUsed:(id)arg1 language:(id)arg2 ;
-(id)recentEmojiAtIndex:(long long)arg1 size:(unsigned long long*)arg2 ;
-(id)emojiWithoutDuplicateRecents:(id)arg1 ;
-(id)lastUsedVariantEmojiForEmojiString:(id)arg1 ;
-(void)emojiUsed:(id)arg1 ;
-(void)handleRead:(id)arg1 ;
-(void)writeEmojiDefaults;
-(void)refreshLocalRecents;
-(NSDictionary *)skinToneBaseKeyPreferences;
-(void)setSelectedCategoryType:(long long)arg1 ;
-(void)setEmojiCategoryDefaultsIndex:(long long)arg1 forCategory:(id)arg2 ;
-(void)readEmojiDefaults;
-(void)handleSuspend:(id)arg1 ;
-(void)clearLocalRecentsCache;
-(EMFEmojiPreferencesClient *)preferencesClient;
-(unsigned long long)maximumRecentsCount;
-(void)setMaximumRecentsCount:(unsigned long long)arg1 ;
-(void)_usageForEmoji:(id)arg1 language:(id)arg2 mode:(id)arg3 typingName:(id)arg4 ;
-(void)setSkinToneBaseKeyPreferences:(NSDictionary *)arg1 ;
-(id)typingNameForEmoji:(id)arg1 language:(id)arg2 ;
-(void)emojiPredicted:(id)arg1 typingName:(id)arg2 language:(id)arg3 ;
-(long long)selectedCategoryType;
-(long long)emojiCategoryDefaultsIndex:(id)arg1 ;
-(void)handleWrite:(id)arg1 ;
-(void)setRecents:(NSArray *)arg1 ;
-(void)dealloc;
@end

