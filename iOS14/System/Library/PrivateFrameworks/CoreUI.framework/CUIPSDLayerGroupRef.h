/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDLayerBaseRef.h>

@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {

	_CUIPSDSublayerInfo* _sublayerInfo;

}
-(CGRect)bounds;
-(BOOL)isOpen;
-(id)layerNames;
-(id)layerEnumerator;
-(void)enumerateLayersUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithImageRef:(id)arg1 layerIndex:(unsigned)arg2 ;
-(id)layerRefAtIndex:(unsigned)arg1 ;
-(BOOL)isLayerGroup;
-(BOOL)isGroupEnd;
-(BOOL)_isGroupType:(unsigned)arg1 ;
-(BOOL)isGroupStart;
-(unsigned)numberOfLayers;
-(void)dealloc;
@end

