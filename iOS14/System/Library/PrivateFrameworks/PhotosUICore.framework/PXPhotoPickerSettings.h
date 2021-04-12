/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXPhotoPickerSettings : PXSettings {

	BOOL _useLibraryPresentation;
	BOOL _useGadgetsAlbumsTab;
	BOOL _hideSearchBarWhenScrolling;

}

@property (assign,nonatomic) BOOL useLibraryPresentation;                  //@synthesize useLibraryPresentation=_useLibraryPresentation - In the implementation block
@property (assign,nonatomic) BOOL useGadgetsAlbumsTab;                     //@synthesize useGadgetsAlbumsTab=_useGadgetsAlbumsTab - In the implementation block
@property (assign,nonatomic) BOOL hideSearchBarWhenScrolling;              //@synthesize hideSearchBarWhenScrolling=_hideSearchBarWhenScrolling - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setHideSearchBarWhenScrolling:(BOOL)arg1 ;
-(void)setUseLibraryPresentation:(BOOL)arg1 ;
-(BOOL)useGadgetsAlbumsTab;
-(BOOL)hideSearchBarWhenScrolling;
-(BOOL)useLibraryPresentation;
-(void)setUseGadgetsAlbumsTab:(BOOL)arg1 ;
@end

