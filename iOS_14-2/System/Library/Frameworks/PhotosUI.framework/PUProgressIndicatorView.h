/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, PLRoundProgressView, UIVisualEffectView, UILabel, NSArray, NSString;

@interface PUProgressIndicatorView : UIView {

	UIActivityIndicatorView* _spinnerView;
	PLRoundProgressView* _pieProgressView;
	UIVisualEffectView* _visualEffectView;
	UILabel* _messageLabel;
	NSArray* _spinnerViewConstraints;
	NSArray* _pieProgressViewConstraints;
	NSArray* _backgroundViewConstraints;
	NSArray* _messageLabelConstraints;
	NSArray* _labelAndSpinnerConstraints;
	NSArray* _labelAndPieProgressConstraints;
	BOOL _wantsImmediateHide;
	BOOL _wantsAnimatedHide;
	/*^block*/id _completionHandler;
	BOOL _isDeterminate;
	BOOL _showsBackground;
	long long _style;
	double _currentProgress;
	NSString* _localizedMessage;
	long long __currentState;
	double __timestampBeganShowing;

}

@property (assign,setter=_setCurrentState:,nonatomic) long long _currentState;                             //@synthesize _currentState=__currentState - In the implementation block
@property (assign,setter=_setTimestampBeganShowing:,nonatomic) double _timestampBeganShowing;              //@synthesize _timestampBeganShowing=__timestampBeganShowing - In the implementation block
@property (readonly) BOOL isStyleCompactBackground; 
@property (readonly) BOOL isStyleDark; 
@property (nonatomic,readonly) long long style;                                                            //@synthesize style=_style - In the implementation block
@property (getter=isShowingProgress,nonatomic,readonly) BOOL showingProgress; 
@property (assign,nonatomic) double currentProgress;                                                       //@synthesize currentProgress=_currentProgress - In the implementation block
@property (nonatomic,copy) NSString * localizedMessage;                                                    //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (assign,setter=setDeterminate:,nonatomic) BOOL isDeterminate;                                    //@synthesize isDeterminate=_isDeterminate - In the implementation block
@property (assign,nonatomic) BOOL showsBackground;                                                         //@synthesize showsBackground=_showsBackground - In the implementation block
@property (readonly) double defaultProgressIndicatorDelay; 
-(void)_setCurrentState:(long long)arg1 ;
-(long long)_currentState;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updatePieProgress;
-(id)_newVisualEffectBackgroundView;
-(void)_updateProgressViewsAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateProgressViewsWithAnimation:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleBeginShowingAnimated:(BOOL)arg1 wasImmediate:(BOOL)arg2 ;
-(void)_endShowingProgressIfReady;
-(BOOL)isStyleCompactBackground;
-(double)_timestampBeganShowing;
-(void)_setTimestampBeganShowing:(double)arg1 ;
-(BOOL)isDeterminate;
-(double)defaultProgressIndicatorDelay;
-(id)initWithStyle:(long long)arg1 ;
-(void)_updateSubviewsOrdering;
-(void)setCurrentProgress:(double)arg1 ;
-(void)setLocalizedMessage:(NSString *)arg1 ;
-(void)endShowingProgressImmediately:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)beginShowingProgressWithDelay:(double)arg1 animated:(BOOL)arg2 ;
-(void)setDeterminate:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)setShowsBackground:(BOOL)arg1 ;
-(double)currentProgress;
-(BOOL)showsBackground;
-(void)beginShowingProgressImmediately:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedMessage;
-(BOOL)isShowingProgress;
-(BOOL)isStyleDark;
-(long long)style;
@end

