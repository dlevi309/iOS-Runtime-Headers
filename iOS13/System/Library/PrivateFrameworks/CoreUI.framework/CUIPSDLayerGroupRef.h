/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDLayerBaseRef.h>

@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {

	_CUIPSDSublayerInfo* _sublayerInfo;

}
-(void)dealloc;
-(BOOL)isOpen;
-(CGRect)bounds;
-(id)initWithImageRef:(id)arg1 layerIndex:(unsigned)arg2 ;
-(id)layerRefAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfLayers;
-(id)layerNames;
-(BOOL)isLayerGroup;
-(BOOL)_isGroupType:(unsigned)arg1 ;
-(BOOL)isGroupStart;
-(BOOL)isGroupEnd;
-(id)layerEnumerator;
-(void)enumerateLayersUsingBlock:(/*^block*/id)arg1 ;
@end

