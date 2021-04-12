/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/


#import <RenderBox/RenderBox-Structs.h>
@class RBDisplayList;

@interface RBSurface : NSObject {

	objc_ptr<RBDisplayList *> _displayList;
	unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable> >* _drawable;
	objc_ptr<id<MTLDevice> > _device;
	refcounted_ptr<RB::Texture>* _texture;
	void* _lastItem;
	Bounds _dirty;
	BOOL _clearsBackground;
	BOOL _opaque;
	int _colorMode;
	CGSize _size;
	SCD_Struct_RB26 _clearColor;

}

@property (assign,nonatomic) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) int colorMode;                            //@synthesize colorMode=_colorMode - In the implementation block
@property (assign,nonatomic) BOOL clearsBackground;                    //@synthesize clearsBackground=_clearsBackground - In the implementation block
@property (assign,nonatomic) SCD_Struct_RB26 clearColor;               //@synthesize clearColor=_clearColor - In the implementation block
@property (assign,getter=isOpaque,nonatomic) BOOL opaque;              //@synthesize opaque=_opaque - In the implementation block
@property (nonatomic,retain) RBDisplayList * displayList; 
-(id)init;
-(void)invalidate;
-(CGSize)size;
-(SCD_Struct_RB26)clearColor;
-(BOOL)isOpaque;
-(void)setSize:(CGSize)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(int)colorMode;
-(void)setColorMode:(int)arg1 ;
-(void)setClearColor:(SCD_Struct_RB26)arg1 ;
-(RBDisplayList *)displayList;
-(BOOL)clearsBackground;
-(void)setClearsBackground:(BOOL)arg1 ;
-(void)invalidateInRect:(Rect)arg1 ;
-(BOOL)_updateWithDevice:(Device*)arg1 frame:(RenderFrame*)arg2 synchronized:(BOOL)arg3 ;
-(void)setDisplayList:(RBDisplayList *)arg1 ;
-(void)setDisplayList:(id)arg1 dirtyRect:(CGRect)arg2 ;
-(CGImageRef)copyCGImageUsingDevice:(id)arg1 ;
-(void)updateUsingDevice:(id)arg1 ;
@end

