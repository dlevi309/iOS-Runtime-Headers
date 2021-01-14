/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDiscoveryShelfView.h>

@class PKDiscoveryInlineMediaShelf, PKDiscoveryMedia, UIView, UIImageView, PKDiscoveryInlineMediaCaptionView;

@interface PKDiscoveryInlineMediaShelfView : PKDiscoveryShelfView {

	PKDiscoveryInlineMediaShelf* _shelf;
	PKDiscoveryMedia* _media;
	UIView* _imageContainerView;
	UIImageView* _imageView;
	PKDiscoveryInlineMediaCaptionView* _captionView;
	BOOL _isInline;
	double _leadingSpace;

}
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)initWithShelf:(id)arg1 ;
-(void)_loadImageFromBundle;
-(void)_loadImageFromFileURL;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
@end

