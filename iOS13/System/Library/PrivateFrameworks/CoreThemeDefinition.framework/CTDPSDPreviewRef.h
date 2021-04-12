/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(BOOL)hasGradient;
-(long long)sliceRowCount;
-(long long)sliceColumnCount;
-(void)evaluateSliceGrid;
-(BOOL)hasRegularSliceGrid;
-(long long)numberOfGradientLayers;
-(long long)numberOfAlphaChannels;
-(long long)indexOfDrawingLayerType:(long long)arg1 ;
@end

