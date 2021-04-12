/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/ICCollapsibleBaseView.h>

@class UIImage, ICImageAndMovieThumbnailView;

@interface ICCollapsibleThumbnailView : ICCollapsibleBaseView {

	BOOL _showAsMovie;
	UIImage* _image;
	unsigned long long _imageScaling;
	ICImageAndMovieThumbnailView* _thumbnailView;

}

@property (nonatomic,retain) ICImageAndMovieThumbnailView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                           //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long imageScaling;                           //@synthesize imageScaling=_imageScaling - In the implementation block
@property (assign,nonatomic) BOOL showAsMovie;                                          //@synthesize showAsMovie=_showAsMovie - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(ICImageAndMovieThumbnailView *)thumbnailView;
-(void)setThumbnailView:(ICImageAndMovieThumbnailView *)arg1 ;
-(unsigned long long)imageScaling;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(void)performSetup;
-(BOOL)showAsMovie;
-(void)setShowAsMovie:(BOOL)arg1 ;
@end

