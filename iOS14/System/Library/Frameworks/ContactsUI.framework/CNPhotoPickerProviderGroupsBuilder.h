/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol AVTAvatarStore;
@class CNVisualIdentity, CNContactViewCache, CNUIContactsEnvironment;

@interface CNPhotoPickerProviderGroupsBuilder : NSObject {

	BOOL _includeContactImage;
	BOOL _includeUnifiedContactImages;
	BOOL _includeTakePhotoItem;
	BOOL _includePhotoFromLibraryItem;
	BOOL _includeMonograms;
	BOOL _includeFaces;
	BOOL _includeAnimoji;
	BOOL _includeAddAnimojiItem;
	BOOL _includeRecents;
	BOOL _shouldOrderEmojiBeforeAnimoji;
	BOOL _includesEmojiContent;
	BOOL _includeAddEmojiItem;
	CNVisualIdentity* _visualIdentity;
	id<AVTAvatarStore> _avatarStore;
	CNContactViewCache* _contactViewCache;
	CNUIContactsEnvironment* _environment;

}

@property (assign,nonatomic) BOOL includeContactImage;                             //@synthesize includeContactImage=_includeContactImage - In the implementation block
@property (assign,nonatomic) BOOL includeUnifiedContactImages;                     //@synthesize includeUnifiedContactImages=_includeUnifiedContactImages - In the implementation block
@property (assign,nonatomic) BOOL includeTakePhotoItem;                            //@synthesize includeTakePhotoItem=_includeTakePhotoItem - In the implementation block
@property (assign,nonatomic) BOOL includePhotoFromLibraryItem;                     //@synthesize includePhotoFromLibraryItem=_includePhotoFromLibraryItem - In the implementation block
@property (assign,nonatomic) BOOL includeMonograms;                                //@synthesize includeMonograms=_includeMonograms - In the implementation block
@property (assign,nonatomic) BOOL includeFaces;                                    //@synthesize includeFaces=_includeFaces - In the implementation block
@property (assign,nonatomic) BOOL includeAnimoji;                                  //@synthesize includeAnimoji=_includeAnimoji - In the implementation block
@property (assign,nonatomic) BOOL includeAddAnimojiItem;                           //@synthesize includeAddAnimojiItem=_includeAddAnimojiItem - In the implementation block
@property (assign,nonatomic) BOOL includeRecents;                                  //@synthesize includeRecents=_includeRecents - In the implementation block
@property (assign,nonatomic) BOOL shouldOrderEmojiBeforeAnimoji;                   //@synthesize shouldOrderEmojiBeforeAnimoji=_shouldOrderEmojiBeforeAnimoji - In the implementation block
@property (assign,nonatomic) BOOL includesEmojiContent;                            //@synthesize includesEmojiContent=_includesEmojiContent - In the implementation block
@property (assign,nonatomic) BOOL includeAddEmojiItem;                             //@synthesize includeAddEmojiItem=_includeAddEmojiItem - In the implementation block
@property (nonatomic,readonly) CNVisualIdentity * visualIdentity;                  //@synthesize visualIdentity=_visualIdentity - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarStore> avatarStore;                     //@synthesize avatarStore=_avatarStore - In the implementation block
@property (nonatomic,readonly) CNContactViewCache * contactViewCache;              //@synthesize contactViewCache=_contactViewCache - In the implementation block
@property (nonatomic,readonly) CNUIContactsEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) BOOL includesAnyPhotoContent; 
+(id)builderWithVisualIdentity:(id)arg1 avatarStore:(id)arg2 environment:(id)arg3 contactViewCache:(id)arg4 photoPickerConfiguration:(id)arg5 ;
-(id)build;
-(BOOL)includeUnifiedContactImages;
-(void)setIncludeUnifiedContactImages:(BOOL)arg1 ;
-(void)setIncludeFaces:(BOOL)arg1 ;
-(id)initWithVisualIdentity:(id)arg1 avatarStore:(id)arg2 environment:(id)arg3 contactViewCache:(id)arg4 ;
-(id)photoContentGroup;
-(BOOL)includesAnyPhotoContent;
-(id)addItemsContentGroup;
-(id)animojiContentGroup;
-(id)emojiContentGroup;
-(BOOL)includeContactImage;
-(void)setIncludeContactImage:(BOOL)arg1 ;
-(BOOL)includeTakePhotoItem;
-(BOOL)includeMonograms;
-(void)setIncludeTakePhotoItem:(BOOL)arg1 ;
-(BOOL)includePhotoFromLibraryItem;
-(void)setIncludeMonograms:(BOOL)arg1 ;
-(void)setIncludePhotoFromLibraryItem:(BOOL)arg1 ;
-(BOOL)includeAnimoji;
-(void)setIncludeAnimoji:(BOOL)arg1 ;
-(BOOL)includeRecents;
-(BOOL)includeAddAnimojiItem;
-(void)setIncludeAddAnimojiItem:(BOOL)arg1 ;
-(void)setIncludeRecents:(BOOL)arg1 ;
-(BOOL)shouldOrderEmojiBeforeAnimoji;
-(void)setShouldOrderEmojiBeforeAnimoji:(BOOL)arg1 ;
-(BOOL)includeAddEmojiItem;
-(BOOL)includesEmojiContent;
-(void)setIncludesEmojiContent:(BOOL)arg1 ;
-(void)setIncludeAddEmojiItem:(BOOL)arg1 ;
-(CNContactViewCache *)contactViewCache;
-(CNUIContactsEnvironment *)environment;
-(id<AVTAvatarStore>)avatarStore;
-(CNVisualIdentity *)visualIdentity;
-(id)injectedItemsGroup;
-(BOOL)includeFaces;
@end

