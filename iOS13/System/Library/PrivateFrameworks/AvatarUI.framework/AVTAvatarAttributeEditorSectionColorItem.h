/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionItem.h>

@class NSString, AVTCoreModelColor, AVTColorPreset;

@interface AVTAvatarAttributeEditorSectionColorItem : NSObject <AVTAvatarAttributeEditorSectionItem> {

	BOOL _selected;
	NSString* _localizedName;
	/*^block*/id _avatarUpdater;
	/*^block*/id _layerContentProvider;
	/*^block*/id _gradientProvider;
	AVTCoreModelColor* _color;
	AVTColorPreset* _skinColor;

}

@property (nonatomic,copy,readonly) id layerContentProvider;               //@synthesize layerContentProvider=_layerContentProvider - In the implementation block
@property (nonatomic,copy,readonly) id gradientProvider;                   //@synthesize gradientProvider=_gradientProvider - In the implementation block
@property (nonatomic,readonly) AVTCoreModelColor * color;                  //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) AVTColorPreset * skinColor;                 //@synthesize skinColor=_skinColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) id avatarUpdater;                      //@synthesize avatarUpdater=_avatarUpdater - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
-(NSString *)description;
-(NSString *)localizedName;
-(AVTCoreModelColor *)color;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithColor:(id)arg1 skinColor:(id)arg2 imageProvider:(id)arg3 avatarUpdater:(/*^block*/id)arg4 selected:(BOOL)arg5 ;
-(id)avatarUpdater;
-(id)initWithColor:(id)arg1 imageProvider:(id)arg2 avatarUpdater:(/*^block*/id)arg3 selected:(BOOL)arg4 ;
-(id)layerContentProvider;
-(id)gradientProvider;
-(AVTColorPreset *)skinColor;
@end

