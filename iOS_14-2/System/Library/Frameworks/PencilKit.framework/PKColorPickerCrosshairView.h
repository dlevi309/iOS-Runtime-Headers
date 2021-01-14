/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKColorPickerCrosshairViewDelegate;
@class _PKColorPickerSimpleCrosshairView, _PKColorPickerCrosshairCornerMaskView;

@interface PKColorPickerCrosshairView : UIView {

	id<PKColorPickerCrosshairViewDelegate> _delegate;
	unsigned long long _cornerPosition;
	_PKColorPickerSimpleCrosshairView* _baseView;
	_PKColorPickerCrosshairCornerMaskView* _baseMaskView;
	_PKColorPickerSimpleCrosshairView* _cornerEdgeView;
	_PKColorPickerCrosshairCornerMaskView* _cornerEdgeMaskView;

}

@property (assign,nonatomic) unsigned long long cornerPosition;                                       //@synthesize cornerPosition=_cornerPosition - In the implementation block
@property (nonatomic,retain) _PKColorPickerSimpleCrosshairView * baseView;                            //@synthesize baseView=_baseView - In the implementation block
@property (nonatomic,retain) _PKColorPickerCrosshairCornerMaskView * baseMaskView;                    //@synthesize baseMaskView=_baseMaskView - In the implementation block
@property (nonatomic,retain) _PKColorPickerSimpleCrosshairView * cornerEdgeView;                      //@synthesize cornerEdgeView=_cornerEdgeView - In the implementation block
@property (nonatomic,retain) _PKColorPickerCrosshairCornerMaskView * cornerEdgeMaskView;              //@synthesize cornerEdgeMaskView=_cornerEdgeMaskView - In the implementation block
@property (assign,nonatomic,__weak) id<PKColorPickerCrosshairViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PKColorPickerCrosshairViewDelegate>)delegate;
-(void)setDelegate:(id<PKColorPickerCrosshairViewDelegate>)arg1 ;
-(void)update;
-(void)layoutSubviews;
-(_PKColorPickerSimpleCrosshairView *)baseView;
-(void)setBaseView:(_PKColorPickerSimpleCrosshairView *)arg1 ;
-(unsigned long long)cornerPosition;
-(void)setCornerPosition:(unsigned long long)arg1 ;
-(_PKColorPickerCrosshairCornerMaskView *)baseMaskView;
-(_PKColorPickerSimpleCrosshairView *)cornerEdgeView;
-(_PKColorPickerCrosshairCornerMaskView *)cornerEdgeMaskView;
-(void)setBaseMaskView:(_PKColorPickerCrosshairCornerMaskView *)arg1 ;
-(void)setCornerEdgeView:(_PKColorPickerSimpleCrosshairView *)arg1 ;
-(void)setCornerEdgeMaskView:(_PKColorPickerCrosshairCornerMaskView *)arg1 ;
@end

