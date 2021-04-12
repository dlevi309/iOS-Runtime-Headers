/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class MKMapItemPhoto, MKPlacePhotosView, NSURLSessionTask, UIImageView, UIImage, NSString;

@interface _MKPlacePhotoView : UIScrollView <UIScrollViewDelegate> {

	BOOL _isZoomed;
	MKMapItemPhoto* _photo;
	MKPlacePhotosView* _viewer;
	NSURLSessionTask* _task;
	BOOL _hasLoadedFullPhoto;
	UIImageView* _imageView;
	UIImage* _thumbnail;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                    //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedFullPhoto;                //@synthesize hasLoadedFullPhoto=_hasLoadedFullPhoto - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)toggleBackground;
-(void)zoomToPoint:(id)arg1 ;
-(void)urlRequestFinished:(id)arg1 withError:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 photo:(id)arg2 viewer:(id)arg3 ;
-(void)loadFullPhoto;
-(void)unloadFullPhoto;
-(BOOL)hasLoadedFullPhoto;
-(void)setHasLoadedFullPhoto:(BOOL)arg1 ;
@end

