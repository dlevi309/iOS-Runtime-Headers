/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBlurRadius:(double)arg1 ;
-(void)setDefaultValues;
-(id)succinctDescription;
-(void)setBlurStart:(double)arg1 ;
-(void)setContentFadeEnd:(double)arg1 ;
-(void)setFadePanelWallpaper:(BOOL)arg1 ;
-(BOOL)fadesContent;
-(void)setBlurEndReducedTransparency:(double)arg1 ;
-(BOOL)panelWallpaper;
-(BOOL)iconsFlyIn;
-(double)blurStart;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setBlursPanel:(BOOL)arg1 ;
-(double)blurRadius;
-(BOOL)trackingWallpaper;
-(void)setTrackingWallpaper:(BOOL)arg1 ;
-(double)maxContentAlpha;
-(double)contentFadeEnd;
-(BOOL)blursPanel;
-(double)darkeningColorWhite;
-(double)darkeningColorAlpha;
-(void)setDarkensContent:(BOOL)arg1 ;
-(void)setDarkeningColorAlpha:(double)arg1 ;
-(void)setMaxContentAlpha:(double)arg1 ;
-(double)darkeningStart;
-(NSString *)description;
-(void)setRevealWallpaper:(BOOL)arg1 ;
-(void)setBlurEnd:(double)arg1 ;
-(double)contentFadeStart;
-(double)fadePanelWallpaperEnd;
-(double)blurEnd;
-(double)fadePanelWallpaperStart;
-(void)setDarkeningEnd:(double)arg1 ;
-(void)setPanelWallpaper:(BOOL)arg1 ;
-(double)trackingWallpaperParallaxFactor;
-(void)setFadesContent:(BOOL)arg1 ;
-(void)setContentFadeStart:(double)arg1 ;
-(void)setFadePanelWallpaperEnd:(double)arg1 ;
-(BOOL)revealWallpaper;
-(double)blurEndReducedTransparency;
-(double)darkeningEnd;
-(void)setDarkeningStart:(double)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setDarkeningColorWhite:(double)arg1 ;
-(void)setTrackingWallpaperParallaxFactor:(double)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)darkensContent;
-(void)setIconsFlyIn:(BOOL)arg1 ;
-(BOOL)fadePanelWallpaper;
-(void)setFadePanelWallpaperStart:(double)arg1 ;
@end

