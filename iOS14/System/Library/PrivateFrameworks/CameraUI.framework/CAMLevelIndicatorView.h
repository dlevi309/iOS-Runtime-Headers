/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAMLevelViewModelChangeObserver.h>

@class CAMLevelViewModel, CAMLevelCrosshair, NSString;

@interface CAMLevelIndicatorView : UIView <CAMLevelViewModelChangeObserver> {

	CAMLevelViewModel* _viewModel;
	CAMLevelCrosshair* __goalCrosshair;
	CAMLevelCrosshair* __userCrosshair;

}

@property (nonatomic,readonly) CAMLevelCrosshair * _goalCrosshair;              //@synthesize _goalCrosshair=__goalCrosshair - In the implementation block
@property (nonatomic,readonly) CAMLevelCrosshair * _userCrosshair;              //@synthesize _userCrosshair=__userCrosshair - In the implementation block
@property (nonatomic,readonly) CAMLevelViewModel * viewModel;                   //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewModel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CAMLevelViewModel *)viewModel;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)observable:(id)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void*)arg3 ;
-(void)_commonCAMLevelIndicatorViewInitializationWithViewModel:(id)arg1 ;
-(void)_updateCrosshairAlphasWithAlpha:(double)arg1 indicatorMode:(long long)arg2 ;
-(void)_updateCrosshairHighlightWithOffset:(UIOffset)arg1 ;
-(CAMLevelCrosshair *)_userCrosshair;
-(CAMLevelCrosshair *)_goalCrosshair;
@end

