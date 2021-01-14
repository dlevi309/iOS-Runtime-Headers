/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>

@class NTKFace, NTKFaceViewController, UIView, NSMutableDictionary, NSMutableSet;

@interface NTKGreenfieldHighlightableFaceContainerView : UIView {

	NTKFace* _originalFace;
	NTKFaceViewController* _faceViewController;
	UIView* _overlayView;
	UIView* _highlightedDisplaysContainerView;
	NSMutableDictionary* _highlightedSlotToDisplayWrapperViewMapping;
	NSMutableSet* _highlightedSlots;
	NSMutableDictionary* _slotToTemplateMapping;

}
+(id)_createFaceForDisplayingFrom:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFace:(id)arg1 ;
-(void)setTemplate:(id)arg1 forSlot:(id)arg2 ;
-(void)setComplicationDisplayViewState:(long long)arg1 forSlot:(id)arg2 ;
-(void)_updateTemplateForSlot:(id)arg1 ;
-(void)_toggleHighlight:(BOOL)arg1 forComplicationWrapperViewAtSlot:(id)arg2 ;
@end

