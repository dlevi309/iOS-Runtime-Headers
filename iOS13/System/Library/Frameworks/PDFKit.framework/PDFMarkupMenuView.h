/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PDFMarkupMenuViewPrivate;

@interface PDFMarkupMenuView : UIView {

	PDFMarkupMenuViewPrivate* _private;

}
-(void)setDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)hide;
-(void)_updateAppearance;
-(void)_setupViews;
-(id)_newMaskView:(long long)arg1 ;
-(id)_menuControls;
-(BOOL)_shouldShowCompactMenu;
-(void)_setControls:(id)arg1 ;
-(CGSize)_sizeThatFitsControls:(id)arg1 ;
-(void)_setBlurDisabled:(BOOL)arg1 ;
-(void)_handleDeleteButtonTap;
-(CGRect)_dividerLineRectForControl:(long long)arg1 ;
-(int)_colorPaletteMenuIconForMarkupStyle:(unsigned long long)arg1 ;
-(int)_noteMenuIconForMarkupStyle:(unsigned long long)arg1 ;
-(int)_colorMenuIconForMarkupStyle:(unsigned long long)arg1 ;
-(void)useColorOf:(id)arg1 ;
-(void)showColorControlsMenu:(id)arg1 ;
-(void)handleDeleteButtonTap:(id)arg1 ;
-(void)handleAddNoteButton:(id)arg1 ;
-(void)handleRightArrowButton:(id)arg1 ;
-(void)setMarkupStyle:(unsigned long long)arg1 ;
-(void)setMarkupNoteStyle:(unsigned long long)arg1 ;
-(void)presentFromRect:(CGRect)arg1 view:(id)arg2 visibleRect:(CGRect)arg3 ;
@end

