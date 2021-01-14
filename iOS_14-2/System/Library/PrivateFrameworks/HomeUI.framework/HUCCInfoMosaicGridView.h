/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUProvidesMosaicFrames;
@class UILabel, UIImageView, UIStackView, HUCCFakeMosaicGridView, NSArray, HUMosaicLayoutGeometry;

@interface HUCCInfoMosaicGridView : UIView {

	id<HUProvidesMosaicFrames> _frameDelegate;
	UILabel* _infoLabel;
	UILabel* _actionLabel;
	UIImageView* _iconView;
	UIStackView* _stackView;
	HUCCFakeMosaicGridView* _backgroundGridView;
	NSArray* _infoMosaicConstraints;

}

@property (nonatomic,retain) UILabel * infoLabel;                                          //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UILabel * actionLabel;                                        //@synthesize actionLabel=_actionLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                       //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                      //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) HUCCFakeMosaicGridView * backgroundGridView;                  //@synthesize backgroundGridView=_backgroundGridView - In the implementation block
@property (nonatomic,retain) NSArray * infoMosaicConstraints;                              //@synthesize infoMosaicConstraints=_infoMosaicConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<HUProvidesMosaicFrames> frameDelegate;              //@synthesize frameDelegate=_frameDelegate - In the implementation block
@property (nonatomic,retain) HUMosaicLayoutGeometry * mosaicLayoutGeometry; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_invalidateConstraints;
-(UIStackView *)stackView;
-(UILabel *)actionLabel;
-(void)setActionLabel:(UILabel *)arg1 ;
-(void)updateConstraints;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(UILabel *)infoLabel;
-(void)resetView;
-(void)setFrameDelegate:(id<HUProvidesMosaicFrames>)arg1 ;
-(id<HUProvidesMosaicFrames>)frameDelegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(HUMosaicLayoutGeometry *)mosaicLayoutGeometry;
-(void)setMosaicLayoutGeometry:(HUMosaicLayoutGeometry *)arg1 ;
-(void)updateUIWithInfoText:(id)arg1 andActionText:(id)arg2 ;
-(void)_setupInfoMosaicView;
-(HUCCFakeMosaicGridView *)backgroundGridView;
-(NSArray *)infoMosaicConstraints;
-(void)setInfoMosaicConstraints:(NSArray *)arg1 ;
-(void)setBackgroundGridView:(HUCCFakeMosaicGridView *)arg1 ;
@end

