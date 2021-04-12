/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)initWithShelf:(id)arg1 ;
-(void)_loadImageFromBundle;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
@end

