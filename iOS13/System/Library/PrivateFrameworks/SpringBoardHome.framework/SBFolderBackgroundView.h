/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SBFolderBackgroundViewDelegate;
@class UIView, MTMaterialView;

@interface SBFolderBackgroundView : UIView {

	UIView* _tintView;
	MTMaterialView* _blurView;
	double _continuousCornerRadius;
	id<SBFolderBackgroundViewDelegate> _delegate;
	unsigned long long _effect;
	unsigned long long _currentEffect;

}

@property (assign,nonatomic) unsigned long long currentEffect;                                //@synthesize currentEffect=_currentEffect - In the implementation block
@property (assign,nonatomic,__weak) id<SBFolderBackgroundViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long effect;                                       //@synthesize effect=_effect - In the implementation block
@property (nonatomic,readonly) unsigned long long concreteEffect; 
+(void)warmupIfNecessary;
+(CGSize)folderBackgroundSize;
+(double)cornerRadiusToInsetContent;
-(id<SBFolderBackgroundViewDelegate>)delegate;
-(void)setDelegate:(id<SBFolderBackgroundViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEffect:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(unsigned long long)effect;
-(unsigned long long)currentEffect;
-(void)setCurrentEffect:(unsigned long long)arg1 ;
-(void)_reduceTransparencyChanged;
-(void)_updateCurrentEffect;
-(void)updateTintEffectColor;
-(unsigned long long)concreteEffect;
-(id)_tintViewBackgroundColorAtFullAlpha;
-(BOOL)_hasLowQualityBackground;
@end

