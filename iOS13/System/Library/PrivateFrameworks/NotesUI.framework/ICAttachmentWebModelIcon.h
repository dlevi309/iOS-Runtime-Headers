/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


#import <NotesUI/NotesUI-Structs.h>
@class NSURL, UIImage;

@interface ICAttachmentWebModelIcon : NSObject {

	BOOL _scaleImageToIconSize;
	NSURL* _url;
	double _scale;
	UIImage* _image;
	CGSize _size;

}

@property (nonatomic,retain) NSURL * url;                            //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL scaleImageToIconSize;              //@synthesize scaleImageToIconSize=_scaleImageToIconSize - In the implementation block
@property (assign,nonatomic) CGSize size;                            //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                           //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
-(id)description;
-(CGSize)size;
-(NSURL *)url;
-(double)scale;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithImageURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 withSize:(CGSize)arg2 ;
-(void)setScaleImageToIconSize:(BOOL)arg1 ;
-(id)initWithFallbackURL:(id)arg1 withSize:(CGSize)arg2 ;
-(BOOL)scaleImageToIconSize;
@end

