/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <PrototypeTools/PTSettings.h>

@class SBFParallaxSettings;

@interface SBHIconSettings : PTSettings {

	BOOL _suppressJitter;
	BOOL _closeBoxesEverywhere;
	BOOL _alwaysHitTestNearestIcon;
	double _iconHitboxPaddingX;
	double _iconHitboxPaddingY;
	SBFParallaxSettings* _iconParallaxSettings;
	SBFParallaxSettings* _badgeParallaxSettings;

}

@property (assign,nonatomic) BOOL suppressJitter;                                      //@synthesize suppressJitter=_suppressJitter - In the implementation block
@property (assign,nonatomic) BOOL closeBoxesEverywhere;                                //@synthesize closeBoxesEverywhere=_closeBoxesEverywhere - In the implementation block
@property (assign,nonatomic) BOOL alwaysHitTestNearestIcon;                            //@synthesize alwaysHitTestNearestIcon=_alwaysHitTestNearestIcon - In the implementation block
@property (assign,nonatomic) double iconHitboxPaddingX;                                //@synthesize iconHitboxPaddingX=_iconHitboxPaddingX - In the implementation block
@property (assign,nonatomic) double iconHitboxPaddingY;                                //@synthesize iconHitboxPaddingY=_iconHitboxPaddingY - In the implementation block
@property (nonatomic,retain) SBFParallaxSettings * iconParallaxSettings;               //@synthesize iconParallaxSettings=_iconParallaxSettings - In the implementation block
@property (nonatomic,retain) SBFParallaxSettings * badgeParallaxSettings;              //@synthesize badgeParallaxSettings=_badgeParallaxSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBFParallaxSettings *)badgeParallaxSettings;
-(BOOL)suppressJitter;
-(SBFParallaxSettings *)iconParallaxSettings;
-(BOOL)closeBoxesEverywhere;
-(void)setSuppressJitter:(BOOL)arg1 ;
-(void)setCloseBoxesEverywhere:(BOOL)arg1 ;
-(void)setAlwaysHitTestNearestIcon:(BOOL)arg1 ;
-(void)setIconHitboxPaddingX:(double)arg1 ;
-(void)setIconHitboxPaddingY:(double)arg1 ;
-(BOOL)alwaysHitTestNearestIcon;
-(double)iconHitboxPaddingX;
-(double)iconHitboxPaddingY;
-(void)setIconParallaxSettings:(SBFParallaxSettings *)arg1 ;
-(void)setBadgeParallaxSettings:(SBFParallaxSettings *)arg1 ;
@end

