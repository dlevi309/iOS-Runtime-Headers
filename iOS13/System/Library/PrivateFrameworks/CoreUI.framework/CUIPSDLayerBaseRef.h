/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIPSDImageRef;

@interface CUIPSDLayerBaseRef : NSObject {

	CUIPSDImageRef* _imageRef;
	unsigned _layerIndex;

}

@property (nonatomic,retain) CUIPSDImageRef * imageRef;              //@synthesize imageRef=_imageRef - In the implementation block
@property (assign,nonatomic) unsigned layerIndex;                    //@synthesize layerIndex=_layerIndex - In the implementation block
@property (readonly) CGRect bounds; 
@property (readonly) BOOL visibility; 
@property (readonly) double opacity; 
@property (readonly) double fillOpacity; 
@property (readonly) int blendMode; 
@property (readonly) BOOL hasLayerMask; 
@property (readonly) BOOL hasVectorMask; 
-(void)dealloc;
-(id)name;
-(BOOL)visibility;
-(CGRect)bounds;
-(double)opacity;
-(CUIPSDImageRef *)imageRef;
-(int)blendMode;
-(void)setImageRef:(CUIPSDImageRef *)arg1 ;
-(CPSDLayerRecord*)_psdLayerRecord;
-(BOOL)hasVectorMask;
-(BOOL)hasLayerMask;
-(id)_psdImageRef;
-(BOOL)isLayerGroup;
-(double)fillOpacity;
-(id)layerMaskRef;
-(id)vectorMaskRef;
-(CGImageRef)_createMaskFromAlphaChannel:(long long)arg1 ;
-(unsigned)layerIndex;
-(void)setLayerIndex:(unsigned)arg1 ;
@end

