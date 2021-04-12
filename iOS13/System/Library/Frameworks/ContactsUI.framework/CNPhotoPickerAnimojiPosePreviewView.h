/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPhotoPickerPreviewView.h>

@class AVTView, CAShapeLayer;

@interface CNPhotoPickerAnimojiPosePreviewView : CNPhotoPickerPreviewView {

	AVTView* _avtView;
	CAShapeLayer* _clippingLayer;

}

@property (nonatomic,readonly) AVTView * avtView;                       //@synthesize avtView=_avtView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * clippingLayer;              //@synthesize clippingLayer=_clippingLayer - In the implementation block
-(void)layoutSubviews;
-(CAShapeLayer *)clippingLayer;
-(void)setClippingLayer:(CAShapeLayer *)arg1 ;
-(AVTView *)avtView;
-(void)setupPreview;
-(void)updatePreviewWithItem:(id)arg1 ;
-(void)updatePoseWithConfiguration:(id)arg1 ;
@end

