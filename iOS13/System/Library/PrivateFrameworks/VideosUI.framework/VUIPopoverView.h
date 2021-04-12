/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)isImageLoaded;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)setImageLoaded:(BOOL)arg1 ;
-(VUIPopoverDescriptor *)popoverDescriptor;
-(void)_popoverButtonPressed:(id)arg1 ;
-(void)setPopoverDescriptor:(VUIPopoverDescriptor *)arg1 ;
-(VUIButton *)tvPopoverButton;
-(void)setTvPopoverButton:(VUIButton *)arg1 ;
@end

