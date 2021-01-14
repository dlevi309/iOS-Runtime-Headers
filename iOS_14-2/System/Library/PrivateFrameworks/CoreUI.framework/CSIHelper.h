/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData, _CUIThemePixelRendition, _CSIRenditionBlockData, NSString;

@interface CSIHelper : NSObject {

	slice slice;
	NSData* csiData;
	csibitmap* bmp;
	os_unfair_lock_s renditionLock;
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
-(void)dealloc;
@end

