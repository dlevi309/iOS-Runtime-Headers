/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SKUISlideshowGalleryBarViewDelegate;
@class UIToolbar, UIView, NSMutableArray;

@interface SKUISlideshowGalleryBarView : UIView {

	UIToolbar* _toolbarView;
	UIView* _imageViewsContainer;
	NSMutableArray* _imageViews;
	id<SKUISlideshowGalleryBarViewDelegate> _delegate;
	unsigned long long _numberOfImages;
	unsigned long long _selectedImageIndex;

}

@property (assign,nonatomic,__weak) id<SKUISlideshowGalleryBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfImages;                                    //@synthesize numberOfImages=_numberOfImages - In the implementation block
@property (assign,nonatomic) unsigned long long selectedImageIndex;                                //@synthesize selectedImageIndex=_selectedImageIndex - In the implementation block
-(id<SKUISlideshowGalleryBarViewDelegate>)delegate;
-(void)setDelegate:(id<SKUISlideshowGalleryBarViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)imageAtIndex:(long long)arg1 ;
-(id)_newImageView;
-(void)_handleTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setNumberOfImages:(unsigned long long)arg1 ;
-(void)setSelectedImageIndex:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 atIndex:(long long)arg2 ;
-(unsigned long long)numberOfImages;
-(unsigned long long)selectedImageIndex;
@end

