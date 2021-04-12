/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEmpty;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(MPCPlayerResponse *)response;
-(void)setResponse:(MPCPlayerResponse *)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateStyle;
-(UIVisualEffectView *)primaryVisualEffectView;
-(void)setPrimaryVisualEffectView:(UIVisualEffectView *)arg1 ;
-(MediaControlsTransportStackView *)transportStackView;
-(void)setTransportStackView:(MediaControlsTransportStackView *)arg1 ;
-(MediaControlsTimeControl *)timeControl;
-(void)setTimeControl:(MediaControlsTimeControl *)arg1 ;
-(void)setTimeControlOnScreen:(BOOL)arg1 ;
-(BOOL)isTimeControlOnScreen;
-(void)setRatingActionSheetDelegate:(id)arg1 ;
@end

