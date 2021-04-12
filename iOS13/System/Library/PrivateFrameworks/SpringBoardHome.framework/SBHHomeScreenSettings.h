/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <PrototypeTools/PTSettings.h>

@class SBHIconAnimationRootSettings, SBHIconSettings, SBHFolderSettings, SBHRootFolderSettings;

@interface SBHHomeScreenSettings : PTSettings {

	BOOL _usesMinimumViableHomeScreen;
	BOOL _showPopOvers;
	BOOL _showWidgets;
	double _defaultDragInteractionLiftDelay;
	SBHIconAnimationRootSettings* _iconAnimationSettings;
	SBHIconSettings* _iconSettings;
	SBHFolderSettings* _folderSettings;
	SBHRootFolderSettings* _rootFolderSettings;

}

@property (assign,nonatomic) BOOL usesMinimumViableHomeScreen;                                  //@synthesize usesMinimumViableHomeScreen=_usesMinimumViableHomeScreen - In the implementation block
@property (assign,nonatomic) BOOL showPopOvers;                                                 //@synthesize showPopOvers=_showPopOvers - In the implementation block
@property (assign,nonatomic) BOOL showWidgets;                                                  //@synthesize showWidgets=_showWidgets - In the implementation block
@property (assign,nonatomic) double defaultDragInteractionLiftDelay;                            //@synthesize defaultDragInteractionLiftDelay=_defaultDragInteractionLiftDelay - In the implementation block
@property (nonatomic,retain) SBHIconAnimationRootSettings * iconAnimationSettings;              //@synthesize iconAnimationSettings=_iconAnimationSettings - In the implementation block
@property (nonatomic,retain) SBHIconSettings * iconSettings;                                    //@synthesize iconSettings=_iconSettings - In the implementation block
@property (nonatomic,retain) SBHFolderSettings * folderSettings;                                //@synthesize folderSettings=_folderSettings - In the implementation block
@property (nonatomic,retain) SBHRootFolderSettings * rootFolderSettings;                        //@synthesize rootFolderSettings=_rootFolderSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBHIconAnimationRootSettings *)iconAnimationSettings;
-(SBHIconSettings *)iconSettings;
-(BOOL)showWidgets;
-(BOOL)showPopOvers;
-(SBHRootFolderSettings *)rootFolderSettings;
-(SBHFolderSettings *)folderSettings;
-(void)setFolderSettings:(SBHFolderSettings *)arg1 ;
-(BOOL)usesMinimumViableHomeScreen;
-(void)setUsesMinimumViableHomeScreen:(BOOL)arg1 ;
-(void)setShowPopOvers:(BOOL)arg1 ;
-(void)setShowWidgets:(BOOL)arg1 ;
-(void)setDefaultDragInteractionLiftDelay:(double)arg1 ;
-(double)defaultDragInteractionLiftDelay;
-(void)setIconAnimationSettings:(SBHIconAnimationRootSettings *)arg1 ;
-(void)setIconSettings:(SBHIconSettings *)arg1 ;
-(void)setRootFolderSettings:(SBHRootFolderSettings *)arg1 ;
@end

