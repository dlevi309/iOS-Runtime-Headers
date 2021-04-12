/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NTKEditOptionTransitioningViewDelegate;
@class UIView, UIImageView, NTKEditOption;

@interface NTKEditOptionTransitioningView : UIView {

	UIView* _transitionContainer;
	UIView* _transitionDimmingView;
	double _breathScaleModifier;
	double _rubberBandScaleModifier;
	UIImageView* _toTransitionImageView;
	UIImageView* _fromTransitionImageView;
	id<NTKEditOptionTransitioningViewDelegate> _delegate;
	NTKEditOption* _toEditOption;
	NTKEditOption* _fromEditOption;

}

@property (nonatomic,retain) NTKEditOption * toEditOption;                                            //@synthesize toEditOption=_toEditOption - In the implementation block
@property (nonatomic,retain) NTKEditOption * fromEditOption;                                          //@synthesize fromEditOption=_fromEditOption - In the implementation block
@property (assign,nonatomic,__weak) id<NTKEditOptionTransitioningViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NTKEditOptionTransitioningViewDelegate>)delegate;
-(void)setDelegate:(id<NTKEditOptionTransitioningViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)setOption:(id)arg1 ;
-(void)_updateUnifiedScaleTransform;
-(void)setFromEditOption:(NTKEditOption *)arg1 ;
-(void)setToEditOption:(NTKEditOption *)arg1 ;
-(void)_resetTransitionImageView:(id)arg1 ;
-(void)setBreatheFraction:(double)arg1 ;
-(void)setRubberBandingFraction:(double)arg1 ;
-(void)setDimmingAlpha:(double)arg1 ;
-(void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 ;
-(NTKEditOption *)toEditOption;
-(NTKEditOption *)fromEditOption;
@end

