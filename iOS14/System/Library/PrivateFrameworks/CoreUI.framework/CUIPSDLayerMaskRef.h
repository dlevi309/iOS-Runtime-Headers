/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject {

	CUIPSDLayerRef* _layerRef;
	BOOL _isVectorMask;

}
-(CGRect)bounds;
-(id)layerRef;
-(id)initLayerMaskWithLayerRef:(id)arg1 ;
-(id)initVectorMaskWithLayerRef:(id)arg1 ;
-(BOOL)isLinked;
-(CGPathRef)newBezierPathAtScale:(double)arg1 ;
-(BOOL)isInvertedWhenBlending;
-(CGPathRef)newBezierPath;
-(CGImageRef)createCGImageMask;
-(BOOL)isEnabled;
-(void)dealloc;
@end

