/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPhotoPickerProviderItem.h>

@protocol CNAvatarImageRenderingScope;
@class CNContact, CNAvatarImageRenderer, NSData;

@interface CNPhotoPickerMonogramProviderItem : CNPhotoPickerProviderItem {

	BOOL _isContactImage;
	BOOL _hasUnknownColor;
	BOOL _isVariantOptionItem;
	CNContact* _contact;
	CNAvatarImageRenderer* _avatarRenderer;
	id<CNAvatarImageRenderingScope> _renderingScope;
	NSData* _monogramData;

}

@property (nonatomic,retain) NSData * monogramData;                                       //@synthesize monogramData=_monogramData - In the implementation block
@property (assign,nonatomic) BOOL isVariantOptionItem;                                    //@synthesize isVariantOptionItem=_isVariantOptionItem - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                         //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNAvatarImageRenderer * avatarRenderer;                      //@synthesize avatarRenderer=_avatarRenderer - In the implementation block
@property (nonatomic,retain) id<CNAvatarImageRenderingScope> renderingScope;              //@synthesize renderingScope=_renderingScope - In the implementation block
@property (assign,nonatomic) BOOL isContactImage;                                         //@synthesize isContactImage=_isContactImage - In the implementation block
@property (assign,nonatomic) BOOL hasUnknownColor;                                        //@synthesize hasUnknownColor=_hasUnknownColor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(BOOL)allowsEditing;
-(id)imageData;
-(unsigned long long)imageType;
-(void)updateContact:(id)arg1 ;
-(id)thumbnailImageData;
-(id)variantIdentifier;
-(BOOL)allowsVariants;
-(BOOL)allowsMoveAndScale;
-(BOOL)shouldShowCaption;
-(id)localizedVariantsTitle;
-(id)generateThumbnailImageDataIfNeeded;
-(id)createVariantsItemsWithVariantsManager:(id)arg1 ;
-(id)contactImageForMetadataStore;
-(id<CNAvatarImageRenderingScope>)renderingScope;
-(void)setRenderingScope:(id<CNAvatarImageRenderingScope>)arg1 ;
-(id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 cropRect:(CGRect)arg4 renderingScope:(id)arg5 avatarRenderer:(id)arg6 isVariantOptionItem:(BOOL)arg7 ;
-(BOOL)isDefaultMonogramItem;
-(void)renderMonogramData;
-(void)updateWithMonogramData:(id)arg1 ;
-(id)monogramVariantItemForColor:(id)arg1 ;
-(id)createColorVariantItems;
-(CNAvatarImageRenderer *)avatarRenderer;
-(void)setAvatarRenderer:(CNAvatarImageRenderer *)arg1 ;
-(BOOL)isContactImage;
-(void)setIsContactImage:(BOOL)arg1 ;
-(BOOL)hasUnknownColor;
-(void)setHasUnknownColor:(BOOL)arg1 ;
-(NSData *)monogramData;
-(void)setMonogramData:(NSData *)arg1 ;
-(BOOL)isVariantOptionItem;
-(void)setIsVariantOptionItem:(BOOL)arg1 ;
@end

