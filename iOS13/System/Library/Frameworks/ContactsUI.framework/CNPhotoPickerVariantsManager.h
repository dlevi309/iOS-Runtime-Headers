/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSArray;

@interface CNPhotoPickerVariantsManager : NSObject {

	NSArray* _avatarBackgrounds;

}

@property (nonatomic,retain) NSArray * avatarBackgrounds;              //@synthesize avatarBackgrounds=_avatarBackgrounds - In the implementation block
+(id)avatarBackgroundsFromDictionary:(id)arg1 ;
+(id)colorFromRGBArray:(id)arg1 ;
+(id)colorFromRGBString:(id)arg1 ;
+(id)colorVariantWithColorNamed:(id)arg1 ;
+(id)avatarPoseConfigurationsForAvatarRecord:(id)arg1 ;
+(id)sharingProfileAvatarPoseConfigurationForAvatarRecord:(id)arg1 ;
+(id)colorGradientBackground:(id)arg1 ;
+(id)gradientStartColor:(id)arg1 ;
+(id)nonAlphaColorForBackgroundColor:(id)arg1 ;
+(id)compositeColorForTopColor:(id)arg1 bottomColor:(id)arg2 ;
+(id)generateGradientColorsByColor;
-(id)init;
-(NSArray *)avatarBackgrounds;
-(void)setAvatarBackgrounds:(NSArray *)arg1 ;
@end

