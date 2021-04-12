/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject {

	CUIPSDLayerRef* _layerRef;
	BOOL _isVectorMask;

}
-(void)dealloc;
-(BOOL)isEnabled;
-(CGRect)bounds;
-(id)initLayerMaskWithLayerRef:(id)arg1 ;
-(id)initVectorMaskWithLayerRef:(id)arg1 ;
-(CGPathRef)newBezierPathAtScale:(double)arg1 ;
-(id)layerRef;
-(BOOL)isLinked;
-(BOOL)isInvertedWhenBlending;
-(CGPathRef)newBezierPath;
-(CGImageRef)createCGImageMask;
@end

