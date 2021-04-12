/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedTexture : CUINamedLookup {

	double _scale;
	cuintproperties _textureProperties;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale;                     //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) int exifOrientation; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaCropped; 
-(CGRect)alphaCroppedRect;
-(BOOL)isOpaque;
-(BOOL)_cacheRenditionProperties;
-(CGSize)size;
-(BOOL)isAlphaCropped;
-(id)textureWithBufferAllocator:(id)arg1 ;
-(double)scale;
-(id)description;
-(int)exifOrientation;
@end

