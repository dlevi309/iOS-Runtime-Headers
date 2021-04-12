/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AVTView *)avtView;
-(void)layoutSubviews;
-(void)updatePoseWithConfiguration:(id)arg1 ;
-(void)setupPreview;
-(void)updatePreviewWithItem:(id)arg1 ;
-(CAShapeLayer *)clippingLayer;
-(void)setClippingLayer:(CAShapeLayer *)arg1 ;
@end

