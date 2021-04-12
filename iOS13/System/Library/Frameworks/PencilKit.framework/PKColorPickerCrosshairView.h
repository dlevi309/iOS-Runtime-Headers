/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<PKColorPickerCrosshairViewDelegate>)delegate;
-(void)setDelegate:(id<PKColorPickerCrosshairViewDelegate>)arg1 ;
-(void)update;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)cornerPosition;
-(void)setCornerPosition:(unsigned long long)arg1 ;
-(_PKColorPickerSimpleCrosshairView *)baseView;
-(_PKColorPickerCrosshairCornerMaskView *)baseMaskView;
-(_PKColorPickerSimpleCrosshairView *)cornerEdgeView;
-(_PKColorPickerCrosshairCornerMaskView *)cornerEdgeMaskView;
-(void)setBaseView:(_PKColorPickerSimpleCrosshairView *)arg1 ;
-(void)setBaseMaskView:(_PKColorPickerCrosshairCornerMaskView *)arg1 ;
-(void)setCornerEdgeView:(_PKColorPickerSimpleCrosshairView *)arg1 ;
-(void)setCornerEdgeMaskView:(_PKColorPickerCrosshairCornerMaskView *)arg1 ;
@end

