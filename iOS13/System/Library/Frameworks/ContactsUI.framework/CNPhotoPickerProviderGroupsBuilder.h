/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol AVTAvatarStore;
@class CNMutableContact, CNContactViewCache, CNUIContactsEnvironment;

@interface CNPhotoPickerProviderGroupsBuilder : NSObject {

	BOOL _includeContactImage;
	BOOL _includeUnifiedContactImages;
	BOOL _includeAddPhotoItem;
	BOOL _includeMonograms;
	BOOL _includeFaces;
	BOOL _includeAnimoji;
	BOOL _includeAddAnimojiItem;
	BOOL _includeRecents;
	CNMutableContact* _contact;
	id<AVTAvatarStore> _avatarStore;
	CNContactViewCache* _contactViewCache;
	CNUIContactsEnvironment* _environment;

}

@property (assign,nonatomic) BOOL includeContactImage;                             //@synthesize includeContactImage=_includeContactImage - In the implementation block
@property (assign,nonatomic) BOOL includeUnifiedContactImages;                     //@synthesize includeUnifiedContactImages=_includeUnifiedContactImages - In the implementation block
@property (assign,nonatomic) BOOL includeAddPhotoItem;                             //@synthesize includeAddPhotoItem=_includeAddPhotoItem - In the implementation block
@property (assign,nonatomic) BOOL includeMonograms;                                //@synthesize includeMonograms=_includeMonograms - In the implementation block
@property (assign,nonatomic) BOOL includeFaces;                                    //@synthesize includeFaces=_includeFaces - In the implementation block
@property (assign,nonatomic) BOOL includeAnimoji;                                  //@synthesize includeAnimoji=_includeAnimoji - In the implementation block
@property (assign,nonatomic) BOOL includeAddAnimojiItem;                           //@synthesize includeAddAnimojiItem=_includeAddAnimojiItem - In the implementation block
@property (assign,nonatomic) BOOL includeRecents;                                  //@synthesize includeRecents=_includeRecents - In the implementation block
@property (nonatomic,readonly) CNMutableContact * contact;                         //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarStore> avatarStore;                     //@synthesize avatarStore=_avatarStore - In the implementation block
@property (nonatomic,readonly) CNContactViewCache * contactViewCache;              //@synthesize contactViewCache=_contactViewCache - In the implementation block
@property (nonatomic,readonly) CNUIContactsEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) BOOL includesAnyPhotoContent; 
+(id)builderWithContact:(id)arg1 avatarStore:(id)arg2 environment:(id)arg3 contactViewCache:(id)arg4 photoPickerConfiguration:(id)arg5 ;
-(CNUIContactsEnvironment *)environment;
-(CNMutableContact *)contact;
-(id)build;
-(BOOL)includeFaces;
-(void)setIncludeFaces:(BOOL)arg1 ;
-(CNContactViewCache *)contactViewCache;
-(id<AVTAvatarStore>)avatarStore;
-(BOOL)includeUnifiedContactImages;
-(void)setIncludeUnifiedContactImages:(BOOL)arg1 ;
-(id)initWithContact:(id)arg1 avatarStore:(id)arg2 environment:(id)arg3 contactViewCache:(id)arg4 ;
-(BOOL)includesAnyPhotoContent;
-(id)photoContentGroup;
-(id)animojiContentGroup;
-(BOOL)includeContactImage;
-(void)setIncludeContactImage:(BOOL)arg1 ;
-(BOOL)includeAddPhotoItem;
-(void)setIncludeAddPhotoItem:(BOOL)arg1 ;
-(BOOL)includeMonograms;
-(void)setIncludeMonograms:(BOOL)arg1 ;
-(BOOL)includeAnimoji;
-(void)setIncludeAnimoji:(BOOL)arg1 ;
-(BOOL)includeAddAnimojiItem;
-(void)setIncludeAddAnimojiItem:(BOOL)arg1 ;
-(BOOL)includeRecents;
-(void)setIncludeRecents:(BOOL)arg1 ;
@end

