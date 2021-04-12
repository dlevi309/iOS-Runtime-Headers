/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <BridgePreferences/BridgePreferences-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, BPSRemoteImageView, UIImageView;

@interface BPSWatchView : UIView {

	BOOL _wantsLightenBlendedScreen;
	NSString* _screenImageSearchBundleIdentifier;
	NSString* _screenImageName;
	unsigned long long _style;
	unsigned long long _sizeOverride;
	BPSRemoteImageView* _watchImageView;
	NSString* _styleVersionSuffix;
	UIImageView* _watchScreenImageView;

}

@property (assign,nonatomic) unsigned long long style;                                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long sizeOverride;                           //@synthesize sizeOverride=_sizeOverride - In the implementation block
@property (nonatomic,retain) BPSRemoteImageView * watchImageView;                       //@synthesize watchImageView=_watchImageView - In the implementation block
@property (nonatomic,copy) NSString * styleVersionSuffix;                               //@synthesize styleVersionSuffix=_styleVersionSuffix - In the implementation block
@property (nonatomic,readonly) UIImageView * watchScreenImageView;                      //@synthesize watchScreenImageView=_watchScreenImageView - In the implementation block
@property (assign,nonatomic) BOOL wantsLightenBlendedScreen;                            //@synthesize wantsLightenBlendedScreen=_wantsLightenBlendedScreen - In the implementation block
@property (nonatomic,retain) NSString * screenImageSearchBundleIdentifier;              //@synthesize screenImageSearchBundleIdentifier=_screenImageSearchBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * screenImageName;                                  //@synthesize screenImageName=_screenImageName - In the implementation block
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)image;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(BOOL)wantsLightenBlendedScreen;
-(void)setWantsLightenBlendedScreen:(BOOL)arg1 ;
-(void)setScreenImageSearchBundleIdentifier:(NSString *)arg1 ;
-(void)setScreenImageName:(NSString *)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 versionModifier:(id)arg2 allowsMaterialFallback:(BOOL)arg3 ;
-(id)watchAssetBundle;
-(id)screenBackground:(CGSize)arg1 ;
-(void)applyScreenStyle;
-(unsigned long long)deviceSize;
-(CGSize)screenImageSize;
-(void)setSizeOverride:(unsigned long long)arg1 ;
-(BPSRemoteImageView *)watchImageView;
-(id)initWithStyle:(unsigned long long)arg1 andVersionModifier:(id)arg2 ;
-(id)initWithStyle:(unsigned long long)arg1 allowsMaterialFallback:(BOOL)arg2 ;
-(void)_cleanedImageName:(id*)arg1 withFallbackImage:(id*)arg2 ;
-(void)overrideMaterial:(unsigned long long)arg1 size:(unsigned long long)arg2 ;
-(NSString *)screenImageSearchBundleIdentifier;
-(NSString *)screenImageName;
-(unsigned long long)sizeOverride;
-(void)setWatchImageView:(BPSRemoteImageView *)arg1 ;
-(NSString *)styleVersionSuffix;
-(void)setStyleVersionSuffix:(NSString *)arg1 ;
-(UIImageView *)watchScreenImageView;
@end

