/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class HMCameraClip, CALayer, UIView;

@interface HUClipCollectionViewCell : UICollectionViewCell {

	unsigned long long _displayMode;
	HMCameraClip* _clip;
	CALayer* _badgeLayer;
	UIView* _posterFramesContainerView;
	UIView* _dayBoundaryView;

}

@property (assign,nonatomic) unsigned long long displayMode;                  //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic,__weak) HMCameraClip * clip;                      //@synthesize clip=_clip - In the implementation block
@property (nonatomic,retain) CALayer * badgeLayer;                            //@synthesize badgeLayer=_badgeLayer - In the implementation block
@property (nonatomic,retain) UIView * posterFramesContainerView;              //@synthesize posterFramesContainerView=_posterFramesContainerView - In the implementation block
@property (nonatomic,retain) UIView * dayBoundaryView;                        //@synthesize dayBoundaryView=_dayBoundaryView - In the implementation block
+(id)backgroundColor;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)displayMode;
-(HMCameraClip *)clip;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(void)setClip:(HMCameraClip *)arg1 ;
-(void)updateWithClip:(id)arg1 mode:(unsigned long long)arg2 ;
-(UIView *)posterFramesContainerView;
-(UIView *)dayBoundaryView;
-(id)_badgeImageForSignificantEventReasons:(id)arg1 ;
-(CALayer *)badgeLayer;
-(void)_addPosterFrameViews;
-(void)_addDayBoundaryIfNeeded;
-(void)_synchronizeLoadingIndicators;
-(void)_drawEventMarkers;
-(void)_updateBadgeLayerWithEvents:(id)arg1 inRect:(CGRect)arg2 ;
-(void)_updateBadgeLayerWithImage:(id)arg1 inRect:(CGRect)arg2 ;
-(void)preparePosterFrameViewsForReuse;
-(void)setBadgeLayer:(CALayer *)arg1 ;
-(void)setPosterFramesContainerView:(UIView *)arg1 ;
-(void)setDayBoundaryView:(UIView *)arg1 ;
@end

