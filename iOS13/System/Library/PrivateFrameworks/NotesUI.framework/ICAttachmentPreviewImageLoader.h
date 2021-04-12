/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


#import <NotesUI/NotesUI-Structs.h>
@class UIImage, NSData, NSArray;

@interface ICAttachmentPreviewImageLoader : NSObject {

	BOOL _delayLoadingURLs;
	/*^block*/id _imageDidLoadBlock;
	UIImage* _image;
	UIImage* _originalImage;
	UIImage* _orientedImage;
	NSData* _data;
	double _scale;
	NSArray* _previewImageURLs;
	long long _imageOrientation;

}

@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                 //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,retain) UIImage * orientedImage;                 //@synthesize orientedImage=_orientedImage - In the implementation block
@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) double scale;                            //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSArray * previewImageURLs;                //@synthesize previewImageURLs=_previewImageURLs - In the implementation block
@property (assign,nonatomic) BOOL delayLoadingURLs;                   //@synthesize delayLoadingURLs=_delayLoadingURLs - In the implementation block
@property (assign,nonatomic) long long imageOrientation;              //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (nonatomic,copy) id imageDidLoadBlock;                      //@synthesize imageDidLoadBlock=_imageDidLoadBlock - In the implementation block
+(id)orientedImage:(id)arg1 withBackground:(int)arg2 ;
+(id)orientedImage:(id)arg1 withTransform:(CGAffineTransform)arg2 background:(int)arg3 backgroundTransform:(CGAffineTransform)arg4 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(double)scale;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(long long)imageOrientation;
-(void)setImageOrientation:(long long)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)loadData;
-(UIImage *)originalImage;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(id)loadImage;
-(id)initWithOriginalImage:(id)arg1 orientedImage:(id)arg2 data:(id)arg3 scale:(double)arg4 previewImageURLs:(id)arg5 delayLoadingURLs:(BOOL)arg6 ;
-(void)setImageDidLoadBlock:(id)arg1 ;
-(BOOL)canLoadImage;
-(UIImage *)orientedImage;
-(id)loadOrientedImage;
-(NSArray *)previewImageURLs;
-(BOOL)delayLoadingURLs;
-(id)imageDidLoadBlock;
-(void)setOrientedImage:(UIImage *)arg1 ;
-(void)setPreviewImageURLs:(NSArray *)arg1 ;
-(void)setDelayLoadingURLs:(BOOL)arg1 ;
@end

