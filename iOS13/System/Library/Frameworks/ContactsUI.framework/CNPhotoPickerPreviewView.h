/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, CAShapeLayer;

@interface CNPhotoPickerPreviewView : UIView {

	UIView* _previewView;
	UIView* _thumbnailContentView;
	CAShapeLayer* _clippingLayer;

}

@property (nonatomic,readonly) UIView * previewView;                     //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UIView * thumbnailContentView;              //@synthesize thumbnailContentView=_thumbnailContentView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * clippingLayer;               //@synthesize clippingLayer=_clippingLayer - In the implementation block
+(id)pickerPreviewWithFrame:(CGRect)arg1 forItem:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CAShapeLayer *)clippingLayer;
-(void)setClippingLayer:(CAShapeLayer *)arg1 ;
-(UIView *)previewView;
-(void)setupPreview;
-(void)updatePreviewWithItem:(id)arg1 ;
-(UIView *)thumbnailContentView;
-(void)setThumbnailContentView:(UIView *)arg1 ;
@end

