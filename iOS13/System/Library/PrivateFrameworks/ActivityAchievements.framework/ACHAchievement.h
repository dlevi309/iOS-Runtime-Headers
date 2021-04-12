/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
*/

#import <ActivityAchievements/ActivityAchievements-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ACHTemplate, NSArray, NSString, NSURL, HKQuantity, NSDictionary;

@interface ACHAchievement : NSObject <NSSecureCoding> {

	BOOL _badgeUsesFullColorEnamel;
	BOOL _unearnedUsesTwoToneEnamel;
	BOOL _faceHasMetalInlay;
	BOOL _badgeUsesTriColorEnamel;
	ACHTemplate* _template;
	NSArray* _earnedInstances;
	NSString* _section;
	NSURL* _localizationBundleURL;
	NSURL* _resourceBundleURL;
	NSURL* _propertyListBundleURL;
	NSURL* _stickerBundleURL;
	NSString* _textureFilename;
	NSString* _badgeShapeName;
	long long _badgeModelVersion;
	HKQuantity* _progress;
	HKQuantity* _goal;
	NSDictionary* _customPlaceholderValues;
	SCD_Struct_AC3 _badgeMetalColor;
	SCD_Struct_AC3 _badgeEnamelColor;
	SCD_Struct_AC3 _enamelTriColor1;
	SCD_Struct_AC3 _enamelTriColor2;
	SCD_Struct_AC3 _enamelTriColor3;

}

@property (retain) NSURL * localizationBundleURL;                       //@synthesize localizationBundleURL=_localizationBundleURL - In the implementation block
@property (retain) NSURL * resourceBundleURL;                           //@synthesize resourceBundleURL=_resourceBundleURL - In the implementation block
@property (retain) NSURL * propertyListBundleURL;                       //@synthesize propertyListBundleURL=_propertyListBundleURL - In the implementation block
@property (retain) NSURL * stickerBundleURL;                            //@synthesize stickerBundleURL=_stickerBundleURL - In the implementation block
@property (retain) NSString * textureFilename;                          //@synthesize textureFilename=_textureFilename - In the implementation block
@property (retain) NSString * badgeShapeName;                           //@synthesize badgeShapeName=_badgeShapeName - In the implementation block
@property (assign) BOOL badgeUsesFullColorEnamel;                       //@synthesize badgeUsesFullColorEnamel=_badgeUsesFullColorEnamel - In the implementation block
@property (assign) BOOL unearnedUsesTwoToneEnamel;                      //@synthesize unearnedUsesTwoToneEnamel=_unearnedUsesTwoToneEnamel - In the implementation block
@property (assign) BOOL faceHasMetalInlay;                              //@synthesize faceHasMetalInlay=_faceHasMetalInlay - In the implementation block
@property (assign) SCD_Struct_AC3 badgeEnamelColor;                     //@synthesize badgeEnamelColor=_badgeEnamelColor - In the implementation block
@property (assign) SCD_Struct_AC3 badgeMetalColor;                      //@synthesize badgeMetalColor=_badgeMetalColor - In the implementation block
@property (assign) long long badgeModelVersion;                         //@synthesize badgeModelVersion=_badgeModelVersion - In the implementation block
@property (assign) BOOL badgeUsesTriColorEnamel;                        //@synthesize badgeUsesTriColorEnamel=_badgeUsesTriColorEnamel - In the implementation block
@property (assign) SCD_Struct_AC3 enamelTriColor1;                      //@synthesize enamelTriColor1=_enamelTriColor1 - In the implementation block
@property (assign) SCD_Struct_AC3 enamelTriColor2;                      //@synthesize enamelTriColor2=_enamelTriColor2 - In the implementation block
@property (assign) SCD_Struct_AC3 enamelTriColor3;                      //@synthesize enamelTriColor3=_enamelTriColor3 - In the implementation block
@property (copy) NSString * section;                                    //@synthesize section=_section - In the implementation block
@property (retain) HKQuantity * progress;                               //@synthesize progress=_progress - In the implementation block
@property (retain) HKQuantity * goal;                                   //@synthesize goal=_goal - In the implementation block
@property (retain) NSDictionary * customPlaceholderValues;              //@synthesize customPlaceholderValues=_customPlaceholderValues - In the implementation block
@property (readonly) BOOL hasClientRequiredURLs; 
@property (readonly) ACHTemplate * template;                            //@synthesize template=_template - In the implementation block
@property (readonly) NSArray * earnedInstances;                         //@synthesize earnedInstances=_earnedInstances - In the implementation block
@property (readonly) BOOL unearned; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKQuantity *)progress;
-(void)setProgress:(HKQuantity *)arg1 ;
-(NSString *)section;
-(void)setSection:(NSString *)arg1 ;
-(ACHTemplate *)template;
-(void)setGoal:(HKQuantity *)arg1 ;
-(HKQuantity *)goal;
-(id)initWithCodable:(id)arg1 ;
-(void)setBadgeShapeName:(NSString *)arg1 ;
-(void)setBadgeMetalColor:(SCD_Struct_AC3)arg1 ;
-(void)setBadgeUsesFullColorEnamel:(BOOL)arg1 ;
-(void)setUnearnedUsesTwoToneEnamel:(BOOL)arg1 ;
-(void)setFaceHasMetalInlay:(BOOL)arg1 ;
-(void)setBadgeEnamelColor:(SCD_Struct_AC3)arg1 ;
-(void)setBadgeUsesTriColorEnamel:(BOOL)arg1 ;
-(void)setEnamelTriColor1:(SCD_Struct_AC3)arg1 ;
-(void)setEnamelTriColor2:(SCD_Struct_AC3)arg1 ;
-(void)setEnamelTriColor3:(SCD_Struct_AC3)arg1 ;
-(void)setBadgeModelVersion:(long long)arg1 ;
-(NSURL *)propertyListBundleURL;
-(void)setLocalizationBundleURL:(NSURL *)arg1 ;
-(void)setResourceBundleURL:(NSURL *)arg1 ;
-(void)setStickerBundleURL:(NSURL *)arg1 ;
-(void)setPropertyListBundleURL:(NSURL *)arg1 ;
-(void)setTextureFilename:(NSString *)arg1 ;
-(NSArray *)earnedInstances;
-(NSURL *)localizationBundleURL;
-(NSURL *)resourceBundleURL;
-(NSURL *)stickerBundleURL;
-(NSString *)badgeShapeName;
-(SCD_Struct_AC3)badgeMetalColor;
-(BOOL)badgeUsesFullColorEnamel;
-(SCD_Struct_AC3)badgeEnamelColor;
-(NSDictionary *)customPlaceholderValues;
-(void)setCustomPlaceholderValues:(NSDictionary *)arg1 ;
-(NSString *)textureFilename;
-(BOOL)unearnedUsesTwoToneEnamel;
-(BOOL)faceHasMetalInlay;
-(BOOL)badgeUsesTriColorEnamel;
-(SCD_Struct_AC3)enamelTriColor1;
-(SCD_Struct_AC3)enamelTriColor2;
-(SCD_Struct_AC3)enamelTriColor3;
-(long long)badgeModelVersion;
-(id)initWithTemplate:(id)arg1 earnedInstances:(id)arg2 ;
-(id)shallowCopyReplacingEarnedInstances:(id)arg1 ;
-(BOOL)unearned;
-(BOOL)hasClientRequiredURLs;
@end

