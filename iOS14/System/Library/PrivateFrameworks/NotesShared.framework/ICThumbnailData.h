/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class UIImage;

@interface ICThumbnailData : NSObject {

	BOOL _showAsFileIcon;
	BOOL _isMovie;
	UIImage* _image;
	unsigned long long _imageScaling;

}

@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long imageScaling;              //@synthesize imageScaling=_imageScaling - In the implementation block
@property (assign,nonatomic) BOOL showAsFileIcon;                          //@synthesize showAsFileIcon=_showAsFileIcon - In the implementation block
@property (assign,nonatomic) BOOL isMovie;                                 //@synthesize isMovie=_isMovie - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(BOOL)isMovie;
-(id)initWithImage:(id)arg1 imageScaling:(unsigned long long)arg2 showAsFileIcon:(BOOL)arg3 isMovie:(BOOL)arg4 ;
-(unsigned long long)imageScaling;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(BOOL)showAsFileIcon;
-(void)setShowAsFileIcon:(BOOL)arg1 ;
-(void)setIsMovie:(BOOL)arg1 ;
@end

