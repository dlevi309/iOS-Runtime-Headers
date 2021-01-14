/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPhotoPickerProviderItem.h>
#import <libobjc.A.dylib/CNVisualIdentityPickerTextEditableProviderItem.h>

@protocol CNAvatarImageRenderingScope;
@class NSString, CNVisualIdentity, CNAvatarImageRenderer, NSData, UIColor;

@interface CNPhotoPickerMonogramProviderItem : CNPhotoPickerProviderItem <CNVisualIdentityPickerTextEditableProviderItem> {

	BOOL _isContactImage;
	BOOL _hasUnknownColor;
	BOOL _isVariantOptionItem;
	NSString* _monogramText;
	CNVisualIdentity* _visualIdentity;
	CNAvatarImageRenderer* _avatarRenderer;
	id<CNAvatarImageRenderingScope> _renderingScope;
	NSData* _monogramData;

}

@property (nonatomic,retain) NSData * monogramData;                                       //@synthesize monogramData=_monogramData - In the implementation block
@property (assign,nonatomic) BOOL isVariantOptionItem;                                    //@synthesize isVariantOptionItem=_isVariantOptionItem - In the implementation block
@property (nonatomic,retain) NSString * monogramText;                                     //@synthesize monogramText=_monogramText - In the implementation block
@property (nonatomic,retain) CNVisualIdentity * visualIdentity;                           //@synthesize visualIdentity=_visualIdentity - In the implementation block
@property (nonatomic,retain) CNAvatarImageRenderer * avatarRenderer;                      //@synthesize avatarRenderer=_avatarRenderer - In the implementation block
@property (nonatomic,retain) id<CNAvatarImageRenderingScope> renderingScope;              //@synthesize renderingScope=_renderingScope - In the implementation block
@property (assign,nonatomic) BOOL isContactImage;                                         //@synthesize isContactImage=_isContactImage - In the implementation block
@property (assign,nonatomic) BOOL hasUnknownColor;                                        //@synthesize hasUnknownColor=_hasUnknownColor - In the implementation block
@property (nonatomic,readonly) NSString * itemText; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
-(id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 cropRect:(CGRect)arg4 renderingScope:(id)arg5 avatarRenderer:(id)arg6 isVariantOptionItem:(BOOL)arg7 ;
-(BOOL)allowsEditing;
-(NSString *)itemText;
-(UIColor *)backgroundColor;
-(id<CNAvatarImageRenderingScope>)renderingScope;
-(void)setRenderingScope:(id<CNAvatarImageRenderingScope>)arg1 ;
-(id)updatedProviderItemWithText:(id)arg1 ;
-(id)imageData;
-(id)thumbnailImageData;
-(id)variantIdentifier;
-(unsigned long long)hash;
-(BOOL)allowsVariants;
-(BOOL)allowsMoveAndScale;
-(BOOL)isGrayMonogramItem;
-(void)renderMonogramData;
-(NSString *)monogramText;
-(void)updateWithMonogramData:(id)arg1 ;
-(id)monogramVariantItemForColor:(id)arg1 ;
-(id)createColorVariantItems;
-(id)createColorVariantItemsExcludingSelf;
-(void)setMonogramText:(NSString *)arg1 ;
-(CNAvatarImageRenderer *)avatarRenderer;
-(BOOL)isContactImage;
-(void)setAvatarRenderer:(CNAvatarImageRenderer *)arg1 ;
-(void)setIsContactImage:(BOOL)arg1 ;
-(BOOL)hasUnknownColor;
-(void)setHasUnknownColor:(BOOL)arg1 ;
-(NSData *)monogramData;
-(void)setMonogramData:(NSData *)arg1 ;
-(BOOL)isVariantOptionItem;
-(void)setIsVariantOptionItem:(BOOL)arg1 ;
-(BOOL)shouldShowCaption;
-(id)localizedVariantsTitle;
-(id)generateThumbnailImageDataIfNeeded;
-(void)updateVisualIdentity:(id)arg1 ;
-(id)createVariantsItemsWithVariantsManager:(id)arg1 ;
-(id)contactImageForMetadataStore;
-(unsigned long long)imageType;
-(CNVisualIdentity *)visualIdentity;
-(void)setVisualIdentity:(CNVisualIdentity *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

