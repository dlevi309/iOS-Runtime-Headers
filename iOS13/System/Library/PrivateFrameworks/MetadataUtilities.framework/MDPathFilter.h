/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetadataUtilities.framework/MetadataUtilities
*/


#import <MetadataUtilities/MetadataUtilities-Structs.h>
@interface MDPathFilter : NSObject {

	MDPlistContainerRef _plist;
	SCD_Struct_MD1* _commonValues;
	SCD_Struct_MD3 _rootArray;
	SCD_Struct_MD3 _prefixesDictionary;
	SCD_Struct_MD3 _extensionsDictionary;
	SCD_Struct_MD3 _hiddenExtensionsDictionary;
	SCD_Struct_MD4* _rootElement;
	unsigned short _mountDepth;
	unsigned long long _defaultRule;
	unsigned long long _inheritMask;
	BOOL _processExtensions;
	int _auxValueCount;
	unsigned long long* _auxValues;
	int _leadingDotType;
	int _leadingDotIndex;
	int _icloudDotType;
	int _icloudDotIndex;
	BOOL _isDataROSP;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)data;
-(SCD_Struct_MD5)filterFullPath:(const char*)arg1 ;
-(MDPlistContainerRef)plist;
-(id)initWithMDPlist:(MDPlistContainerRef)arg1 ;
-(SCD_Struct_MD5)filter:(const char*)arg1 allowBundleCheck:(BOOL)arg2 ;
-(SCD_Struct_MD5)iCloudPath:(const char*)arg1 updateFilter:(SCD_Struct_MD5)arg2 ;
-(BOOL)isDataROSP;
-(SCD_Struct_MD5)filterPartialPath:(const char*)arg1 ;
-(SCD_Struct_MD5)filterFullPathTestBundle:(const char*)arg1 ;
-(unsigned long long)trimBundlePath:(SCD_Struct_MD5)arg1 path:(const char*)arg2 buffer:(char*)arg3 length:(unsigned long long)arg4 ;
-(unsigned long long*)filterSubAuxValues:(SCD_Struct_MD5)arg1 count:(int*)arg2 ;
@end

