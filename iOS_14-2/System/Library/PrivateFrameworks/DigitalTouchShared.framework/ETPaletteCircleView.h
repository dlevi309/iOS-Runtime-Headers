/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface ETPaletteCircleView : UIView {

	UIView* _selectionMarker;
	BOOL _selected;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) UIView * selectionMarker; 
+(double)paletteCircleDiameter;
+(double)selectionMarkerDiameter;
+(id)selectionMarkerColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(UIView *)selectionMarker;
-(void)_updateSelectionMarkerFrame;
@end

