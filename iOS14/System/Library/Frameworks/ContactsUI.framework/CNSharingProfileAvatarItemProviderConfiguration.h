/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class PRMonogramColor, CNPhotoPickerColorVariant;

@interface CNSharingProfileAvatarItemProviderConfiguration : NSObject {

	PRMonogramColor* _monogramColor;
	CNPhotoPickerColorVariant* _animojiColor;

}

@property (nonatomic,retain) PRMonogramColor * monogramColor;                       //@synthesize monogramColor=_monogramColor - In the implementation block
@property (nonatomic,retain) CNPhotoPickerColorVariant * animojiColor;              //@synthesize animojiColor=_animojiColor - In the implementation block
-(void)setMonogramColor:(PRMonogramColor *)arg1 ;
-(PRMonogramColor *)monogramColor;
-(void)setAnimojiColor:(CNPhotoPickerColorVariant *)arg1 ;
-(CNPhotoPickerColorVariant *)animojiColor;
@end

