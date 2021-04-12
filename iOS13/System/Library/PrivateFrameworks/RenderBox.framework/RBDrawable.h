/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/


@protocol RBDrawableDelegate, MTLTexture;
#import <RenderBox/RenderBox-Structs.h>
@class RBDevice;

@interface RBDrawable : NSObject {

	unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable> >* _drawable;
	int _initialState;
	RBDevice* _device;
	unsigned long long _pixelFormat;
	id<RBDrawableDelegate> _delegate;
	id<MTLTexture> _texture;
	CGSize _size;
	SCD_Struct_RB26 _clearColor;

}

@property (nonatomic,readonly) RBDevice * device;                                 //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<RBDrawableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize size;                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long pixelFormat;                      //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) int initialState;                                    //@synthesize initialState=_initialState - In the implementation block
@property (assign,nonatomic) SCD_Struct_RB26 clearColor;                          //@synthesize clearColor=_clearColor - In the implementation block
@property (nonatomic,retain) id<MTLTexture> texture;                              //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) double GPUDuration; 
-(id<RBDrawableDelegate>)delegate;
-(void)setDelegate:(id<RBDrawableDelegate>)arg1 ;
-(CGSize)size;
-(void)finish;
-(RBDevice *)device;
-(SCD_Struct_RB26)clearColor;
-(void)setSize:(CGSize)arg1 ;
-(unsigned long long)pixelFormat;
-(id)initWithDevice:(id)arg1 ;
-(void)setTexture:(id<MTLTexture>)arg1 ;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(id<MTLTexture>)texture;
-(int)initialState;
-(void)setInitialState:(int)arg1 ;
-(void)setClearColor:(SCD_Struct_RB26)arg1 ;
-(void)dumpTexture:(id)arg1 name:(id)arg2 ;
-(void)renderDisplayList:(id)arg1 flags:(unsigned)arg2 ;
-(double)GPUDuration;
@end

