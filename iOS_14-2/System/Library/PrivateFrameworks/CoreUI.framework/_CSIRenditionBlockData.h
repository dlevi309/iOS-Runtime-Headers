/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


@interface _CSIRenditionBlockData : NSObject {

	unsigned _dataPixelFormat;
	int _pixelFormat;
	char* _data;
	unsigned _nrows;
	unsigned long long _rowbytes;
	AQ _imageBytes;
	char _name[128];
	unsigned char _imageBlockReleaseCount;
	unsigned long long _sourceRowbytes;
	unsigned long long _allocationSize;
	unsigned _allocateMemory : 1;
	unsigned _mmappedData : 1;

}
-(void)dealloc;
@end

