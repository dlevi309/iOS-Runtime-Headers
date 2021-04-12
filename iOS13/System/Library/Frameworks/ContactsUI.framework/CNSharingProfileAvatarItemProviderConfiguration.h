/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

