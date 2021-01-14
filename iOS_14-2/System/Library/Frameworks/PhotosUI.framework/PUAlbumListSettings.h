/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXSettings.h>

@interface PUAlbumListSettings : PXSettings {

	BOOL _shouldUseEditorialLayout;
	BOOL _shouldShowSubscriberMonograms;
	BOOL _combinePeoplePlacesAndMediaTypesOnIpad;
	BOOL _allowNavigationTitleEditing;
	double _avatarSpacing;

}

@property (assign,nonatomic) BOOL shouldUseEditorialLayout;                            //@synthesize shouldUseEditorialLayout=_shouldUseEditorialLayout - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSubscriberMonograms;                       //@synthesize shouldShowSubscriberMonograms=_shouldShowSubscriberMonograms - In the implementation block
@property (assign,nonatomic) double avatarSpacing;                                     //@synthesize avatarSpacing=_avatarSpacing - In the implementation block
@property (assign,nonatomic) BOOL combinePeoplePlacesAndMediaTypesOnIpad;              //@synthesize combinePeoplePlacesAndMediaTypesOnIpad=_combinePeoplePlacesAndMediaTypesOnIpad - In the implementation block
@property (assign,nonatomic) BOOL allowNavigationTitleEditing;                         //@synthesize allowNavigationTitleEditing=_allowNavigationTitleEditing - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(double)avatarSpacing;
-(BOOL)shouldUseEditorialLayout;
-(BOOL)combinePeoplePlacesAndMediaTypesOnIpad;
-(void)setCombinePeoplePlacesAndMediaTypesOnIpad:(BOOL)arg1 ;
-(BOOL)allowNavigationTitleEditing;
-(void)setAvatarSpacing:(double)arg1 ;
-(BOOL)shouldShowSubscriberMonograms;
-(void)setShouldShowSubscriberMonograms:(BOOL)arg1 ;
-(void)setAllowNavigationTitleEditing:(BOOL)arg1 ;
-(void)setShouldUseEditorialLayout:(BOOL)arg1 ;
@end

