/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)blendMode;
-(CGRect)bounds;
-(BOOL)visibility;
-(double)opacity;
-(id)name;
-(BOOL)hasLayerMask;
-(CPSDLayerRecord*)_psdLayerRecord;
-(BOOL)hasVectorMask;
-(id)_psdImageRef;
-(BOOL)isLayerGroup;
-(double)fillOpacity;
-(id)layerMaskRef;
-(id)vectorMaskRef;
-(CGImageRef)_createMaskFromAlphaChannel:(long long)arg1 ;
-(unsigned)layerIndex;
-(void)setLayerIndex:(unsigned)arg1 ;
-(CUIPSDImageRef *)imageRef;
-(void)setImageRef:(CUIPSDImageRef *)arg1 ;
-(void)dealloc;
@end

