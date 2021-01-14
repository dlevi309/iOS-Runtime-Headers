/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_symbolLayerWithSystemName:(id)arg1 color:(id)arg2 ;
+(id)_symbolLayerWithImage:(id)arg1 color:(id)arg2 offset:(CGPoint)arg3 scaleFactor:(double)arg4 ;
+(id)_symbolLayerWithSystemName:(id)arg1 color:(id)arg2 offset:(CGPoint)arg3 scaleFactor:(double)arg4 ;
+(id)_symbolLayerWithName:(id)arg1 color:(id)arg2 ;
+(id)_symbolLayerWithName:(id)arg1 color:(id)arg2 offset:(CGPoint)arg3 scaleFactor:(double)arg4 ;
-(void)setScaleFactor:(double)arg1 ;
-(void)setAsset:(UIImageAsset *)arg1 ;
-(double)scaleFactor;
-(_UIImageCUIVectorGlyphContent *)content;
-(void)setContent:(_UIImageCUIVectorGlyphContent *)arg1 ;
-(UIImageAsset *)asset;
-(UIColor *)color;
-(NSString *)name;
-(CGPoint)offset;
-(void)setColor:(UIColor *)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(BOOL)isSystemImage;
@end

