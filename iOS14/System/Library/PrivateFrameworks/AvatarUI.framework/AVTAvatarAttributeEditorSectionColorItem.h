/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionItemInternal.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionItem.h>

@class NSString, AVTCoreModelColor, AVTColorPreset;

@interface AVTAvatarAttributeEditorSectionColorItem : NSObject <AVTAvatarAttributeEditorSectionItemInternal, AVTAvatarAttributeEditorSectionItem> {

	BOOL _selected;
	BOOL _hasDerivedColorDependency;
	NSString* _identifier;
	NSString* _localizedName;
	/*^block*/id _avatarUpdater;
	AVTCoreModelColor* _color;
	/*^block*/id _layerContentProvider;
	/*^block*/id _gradientProvider;
	AVTColorPreset* _skinColor;

}

@property (nonatomic,copy,readonly) id layerContentProvider;               //@synthesize layerContentProvider=_layerContentProvider - In the implementation block
@property (nonatomic,copy,readonly) id gradientProvider;                   //@synthesize gradientProvider=_gradientProvider - In the implementation block
@property (nonatomic,readonly) AVTCoreModelColor * color;                  //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) AVTColorPreset * skinColor;                 //@synthesize skinColor=_skinColor - In the implementation block
@property (assign,nonatomic) BOOL hasDerivedColorDependency;               //@synthesize hasDerivedColorDependency=_hasDerivedColorDependency - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) id avatarUpdater;                      //@synthesize avatarUpdater=_avatarUpdater - In the implementation block
-(NSString *)localizedName;
-(AVTCoreModelColor *)color;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)description;
-(AVTColorPreset *)skinColor;
-(id)initWithColor:(id)arg1 skinColor:(id)arg2 imageProvider:(id)arg3 colorLayerProvider:(id)arg4 avatarUpdater:(/*^block*/id)arg5 derivedColorDependent:(BOOL)arg6 selected:(BOOL)arg7 ;
-(id)avatarUpdater;
-(id)initWithColor:(id)arg1 imageProvider:(id)arg2 colorLayerProvider:(id)arg3 avatarUpdater:(/*^block*/id)arg4 derivedColorDependent:(BOOL)arg5 selected:(BOOL)arg6 ;
-(id)colorPreset;
-(id)layerContentProvider;
-(id)gradientProvider;
-(BOOL)hasDerivedColorDependency;
-(void)setHasDerivedColorDependency:(BOOL)arg1 ;
-(NSString *)identifier;
@end

