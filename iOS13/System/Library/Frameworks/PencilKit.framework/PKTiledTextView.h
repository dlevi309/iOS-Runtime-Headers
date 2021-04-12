/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKTiledView.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class PKAttachmentView, UIButton, NSString;

@interface PKTiledTextView : PKTiledView <_UICursorInteractionDelegate> {

	PKAttachmentView* _standInEndAttachmentView;
	UIButton* _tapToRadarButton;

}

@property (nonatomic,retain) PKAttachmentView * standInEndAttachmentView;              //@synthesize standInEndAttachmentView=_standInEndAttachmentView - In the implementation block
@property (nonatomic,retain) UIButton * tapToRadarButton;                              //@synthesize tapToRadarButton=_tapToRadarButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(void)textDidChange:(id)arg1 ;
-(void)_layoutSubviews;
-(void)canvasViewDidEndDrawing:(id)arg1 ;
-(void)setLinedPaper:(id)arg1 ;
-(id)standInAttachmentView;
-(void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2 ;
-(BOOL)canAddStroke;
-(BOOL)insertAttachmentIfInBlankSpace:(CGPoint)arg1 ;
-(BOOL)_shouldUpdateHeightOfAttachments;
-(id)initInScrollView:(id)arg1 ;
-(void)textDidBeginEditing:(id)arg1 ;
-(void)textDidEndEditing:(id)arg1 ;
-(void)_setupTapToRadarButton;
-(void)updateEndAttachment;
-(PKAttachmentView *)standInEndAttachmentView;
-(UIButton *)tapToRadarButton;
-(BOOL)hasEndAttachment;
-(CGRect)frameOfEndAttachment;
-(void)setTapToRadarButton:(UIButton *)arg1 ;
-(void)_tapToRadarButtonTapped:(id)arg1 ;
-(id)saveTempData:(id)arg1 name:(id)arg2 ;
-(void)appendPath:(id)arg1 attachmentString:(id)arg2 ;
-(void)setStandInEndAttachmentView:(PKAttachmentView *)arg1 ;
@end

