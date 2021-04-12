/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData, _CUIThemePixelRendition, _CSIRenditionBlockData, NSString;

@interface CSIHelper : NSObject {

	slice slice;
	NSData* csiData;
	csibitmap* bmp;
	int renditionLock;
	_CUIThemePixelRendition* rendition;
	_CSIRenditionBlockData* sharedBlockDataBGRX;
	_CSIRenditionBlockData* sharedBlockDataRGBX;
	_CSIRenditionBlockData* sharedBlockDataGray;
	_CSIRenditionBlockData* retainedBlockData;
	NSString* blockDataCacheKeyBGRX;
	NSString* blockDataCacheKeyRGBX;
	NSString* blockDataCacheKeyGray;
	unsigned long long sourceRowbytes;
	unsigned shouldCache : 1;
	unsigned usedForDataProvider : 1;
	unsigned _reserved : 30;

}
@end

