/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect boundingRect; 
@property (nonatomic,readonly) float borderWidth; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)image;
-(void)setImage:(CGImageRef)arg1 ;
-(id)commit;
-(long long)seed;
-(int)imageCount;
-(CGRect)boundingRect;
-(float)borderWidth;
-(void)setLineCap:(int)arg1 ;
-(float)miterLimit;
-(void)setMiterLimit:(float)arg1 ;
-(void)setImageScale:(float)arg1 ;
-(float)imageScale;
-(void)setLineJoin:(int)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setSeed:(long long)arg1 ;
-(int)lineJoin;
-(int)lineCap;
-(void)setImageCount:(int)arg1 ;
-(int)strokeType;
-(BOOL)rotatesImage;
-(void)applyFunction:(/*function pointer*/void*)arg1 info:(void*)arg2 ;
-(void)addElement:(unsigned char)arg1 args:(const float*)arg2 ;
-(void)addPath:(CGPathRef)arg1 transform:(CGAffineTransform)arg2 ;
-(void)removeAllElements;
-(void)setStrokeType:(int)arg1 ;
-(void)setRotatesImage:(BOOL)arg1 ;
@end

