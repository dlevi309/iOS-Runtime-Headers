/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStore/ISDataProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, SUImageModifier;

@interface SUImageDataProvider : ISDataProvider <NSCopying> {

	UIColor* _fillColor;
	CGSize _finalSize;
	double _inputImageScale;
	SUImageModifier* _modifier;

}

@property (retain) UIColor * fillColor;                     //@synthesize fillColor=_fillColor - In the implementation block
@property (assign) CGSize finalSize;                        //@synthesize finalSize=_finalSize - In the implementation block
@property (assign) double inputImageScale;                  //@synthesize inputImageScale=_inputImageScale - In the implementation block
@property (retain) SUImageModifier * modifier;              //@synthesize modifier=_modifier - In the implementation block
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(SUImageModifier *)modifier;
-(void)setModifier:(SUImageModifier *)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(void)setInputImageScale:(double)arg1 ;
-(CGSize)finalSize;
-(void)_getFinalSize:(CGSize*)arg1 imageFrame:(CGRect*)arg2 forImage:(id)arg3 withModifier:(id)arg4 ;
-(double)inputImageScale;
-(id)newImageFromImage:(id)arg1 ;
-(void)setFinalSize:(CGSize)arg1 ;
@end

