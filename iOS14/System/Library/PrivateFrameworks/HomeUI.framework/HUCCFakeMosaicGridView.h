/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUProvidesMosaicFrames;
@class HUMosaicLayoutGeometry, NSMutableArray;

@interface HUCCFakeMosaicGridView : UIView {

	id<HUProvidesMosaicFrames> _frameDelegate;
	HUMosaicLayoutGeometry* _mosaicLayoutGeometry;
	NSMutableArray* _fakeCellLayers;
	CGRect _contentBounds;

}

@property (nonatomic,retain) NSMutableArray * fakeCellLayers;                              //@synthesize fakeCellLayers=_fakeCellLayers - In the implementation block
@property (assign,nonatomic) CGRect contentBounds;                                         //@synthesize contentBounds=_contentBounds - In the implementation block
@property (assign,nonatomic,__weak) id<HUProvidesMosaicFrames> frameDelegate;              //@synthesize frameDelegate=_frameDelegate - In the implementation block
@property (nonatomic,retain) HUMosaicLayoutGeometry * mosaicLayoutGeometry;                //@synthesize mosaicLayoutGeometry=_mosaicLayoutGeometry - In the implementation block
-(CGRect)contentBounds;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentBounds:(CGRect)arg1 ;
-(void)setFrameDelegate:(id<HUProvidesMosaicFrames>)arg1 ;
-(id<HUProvidesMosaicFrames>)frameDelegate;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(HUMosaicLayoutGeometry *)mosaicLayoutGeometry;
-(NSMutableArray *)fakeCellLayers;
-(void)setMosaicLayoutGeometry:(HUMosaicLayoutGeometry *)arg1 ;
-(void)setFakeCellLayers:(NSMutableArray *)arg1 ;
@end

