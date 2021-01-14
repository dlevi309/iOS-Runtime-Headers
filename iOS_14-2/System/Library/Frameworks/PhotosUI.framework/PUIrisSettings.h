/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXSettings.h>

@interface PUIrisSettings : PXSettings {

	BOOL _showStatusBorder;
	BOOL _vitalityAllowed;
	BOOL _shouldAlwaysBadge;

}

@property (assign,getter=showStatusBorder,nonatomic) BOOL showStatusBorder;              //@synthesize showStatusBorder=_showStatusBorder - In the implementation block
@property (assign,getter=isVitalityAllowed,nonatomic) BOOL vitalityAllowed;              //@synthesize vitalityAllowed=_vitalityAllowed - In the implementation block
@property (assign,nonatomic) BOOL shouldAlwaysBadge;                                     //@synthesize shouldAlwaysBadge=_shouldAlwaysBadge - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
+(id)_photosPlayerRootSettings;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)performPostSaveActions;
-(BOOL)showStatusBorder;
-(BOOL)isVitalityAllowed;
-(void)setVitalityAllowed:(BOOL)arg1 ;
-(void)setShouldAlwaysBadge:(BOOL)arg1 ;
-(BOOL)shouldAlwaysBadge;
-(void)restoreDefaultValues;
-(void)setShowStatusBorder:(BOOL)arg1 ;
@end

