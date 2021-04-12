/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreUI/CUIPSDImageRef.h>

@class NSArray;

@interface CTDPSDPreviewRef : CUIPSDImageRef {

	PSDImageInfo _imageInfo;
	long long _layerCount;
	long long _sliceCount;
	long long _columnWidth;
	long long _rowHeight;
	NSArray* _layerIndexLayout;
	long long _sliceRowCount;
	long long _sliceColumnCount;
	NSArray* _sliceRects;

}
-(id)initWithPath:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasGradient;
-(long long)sliceRowCount;
-(long long)sliceColumnCount;
-(void)evaluateSliceGrid;
-(BOOL)hasRegularSliceGrid;
-(long long)numberOfGradientLayers;
-(long long)numberOfAlphaChannels;
-(long long)indexOfDrawingLayerType:(long long)arg1 ;
@end

