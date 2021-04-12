/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


#import <ContactsUI/ContactsUI-Structs.h>
@class UIImage, CNSharingProfileAvatarItem, NSString;

@interface CNSharingProfilePhotoPickerItem : NSObject {

	UIImage* _cachedPreviewImage;
	CNSharingProfileAvatarItem* _avatarItem;
	NSString* _symbolImageName;

}

@property (nonatomic,retain) UIImage * cachedPreviewImage;                         //@synthesize cachedPreviewImage=_cachedPreviewImage - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItem * avatarItem;              //@synthesize avatarItem=_avatarItem - In the implementation block
@property (nonatomic,retain) NSString * symbolImageName;                           //@synthesize symbolImageName=_symbolImageName - In the implementation block
-(CNSharingProfileAvatarItem *)avatarItem;
-(id)originalImageWithSize:(CGSize)arg1 ;
-(id)compositeImageWithSize:(CGSize)arg1 ;
-(UIImage *)cachedPreviewImage;
-(void)setCachedPreviewImage:(UIImage *)arg1 ;
-(void)setAvatarItem:(CNSharingProfileAvatarItem *)arg1 ;
-(NSString *)symbolImageName;
-(void)setSymbolImageName:(NSString *)arg1 ;
@end

