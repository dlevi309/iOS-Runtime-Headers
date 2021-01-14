/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)previewView;
-(void)layoutSubviews;
-(void)setupPreview;
-(void)updatePreviewWithItem:(id)arg1 ;
-(UIView *)thumbnailContentView;
-(void)setThumbnailContentView:(UIView *)arg1 ;
-(CAShapeLayer *)clippingLayer;
-(void)setClippingLayer:(CAShapeLayer *)arg1 ;
@end

