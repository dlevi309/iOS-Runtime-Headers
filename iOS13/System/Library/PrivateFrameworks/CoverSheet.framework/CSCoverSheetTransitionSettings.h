/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface CSCoverSheetTransitionSettings : PTSettings <BSDescriptionProviding> {

	BOOL _blursPanel;
	BOOL _fadesContent;
	BOOL _darkensContent;
	BOOL _panelWallpaper;
	BOOL _trackingWallpaper;
	BOOL _revealWallpaper;
	BOOL _fadePanelWallpaper;
	BOOL _iconsFlyIn;
	double _blurRadius;
	double _blurStart;
	double _blurEnd;
	double _blurEndReducedTransparency;
	double _maxContentAlpha;
	double _contentFadeStart;
	double _contentFadeEnd;
	double _darkeningColorWhite;
	double _darkeningColorAlpha;
	double _darkeningStart;
	double _darkeningEnd;
	double _trackingWallpaperParallaxFactor;
	double _fadePanelWallpaperStart;
	double _fadePanelWallpaperEnd;

}

@property (assign,nonatomic) BOOL blursPanel;                                     //@synthesize blursPanel=_blursPanel - In the implementation block
@property (assign,nonatomic) double blurRadius;                                   //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) double blurStart;                                    //@synthesize blurStart=_blurStart - In the implementation block
@property (assign,nonatomic) double blurEnd;                                      //@synthesize blurEnd=_blurEnd - In the implementation block
@property (assign,nonatomic) double blurEndReducedTransparency;                   //@synthesize blurEndReducedTransparency=_blurEndReducedTransparency - In the implementation block
@property (assign,nonatomic) BOOL fadesContent;                                   //@synthesize fadesContent=_fadesContent - In the implementation block
@property (assign,nonatomic) double maxContentAlpha;                              //@synthesize maxContentAlpha=_maxContentAlpha - In the implementation block
@property (assign,nonatomic) double contentFadeStart;                             //@synthesize contentFadeStart=_contentFadeStart - In the implementation block
@property (assign,nonatomic) double contentFadeEnd;                               //@synthesize contentFadeEnd=_contentFadeEnd - In the implementation block
@property (assign,nonatomic) BOOL darkensContent;                                 //@synthesize darkensContent=_darkensContent - In the implementation block
@property (assign,nonatomic) double darkeningColorWhite;                          //@synthesize darkeningColorWhite=_darkeningColorWhite - In the implementation block
@property (assign,nonatomic) double darkeningColorAlpha;                          //@synthesize darkeningColorAlpha=_darkeningColorAlpha - In the implementation block
@property (assign,nonatomic) double darkeningStart;                               //@synthesize darkeningStart=_darkeningStart - In the implementation block
@property (assign,nonatomic) double darkeningEnd;                                 //@synthesize darkeningEnd=_darkeningEnd - In the implementation block
@property (assign,nonatomic) BOOL panelWallpaper;                                 //@synthesize panelWallpaper=_panelWallpaper - In the implementation block
@property (assign,nonatomic) BOOL trackingWallpaper;                              //@synthesize trackingWallpaper=_trackingWallpaper - In the implementation block
@property (assign,nonatomic) double trackingWallpaperParallaxFactor;              //@synthesize trackingWallpaperParallaxFactor=_trackingWallpaperParallaxFactor - In the implementation block
@property (assign,nonatomic) BOOL revealWallpaper;                                //@synthesize revealWallpaper=_revealWallpaper - In the implementation block
@property (assign,nonatomic) BOOL fadePanelWallpaper;                             //@synthesize fadePanelWallpaper=_fadePanelWallpaper - In the implementation block
@property (assign,nonatomic) double fadePanelWallpaperStart;                      //@synthesize fadePanelWallpaperStart=_fadePanelWallpaperStart - In the implementation block
@property (assign,nonatomic) double fadePanelWallpaperEnd;                        //@synthesize fadePanelWallpaperEnd=_fadePanelWallpaperEnd - In the implementation block
@property (assign,nonatomic) BOOL iconsFlyIn;                                     //@synthesize iconsFlyIn=_iconsFlyIn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsControllerModule;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(void)setDefaultValues;
-(double)blurRadius;
-(void)setBlursPanel:(BOOL)arg1 ;
-(void)setPanelWallpaper:(BOOL)arg1 ;
-(void)setRevealWallpaper:(BOOL)arg1 ;
-(void)setIconsFlyIn:(BOOL)arg1 ;
-(void)setBlurStart:(double)arg1 ;
-(void)setBlurEnd:(double)arg1 ;
-(void)setBlurEndReducedTransparency:(double)arg1 ;
-(void)setFadesContent:(BOOL)arg1 ;
-(void)setMaxContentAlpha:(double)arg1 ;
-(void)setContentFadeStart:(double)arg1 ;
-(void)setContentFadeEnd:(double)arg1 ;
-(void)setDarkensContent:(BOOL)arg1 ;
-(void)setDarkeningColorWhite:(double)arg1 ;
-(void)setDarkeningColorAlpha:(double)arg1 ;
-(void)setDarkeningStart:(double)arg1 ;
-(void)setDarkeningEnd:(double)arg1 ;
-(void)setTrackingWallpaper:(BOOL)arg1 ;
-(void)setTrackingWallpaperParallaxFactor:(double)arg1 ;
-(void)setFadePanelWallpaper:(BOOL)arg1 ;
-(void)setFadePanelWallpaperStart:(double)arg1 ;
-(void)setFadePanelWallpaperEnd:(double)arg1 ;
-(BOOL)panelWallpaper;
-(BOOL)trackingWallpaper;
-(BOOL)blursPanel;
-(double)blurStart;
-(double)blurEnd;
-(double)blurEndReducedTransparency;
-(BOOL)fadesContent;
-(double)contentFadeStart;
-(double)contentFadeEnd;
-(double)maxContentAlpha;
-(BOOL)darkensContent;
-(double)darkeningStart;
-(double)darkeningEnd;
-(double)darkeningColorWhite;
-(double)darkeningColorAlpha;
-(double)trackingWallpaperParallaxFactor;
-(BOOL)fadePanelWallpaper;
-(double)fadePanelWallpaperStart;
-(double)fadePanelWallpaperEnd;
-(BOOL)revealWallpaper;
-(BOOL)iconsFlyIn;
@end

