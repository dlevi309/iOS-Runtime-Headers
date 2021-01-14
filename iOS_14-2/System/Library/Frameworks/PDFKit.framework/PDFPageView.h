/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <PDFKit/PDFPageLayerInterface.h>

@class PDFPageViewPrivate, NSString;

@interface PDFPageView : UIView <UITextViewDelegate, PDFPageLayerInterface> {

	PDFPageViewPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateBackgroundColor;
-(id)page;
-(void)addAnnotation:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)clearTiles;
-(void)removeAnnotation:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)hasBackgroundImage;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)isVisible;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)backgroundImage;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(id)activeAnnotation;
-(void)_didRotatePageNotification:(id)arg1 ;
-(void)_addPDFAnnotationTextWidget:(id)arg1 ;
-(void)_addPDFAnnotationChoiceWidget:(id)arg1 ;
-(void)_rotateActiveAnnotation;
-(void)removeControlForAnnotation:(id)arg1 ;
-(void)addControlForAnnotation:(id)arg1 ;
-(id)markupAnnotationsForIndexSet:(id)arg1 ;
-(void)addMarkupWithStyle:(unsigned long long)arg1 forIndexSet:(id)arg2 ;
-(long long)displayBox;
-(void)setEnableTileUpdates:(BOOL)arg1 ;
-(id)renderingProperties;
-(void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 ;
-(void)setNeedsTilesUpdate;
-(id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3 ;
-(void)addSearchSelection:(id)arg1 ;
-(id)pageLayer;
-(void)updateAnnotation:(id)arg1 ;
-(void)updateBookmark;
-(CGRect)convertRectToPageView:(CGRect)arg1 ;
-(int)backgroundImageQuality;
-(id)geometryInterface;
-(unsigned long long)visibilityDelegateIndex;
-(void)updatePageLayerEffectForID:(id)arg1 ;
-(id)pageLayerEffectForID:(id)arg1 ;
-(CGAffineTransform)layerEffectTransform;
-(void)updatePageLayerEffects;
-(void)forceTileUpdate;
-(void)addPageLayerEffect:(id)arg1 ;
-(void)removePageLayerEffectForID:(id)arg1 ;
-(void)scalePageLayerEffects:(double)arg1 ;
-(BOOL)enablesTileUpdates;
-(void)saveOriginalTileLayout;
-(void)restoreOriginalTileLayout;
-(void)applyTileLayoutScale:(double)arg1 ;
-(void)setVisibilityDelegateIndex:(unsigned long long)arg1 ;
-(void)_setupBookmarkLayer;
-(void)_setuppageAnnotationEffects;
-(void)_formChanged:(id)arg1 ;
-(void)_addPDFAnnotation:(id)arg1 ;
-(void)_updateAnnotationVisibility:(id)arg1 ;
-(void)_updateWidgetControl:(id)arg1 forBounds:(CGRect)arg2 ;
-(void)addBookmark;
-(void)_addPDFAnnotationStampSignature:(id)arg1 ;
-(void)colorWidgetBackgrounds:(BOOL)arg1 ;
-(CGAffineTransform)_rotationTransformForPageView;
-(BOOL)_allowsFormFieldEntry;
-(void)_choiceWidgetDone;
-(void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTableView:(id)arg3 ;
-(void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTextField:(id)arg3 ;
-(void)_setAttributedStringForAnnotation:(id)arg1 stringValue:(id)arg2 textView:(id)arg3 ;
-(BOOL)_shouldReplaceStringOnAnnotation:(id)arg1 withTextView:(id)arg2 ;
-(void)setStringValue:(id)arg1 onTextWidgetAnnotation:(id)arg2 withTextView:(id)arg3 ;
-(void)setState:(long long)arg1 onButtonWidgetAnnotation:(id)arg2 ;
-(void)setSearchSelections:(id)arg1 ;
-(void)previewRotatePage:(double)arg1 ;
-(void)hideTileLayer:(BOOL)arg1 ;
-(void)removeBookmark;
-(CGPoint)convertPointToPageView:(CGPoint)arg1 ;
@end

