/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString, NSData;

@interface PFZipLocalFileHeader : NSObject {

	unsigned short _versionNeededToExtract;
	unsigned short _generalPurposeBit;
	unsigned short _compressionMethod;
	unsigned short _lastModTime;
	unsigned short _lastModDate;
	unsigned _crc32;
	unsigned _compressedSize;
	unsigned _uncompressedSize;
	unsigned short _filenameLength;
	unsigned short _extraFieldLength;
	NSString* _filename;
	NSData* _extraFieldData;

}
-(id)init;
-(id)description;
-(void)dealloc;
@end

