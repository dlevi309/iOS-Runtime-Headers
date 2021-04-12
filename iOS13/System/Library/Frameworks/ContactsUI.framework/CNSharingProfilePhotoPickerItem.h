/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)originalImageWithSize:(CGSize)arg1 ;
-(id)compositeImageWithSize:(CGSize)arg1 ;
-(UIImage *)cachedPreviewImage;
-(void)setCachedPreviewImage:(UIImage *)arg1 ;
-(CNSharingProfileAvatarItem *)avatarItem;
-(void)setAvatarItem:(CNSharingProfileAvatarItem *)arg1 ;
-(NSString *)symbolImageName;
-(void)setSymbolImageName:(NSString *)arg1 ;
@end

