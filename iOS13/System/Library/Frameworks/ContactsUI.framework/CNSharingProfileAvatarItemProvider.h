/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol AVTAvatarRecord;
#import <ContactsUI/ContactsUI-Structs.h>
@class CNSharingProfileAvatarItemProviderConfiguration, CNSharingProfileLogger, CNContact, CNAvatarImageRenderer, CNPhotoPickerVariantsManager, NSArray, CNSharingProfileAvatarItem, CNPhotoPickerColorVariant, PRMonogramColor;

@interface CNSharingProfileAvatarItemProvider : NSObject {

	BOOL _shouldIncludeSilhouette;
	BOOL _shouldIncludeAnimoji;
	BOOL _shouldIncludePhoto;
	BOOL _shouldIncludeMonogram;
	BOOL _contactIsFromFullPhotoPicker;
	BOOL _useRTL;
	CNSharingProfileAvatarItemProviderConfiguration* _configuration;
	CNSharingProfileLogger* _logger;
	CNContact* _contact;
	id<AVTAvatarRecord> _avatarRecord;
	CNAvatarImageRenderer* _renderer;
	CNPhotoPickerVariantsManager* _variantsManager;
	NSArray* _items;
	CNSharingProfileAvatarItem* _previousAnimojiItem;
	CNSharingProfileAvatarItem* _previousPhotoItem;
	CNSharingProfileAvatarItem* _silhouetteItem;
	CNSharingProfileAvatarItem* _animojiItem;
	CNSharingProfileAvatarItem* _photoItem;
	CNSharingProfileAvatarItem* _monogramItem;
	CNPhotoPickerColorVariant* _animojiColor;

}

@property (nonatomic,retain) CNSharingProfileLogger * logger;                                              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                                             //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) CNAvatarImageRenderer * renderer;                                             //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) CNPhotoPickerVariantsManager * variantsManager;                               //@synthesize variantsManager=_variantsManager - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                              //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL contactIsFromFullPhotoPicker;                                            //@synthesize contactIsFromFullPhotoPicker=_contactIsFromFullPhotoPicker - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItem * previousAnimojiItem;                             //@synthesize previousAnimojiItem=_previousAnimojiItem - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItem * previousPhotoItem;                               //@synthesize previousPhotoItem=_previousPhotoItem - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItem * silhouetteItem;                                  //@synthesize silhouetteItem=_silhouetteItem - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItem * animojiItem;                                     //@synthesize animojiItem=_animojiItem - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItem * photoItem;                                       //@synthesize photoItem=_photoItem - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItem * monogramItem;                                    //@synthesize monogramItem=_monogramItem - In the implementation block
@property (assign,nonatomic) BOOL useRTL;                                                                  //@synthesize useRTL=_useRTL - In the implementation block
@property (nonatomic,retain) CNPhotoPickerColorVariant * animojiColor;                                     //@synthesize animojiColor=_animojiColor - In the implementation block
@property (nonatomic,retain) PRMonogramColor * monogramColor; 
@property (assign,nonatomic) BOOL shouldIncludeSilhouette;                                                 //@synthesize shouldIncludeSilhouette=_shouldIncludeSilhouette - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeAnimoji;                                                    //@synthesize shouldIncludeAnimoji=_shouldIncludeAnimoji - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludePhoto;                                                      //@synthesize shouldIncludePhoto=_shouldIncludePhoto - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeMonogram;                                                   //@synthesize shouldIncludeMonogram=_shouldIncludeMonogram - In the implementation block
@property (nonatomic,readonly) NSArray * avatarItems; 
@property (nonatomic,retain) CNSharingProfileAvatarItemProviderConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)monogramImageItemWithContact:(id)arg1 monogramColor:(id)arg2 renderer:(id)arg3 RTL:(BOOL)arg4 ;
+(id)animojiItemWithRecord:(id)arg1 stickerConfiguration:(id)arg2 backgroundColor:(id)arg3 ;
+(id)contactImageItemWithContact:(id)arg1 renderer:(id)arg2 logger:(id)arg3 type:(long long)arg4 ;
+(id)silhouetteImageItemWithRenderer:(id)arg1 ;
+(id)originalAnimojiImageForRecord:(id)arg1 stickerConfiguration:(id)arg2 size:(CGSize)arg3 ;
+(id)unposedImageForAvatarRecord:(id)arg1 ;
+(id)compositeImageForImage:(id)arg1 backgroundImage:(id)arg2 ;
-(CNSharingProfileLogger *)logger;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setConfiguration:(CNSharingProfileAvatarItemProviderConfiguration *)arg1 ;
-(CNSharingProfileAvatarItemProviderConfiguration *)configuration;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setLogger:(CNSharingProfileLogger *)arg1 ;
-(CNAvatarImageRenderer *)renderer;
-(void)setRenderer:(CNAvatarImageRenderer *)arg1 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(void)buildItems;
-(void)updateWithContact:(id)arg1 fromFullPhotoPicker:(BOOL)arg2 ;
-(void)setMonogramColor:(PRMonogramColor *)arg1 ;
-(PRMonogramColor *)monogramColor;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(void)setVariantsManager:(CNPhotoPickerVariantsManager *)arg1 ;
-(id)initWithContact:(id)arg1 avatarRecord:(id)arg2 logger:(id)arg3 ;
-(CNSharingProfileAvatarItem *)animojiItem;
-(void)setAnimojiItem:(CNSharingProfileAvatarItem *)arg1 ;
-(CNSharingProfileAvatarItem *)photoItem;
-(void)setPhotoItem:(CNSharingProfileAvatarItem *)arg1 ;
-(CNSharingProfileAvatarItem *)monogramItem;
-(void)setMonogramItem:(CNSharingProfileAvatarItem *)arg1 ;
-(void)pickRandomColors;
-(NSArray *)avatarItems;
-(BOOL)contactHasImageOfPhotoType:(id)arg1 ;
-(void)setAnimojiColor:(CNPhotoPickerColorVariant *)arg1 ;
-(id)animojColor;
-(CNSharingProfileAvatarItem *)silhouetteItem;
-(void)clearCachedItems;
-(BOOL)shouldIncludeSilhouette;
-(void)setShouldIncludeSilhouette:(BOOL)arg1 ;
-(BOOL)shouldIncludeAnimoji;
-(void)setShouldIncludeAnimoji:(BOOL)arg1 ;
-(BOOL)shouldIncludePhoto;
-(void)setShouldIncludePhoto:(BOOL)arg1 ;
-(BOOL)shouldIncludeMonogram;
-(void)setShouldIncludeMonogram:(BOOL)arg1 ;
-(BOOL)contactIsFromFullPhotoPicker;
-(void)setContactIsFromFullPhotoPicker:(BOOL)arg1 ;
-(CNSharingProfileAvatarItem *)previousAnimojiItem;
-(void)setPreviousAnimojiItem:(CNSharingProfileAvatarItem *)arg1 ;
-(CNSharingProfileAvatarItem *)previousPhotoItem;
-(void)setPreviousPhotoItem:(CNSharingProfileAvatarItem *)arg1 ;
-(void)setSilhouetteItem:(CNSharingProfileAvatarItem *)arg1 ;
-(BOOL)useRTL;
-(void)setUseRTL:(BOOL)arg1 ;
-(CNPhotoPickerColorVariant *)animojiColor;
@end

