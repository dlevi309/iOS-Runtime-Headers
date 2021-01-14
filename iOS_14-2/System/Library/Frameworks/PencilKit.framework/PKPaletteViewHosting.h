/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

@class UIView;


@protocol PKPaletteViewHosting <NSObject>
@property (nonatomic,readonly) UIView * hostingView; 
@property (getter=isPaletteDragging,nonatomic,readonly) BOOL paletteDragging; 
@property (assign,getter=isPaletteVisible,nonatomic) BOOL paletteVisible; 
@property (getter=isPaletteVisualStateMinimized,nonatomic,readonly) BOOL paletteVisualStateMinimized; 
@required
-(UIView *)hostingView;
-(BOOL)isPaletteDragging;
-(BOOL)isPaletteVisible;
-(BOOL)isPaletteVisualStateMinimized;
-(void)setPaletteVisible:(BOOL)arg1;

@end

