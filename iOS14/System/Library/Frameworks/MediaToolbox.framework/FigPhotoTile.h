/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


#import <MediaToolbox/MediaToolbox-Structs.h>
@interface FigPhotoTile : NSObject {

	BOOL _visible;
	IOSurfaceRef _decodedSurface;
	id _key;
	CGRect _imageRect;
	CGRect _contentsRect;

}

@property (assign,nonatomic) IOSurfaceRef decodedSurface;              //@synthesize decodedSurface=_decodedSurface - In the implementation block
@property (assign,nonatomic) CGRect imageRect;                         //@synthesize imageRect=_imageRect - In the implementation block
@property (assign,nonatomic) CGRect contentsRect;                      //@synthesize contentsRect=_contentsRect - In the implementation block
@property (nonatomic,retain) id key;                                   //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL visible;                             //@synthesize visible=_visible - In the implementation block
-(CGRect)contentsRect;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)visible;
-(void)setContentsRect:(CGRect)arg1 ;
-(id)description;
-(void)setDecodedSurface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)decodedSurface;
-(void)setImageRect:(CGRect)arg1 ;
-(id)key;
-(CGRect)imageRect;
-(void)setKey:(id)arg1 ;
-(void)dealloc;
@end

