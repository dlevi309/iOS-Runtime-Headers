/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <UIKitCore/UIView.h>

@class UIImageView, NSURL, NSString, NSBundle;

@interface SiriUIDownloadableImageView : UIView {

	UIImageView* _imageView;
	NSURL* _imageURL;
	BOOL _showingPlaceHolderImage;
	NSString* _placeHolderImageName;
	NSBundle* _placeHolderImageBundle;
	double _placeHolderVerticalOffset;

}
-(void)layoutSubviews;
-(void)setImageURL:(id)arg1 ;
-(void)showPlaceHolderImage;
-(void)_setImage:(id)arg1 isPlaceHolder:(BOOL)arg2 ;
-(id)initWithImageURL:(id)arg1 placeHolderImageName:(id)arg2 placeHolderImageBundle:(id)arg3 ;
-(void)setPlaceHolderImageName:(id)arg1 ;
-(void)setPlaceHolderVerticalOffset:(double)arg1 ;
@end

