/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class VUIPopoverDescriptor, VUIButton, TVImageProxy, NSString;

@interface VUIPopoverView : UIView <UIGestureRecognizerDelegate> {

	BOOL _imageLoaded;
	VUIPopoverDescriptor* _popoverDescriptor;
	VUIButton* _tvPopoverButton;
	TVImageProxy* _imageProxy;

}

@property (nonatomic,retain) VUIButton * tvPopoverButton;                           //@synthesize tvPopoverButton=_tvPopoverButton - In the implementation block
@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;                 //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                             //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,retain) VUIPopoverDescriptor * popoverDescriptor;              //@synthesize popoverDescriptor=_popoverDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)isImageLoaded;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(void)setImageLoaded:(BOOL)arg1 ;
-(VUIPopoverDescriptor *)popoverDescriptor;
-(void)_popoverButtonPressed:(id)arg1 ;
-(void)setPopoverDescriptor:(VUIPopoverDescriptor *)arg1 ;
-(VUIButton *)tvPopoverButton;
-(void)setTvPopoverButton:(VUIButton *)arg1 ;
@end

