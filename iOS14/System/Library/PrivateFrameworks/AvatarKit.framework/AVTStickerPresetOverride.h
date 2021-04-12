/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSString, NSArray;

@interface AVTStickerPresetOverride : NSObject {

	long long _category;
	NSString* _presetIdentifier;
	NSArray* _unlessIdentifiers;

}

@property (nonatomic,readonly) long long category;                            //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * presetIdentifier;              //@synthesize presetIdentifier=_presetIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * unlessIdentifiers;                   //@synthesize unlessIdentifiers=_unlessIdentifiers - In the implementation block
+(id)presetOverrideFromDictionary:(id)arg1 forCategoryName:(id)arg2 ;
-(long long)category;
-(NSString *)presetIdentifier;
-(void)applyToAvatar:(id)arg1 reversionContext:(id)arg2 ;
-(id)initWithCategory:(long long)arg1 presetIdentifier:(id)arg2 unless:(id)arg3 ;
-(NSArray *)unlessIdentifiers;
@end

