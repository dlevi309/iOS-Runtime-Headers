/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel;

@interface PUPlaybackTimeLabel : UIView {

	BOOL __needsUpdateBackground;
	BOOL __needsUpdateLabel;
	long long _format;
	UIView* __backgroundView;
	UILabel* __label;
	SCD_Struct_PH4 _currentPlaybackTime;
	SCD_Struct_PH4 _playbackDuration;

}

@property (nonatomic,readonly) UIView * _backgroundView;                                                 //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * _label;                                                         //@synthesize _label=__label - In the implementation block
@property (assign,setter=_setNeedsUpdateBackground:,nonatomic) BOOL _needsUpdateBackground;              //@synthesize _needsUpdateBackground=__needsUpdateBackground - In the implementation block
@property (assign,setter=_setNeedsUpdateLabel:,nonatomic) BOOL _needsUpdateLabel;                        //@synthesize _needsUpdateLabel=__needsUpdateLabel - In the implementation block
@property (assign,nonatomic) long long format;                                                           //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 currentPlaybackTime;                                         //@synthesize currentPlaybackTime=_currentPlaybackTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 playbackDuration;                                            //@synthesize playbackDuration=_playbackDuration - In the implementation block
-(UILabel *)_label;
-(void)setFormat:(long long)arg1 ;
-(SCD_Struct_PH4)playbackDuration;
-(long long)format;
-(void)_invalidateLabel;
-(void)_updateLabelIfNeeded;
-(CGSize)_maximumLabelSizeWithDuration:(double)arg1 ;
-(id)_labelTextWithFormat:(long long)arg1 elapsedInterval:(double)arg2 remainingInterval:(double)arg3 ;
-(id)_stringFromTimeInterval:(double)arg1 ;
-(BOOL)_needsUpdateBackground;
-(void)_setNeedsUpdateBackground:(BOOL)arg1 ;
-(BOOL)_needsUpdateLabel;
-(void)_setNeedsUpdateLabel:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)_backgroundView;
-(void)_updateBackgroundIfNeeded;
-(void)_updateIfNeeded;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_needsUpdate;
-(SCD_Struct_PH4)currentPlaybackTime;
-(void)_invalidateBackground;
-(void)_setNeedsUpdate;
-(void)setCurrentPlaybackTime:(SCD_Struct_PH4)arg1 ;
-(void)setPlaybackDuration:(SCD_Struct_PH4)arg1 ;
@end

