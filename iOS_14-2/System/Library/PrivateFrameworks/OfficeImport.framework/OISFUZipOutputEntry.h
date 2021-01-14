/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface OISFUZipOutputEntry : NSObject {

	NSString* name;
	unsigned long long utf8NameLength;
	BOOL isCompressed;
	BOOL isEncrypted;
	unsigned time;
	unsigned long long compressedSize;
	unsigned long long uncompressedSize;
	unsigned long long offset;
	unsigned long long compressedDataOffset;
	unsigned crc;
	BOOL isWrittenDirectlyToFile;
	BOOL is64Bit;

}
-(id)description;
-(void)dealloc;
-(long long)compareByOffset:(id)arg1 ;
@end

