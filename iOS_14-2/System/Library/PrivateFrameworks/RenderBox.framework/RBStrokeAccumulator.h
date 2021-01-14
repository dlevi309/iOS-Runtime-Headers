/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/

#import <RenderBox/RenderBox-Structs.h>
#import <libobjc.A.dylib/RBStroke.h>
#import <libobjc.A.dylib/RBParticleStroke.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RBStrokeAccumulator : NSObject <RBStroke, RBParticleStroke, NSCopying> {

	vector<RBStrokeElement, std::__1::allocator<RBStrokeElement> >* _elements;
	vector<float, std::__1::allocator<float> >* _values;
	cf_ptr<CGImage *>* _image;
	float _imageScale;
	int _imageCount;
	int _strokeType;
	int _blendMode;
	int _lineCap;
	int _lineJoin;
	float _miterLimit;
	long long _seed;
	CGRect _bounds;
	float _borderWidth;
	BOOL _hasBounds;
	BOOL _committed;
	BOOL _rotatesImage;

}

@property (assign,nonatomic) int strokeType; 
@property (assign,nonatomic) int lineCap; 
@property (assign,nonatomic) int lineJoin; 
@property (assign,nonatomic) float miterLimit; 
@property (nonatomic,retain) CGImageRef image; 
@property (assign,nonatomic) float imageScale; 
@property (assign,nonatomic) int imageCount; 
@property (assign,nonatomic) BOOL rotatesImage; 
@property (assign,nonatomic) int blendMode; 
@property (assign,nonatomic) long long seed; 
@property (nonatomic,readonly) CGRect boundingRect; 
@property (nonatomic,readonly) float borderWidth; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)seed;
-(float)imageScale;
-(int)blendMode;
-(void)setImageScale:(float)arg1 ;
-(id)commit;
-(void)setImage:(CGImageRef)arg1 ;
-(void)setSeed:(long long)arg1 ;
-(id)init;
-(int)lineCap;
-(void)setLineCap:(int)arg1 ;
-(CGImageRef)image;
-(void)setMiterLimit:(float)arg1 ;
-(int)lineJoin;
-(int)strokeType;
-(CGRect)boundingRect;
-(void)setImageCount:(int)arg1 ;
-(float)borderWidth;
-(float)miterLimit;
-(int)imageCount;
-(void)setLineJoin:(int)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)rotatesImage;
-(void)applyFunction:(/*function pointer*/void*)arg1 info:(void*)arg2 ;
-(void)addElement:(unsigned char)arg1 args:(const float*)arg2 ;
-(void)addPath:(CGPathRef)arg1 transform:(CGAffineTransform)arg2 ;
-(void)removeAllElements;
-(void)setStrokeType:(int)arg1 ;
-(void)setRotatesImage:(BOOL)arg1 ;
@end

