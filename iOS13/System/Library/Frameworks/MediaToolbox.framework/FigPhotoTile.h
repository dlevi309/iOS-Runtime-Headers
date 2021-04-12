/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)key;
-(void)setKey:(id)arg1 ;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(CGRect)contentsRect;
-(void)setDecodedSurface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)decodedSurface;
-(CGRect)imageRect;
-(void)setImageRect:(CGRect)arg1 ;
@end

