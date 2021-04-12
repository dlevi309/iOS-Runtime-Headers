/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

@class SBFParallaxSettings;


@protocol SBIconAccessoryView <SBReusableView>
@property (nonatomic,retain) SBFParallaxSettings * parallaxSettings; 
@property (nonatomic,retain) id<SBIconListLayout> listLayout; 
@optional
-(void)setListLayout:(id)arg1;
-(id<SBIconListLayout>)listLayout;
-(void)setParallaxSettings:(id)arg1;
-(SBFParallaxSettings *)parallaxSettings;

@required
-(CGPoint*)accessoryCenterForIconBounds:(CGRect)arg1;
-(void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 animator:(id)arg3;
-(BOOL)displayingAccessory;
-(void)configureForIcon:(id)arg1 infoProvider:(id)arg2;
-(void)setAccessoryBrightness:(double)arg1;

@end

