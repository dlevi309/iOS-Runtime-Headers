/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

@class UIView;


@protocol PKPaletteViewInternalDelegate <NSObject>
@property (nonatomic,readonly) UIView * hostingView; 
@property (getter=isPaletteMinimized,nonatomic,readonly) BOOL paletteMinimized; 
@property (getter=isPaletteDragging,nonatomic,readonly) BOOL paletteDragging; 
@property (getter=isPaletteVisible,nonatomic,readonly) BOOL paletteVisible; 
@required
-(UIView *)hostingView;
-(CGSize*)paletteSizeForEdge:(unsigned long long)arg1;
-(BOOL)isPaletteDragging;
-(BOOL)isPaletteVisible;
-(void)paletteView:(id)arg1 didChangeAnnotationSupport:(BOOL)arg2;
-(BOOL)isPaletteMinimized;
-(void)paletteView:(id)arg1 didToggleAutoHideOption:(BOOL)arg2;
-(void)paletteViewShowFeedbackForToolChange:(id)arg1;

@end

