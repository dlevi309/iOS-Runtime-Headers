/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@class PXSwipeDownSettings;

@interface PXViewControllerSwipeDownTransitionSettings : PXSettings {

	BOOL _allowSwipeDown;
	double _minimumDimmingOpacity;
	PXSwipeDownSettings* _swipeDownSettings;

}

@property (assign,nonatomic) BOOL allowSwipeDown;                                  //@synthesize allowSwipeDown=_allowSwipeDown - In the implementation block
@property (assign,nonatomic) double minimumDimmingOpacity;                         //@synthesize minimumDimmingOpacity=_minimumDimmingOpacity - In the implementation block
@property (nonatomic,retain) PXSwipeDownSettings * swipeDownSettings;              //@synthesize swipeDownSettings=_swipeDownSettings - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(PXSwipeDownSettings *)swipeDownSettings;
-(void)setAllowSwipeDown:(BOOL)arg1 ;
-(double)minimumDimmingOpacity;
-(BOOL)allowSwipeDown;
-(void)createChildren;
-(void)setSwipeDownSettings:(PXSwipeDownSettings *)arg1 ;
-(void)setMinimumDimmingOpacity:(double)arg1 ;
@end

