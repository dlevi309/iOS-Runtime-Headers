/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray, NSString;

@interface UIKeyboardEmojiCategory : NSObject {

	long long _categoryType;
	NSArray* _emoji;
	long long _lastVisibleFirstEmojiIndex;
	NSString* _displaySymbol;

}

@property (assign) long long categoryType;                                       //@synthesize categoryType=_categoryType - In the implementation block
@property (retain) NSArray * emoji;                                              //@synthesize emoji=_emoji - In the implementation block
@property (assign,nonatomic) long long lastVisibleFirstEmojiIndex;               //@synthesize lastVisibleFirstEmojiIndex=_lastVisibleFirstEmojiIndex - In the implementation block
@property (getter=name,nonatomic,readonly) NSString * name; 
@property (getter=displaySymbol,readonly) NSString * displaySymbol;              //@synthesize displaySymbol=_displaySymbol - In the implementation block
+(id)localizedStringForKey:(id)arg1 ;
+(id)categories;
+(BOOL)isRTLMode;
+(long long)numberOfCategories;
+(id)emojiCategoryStringForCategoryType:(long long)arg1 ;
+(unsigned long long)hasVariantsForEmoji:(id)arg1 ;
+(id)fallbackDisplayName:(long long)arg1 ;
+(long long)categoryTypeForCategoryIndex:(unsigned long long)arg1 ;
+(unsigned long long)categoryIndexForCategoryType:(long long)arg1 ;
+(id)professionSkinToneEmojiBaseKey:(id)arg1 ;
+(id)emojiRecentsFromPreferences;
+(id)loadPrecomputedEmojiFlagCategory;
+(long long)emojiCategoryTypeForCategoryString:(id)arg1 ;
+(id)enabledCategoryIndexes;
+(id)categoryForType:(long long)arg1 ;
+(id)displayName:(long long)arg1 ;
-(NSArray *)emoji;
-(long long)categoryType;
-(void)setCategoryType:(long long)arg1 ;
-(NSString *)name;
-(void)setEmoji:(NSArray *)arg1 ;
-(NSString *)displaySymbol;
-(long long)lastVisibleFirstEmojiIndex;
-(void)releaseCategories;
-(void)setLastVisibleFirstEmojiIndex:(long long)arg1 ;
-(void)dealloc;
@end

