/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


#import <ContactsUI/ContactsUI-Structs.h>
@class UIFont, UIColor;

@interface CNMeCardSharingPickerLayoutAttributes : NSObject {

	double _topToAvatarPadding;
	UIFont* _headerFont;
	double _avatarViewToNamePadding;
	UIColor* _backgroundColor;
	CGSize _avatarViewSize;

}

@property (nonatomic,readonly) double topToAvatarPadding;                   //@synthesize topToAvatarPadding=_topToAvatarPadding - In the implementation block
@property (nonatomic,readonly) UIFont * headerFont;                         //@synthesize headerFont=_headerFont - In the implementation block
@property (nonatomic,readonly) CGSize avatarViewSize;                       //@synthesize avatarViewSize=_avatarViewSize - In the implementation block
@property (nonatomic,readonly) double avatarViewToNamePadding;              //@synthesize avatarViewToNamePadding=_avatarViewToNamePadding - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
+(id)buddyHeaderFont;
+(id)settingsHeaderFont;
+(id)layoutAttributesForBuddy;
+(id)layoutAttributesForSettings;
-(UIColor *)backgroundColor;
-(UIFont *)headerFont;
-(id)initWithTopToAvatarPadding:(double)arg1 headerFont:(id)arg2 avatarViewSize:(CGSize)arg3 avatarViewToNamePadding:(double)arg4 backgroundColor:(id)arg5 ;
-(double)topToAvatarPadding;
-(CGSize)avatarViewSize;
-(double)avatarViewToNamePadding;
@end

