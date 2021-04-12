/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBApplicationSceneBackgroundView.h>

@protocol SBApplicationSceneBackgroundView;
@class NSString;

@interface _SBInCallProxySceneBackgroundView : UIView <SBApplicationSceneBackgroundView> {

	id<SBApplicationSceneBackgroundView> _proxyTarget;

}

@property (assign,nonatomic,__weak) id<SBApplicationSceneBackgroundView> proxyTarget;              //@synthesize proxyTarget=_proxyTarget - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (assign,nonatomic) long long wallpaperStyle; 
@property (assign,nonatomic) BOOL needsClassicModeBackground; 
@property (assign,nonatomic) BOOL shouldUseBrightMaterial; 
@property (assign,nonatomic) unsigned long long transformOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFullscreen;
-(long long)wallpaperStyle;
-(void)setFullscreen:(BOOL)arg1 ;
-(BOOL)needsClassicModeBackground;
-(void)setWallpaperStyle:(long long)arg1 ;
-(void)setShouldUseBrightMaterial:(BOOL)arg1 ;
-(BOOL)shouldUseBrightMaterial;
-(void)setNeedsClassicModeBackground:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 proxyTarget:(id)arg2 ;
-(void)setProxyTarget:(id<SBApplicationSceneBackgroundView>)arg1 ;
-(id<SBApplicationSceneBackgroundView>)proxyTarget;
@end

