/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKPaletteViewDelegate <PKPaletteViewPositionObserving>
@optional
-(id)paletteViewCurrentFirstResponder:(id)arg1;
-(void)paletteViewFirstResponderDidUpdate:(id)arg1;
-(BOOL)shouldHandlePencilInteractionWhenNotVisible:(id)arg1;

@required
-(id)paletteViewUndoManager:(id)arg1;
-(void)paletteViewSelectedToolInkDidChange:(id)arg1;
-(void)paletteViewDidToggleRuler:(id)arg1;

@end

