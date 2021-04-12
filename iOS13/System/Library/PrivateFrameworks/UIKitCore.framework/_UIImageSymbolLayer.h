/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIColor, UIImageAsset, _UIImageCUIVectorGlyphContent, NSString;

@interface _UIImageSymbolLayer : NSObject {

	UIColor* _color;
	double _scaleFactor;
	UIImageAsset* _asset;
	_UIImageCUIVectorGlyphContent* _content;
	CGPoint _offset;

}

@property (nonatomic,retain) UIImageAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) _UIImageCUIVectorGlyphContent * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) UIColor * color;                                      //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                       //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double scaleFactor;                                   //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (getter=isSystemImage,nonatomic,readonly) BOOL systemImage; 
+(id)_symbolLayerWithImage:(id)arg1 color:(id)arg2 offset:(CGPoint)arg3 scaleFactor:(double)arg4 ;
+(id)_symbolLayerWithSystemName:(id)arg1 color:(id)arg2 ;
+(id)_symbolLayerWithSystemName:(id)arg1 color:(id)arg2 offset:(CGPoint)arg3 scaleFactor:(double)arg4 ;
+(id)_symbolLayerWithName:(id)arg1 color:(id)arg2 ;
+(id)_symbolLayerWithName:(id)arg1 color:(id)arg2 offset:(CGPoint)arg3 scaleFactor:(double)arg4 ;
-(NSString *)name;
-(UIColor *)color;
-(void)setOffset:(CGPoint)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(CGPoint)offset;
-(UIImageAsset *)asset;
-(void)setAsset:(UIImageAsset *)arg1 ;
-(_UIImageCUIVectorGlyphContent *)content;
-(void)setContent:(_UIImageCUIVectorGlyphContent *)arg1 ;
-(BOOL)isSystemImage;
@end

