/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class MediaControlsTransportStackView, MediaControlsTimeControl, UIVisualEffectView, MPCPlayerResponse;

@interface MediaControlsContainerView : UIView {

	BOOL _empty;
	long long _style;
	MediaControlsTransportStackView* _transportStackView;
	MediaControlsTimeControl* _timeControl;
	UIVisualEffectView* _primaryVisualEffectView;

}

@property (nonatomic,retain) UIVisualEffectView * primaryVisualEffectView;                       //@synthesize primaryVisualEffectView=_primaryVisualEffectView - In the implementation block
@property (assign,nonatomic) long long style;                                                    //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) MPCPlayerResponse * response; 
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                          //@synthesize empty=_empty - In the implementation block
@property (assign,getter=isTimeControlOnScreen,nonatomic) BOOL timeControlOnScreen; 
@property (nonatomic,retain) MediaControlsTransportStackView * transportStackView;               //@synthesize transportStackView=_transportStackView - In the implementation block
@property (nonatomic,retain) MediaControlsTimeControl * timeControl;                             //@synthesize timeControl=_timeControl - In the implementation block
-(void)_updateStyle;
-(MediaControlsTimeControl *)timeControl;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isTimeControlOnScreen;
-(void)setRatingActionSheetDelegate:(id)arg1 ;
-(MediaControlsTransportStackView *)transportStackView;
-(void)setTransportStackView:(MediaControlsTransportStackView *)arg1 ;
-(void)layoutSubviews;
-(MPCPlayerResponse *)response;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setResponse:(MPCPlayerResponse *)arg1 ;
-(void)setPrimaryVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setTimeControl:(MediaControlsTimeControl *)arg1 ;
-(UIVisualEffectView *)primaryVisualEffectView;
-(void)setStyle:(long long)arg1 ;
-(BOOL)isEmpty;
-(void)setTimeControlOnScreen:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)style;
-(void)setEmpty:(BOOL)arg1 ;
@end

