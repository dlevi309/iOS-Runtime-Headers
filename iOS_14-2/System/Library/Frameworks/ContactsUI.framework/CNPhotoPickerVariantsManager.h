/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSArray;

@interface CNPhotoPickerVariantsManager : NSObject {

	NSArray* _avatarBackgrounds;
	NSArray* _defaultEmojis;

}

@property (nonatomic,retain) NSArray * avatarBackgrounds;              //@synthesize avatarBackgrounds=_avatarBackgrounds - In the implementation block
@property (nonatomic,retain) NSArray * defaultEmojis;                  //@synthesize defaultEmojis=_defaultEmojis - In the implementation block
+(id)defaultEmojisFromDictionary:(id)arg1 ;
+(id)avatarBackgroundsFromDictionary:(id)arg1 ;
+(id)colorFromRGBArray:(id)arg1 ;
+(id)colorFromRGBString:(id)arg1 ;
+(id)colorVariantWithColorNamed:(id)arg1 ;
+(id)avatarPoseConfigurationsForAvatarRecord:(id)arg1 ;
+(id)monogramColorGradientBackground:(id)arg1 ;
+(id)sharingProfileAvatarPoseConfigurationForAvatarRecord:(id)arg1 ;
+(id)colorGradientBackground:(id)arg1 ;
+(id)nonAlphaColorForBackgroundColor:(id)arg1 ;
+(id)compositeColorForTopColor:(id)arg1 bottomColor:(id)arg2 ;
+(id)gradientBackgroundImageForColor:(id)arg1 ;
+(id)generateGradientColorsByColor;
+(id)generateMonogramGradientColorsByColor;
+(id)gradientStartColor:(id)arg1 ;
-(id)init;
-(id)randomColorVariant;
-(NSArray *)avatarBackgrounds;
-(void)setAvatarBackgrounds:(NSArray *)arg1 ;
-(NSArray *)defaultEmojis;
-(void)setDefaultEmojis:(NSArray *)arg1 ;
@end

