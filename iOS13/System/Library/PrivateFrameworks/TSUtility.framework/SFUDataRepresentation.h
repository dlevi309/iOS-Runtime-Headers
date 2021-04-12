/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSData;

@interface SFUDataRepresentation : NSObject {

	BOOL mHasHash;
	unsigned mHash;
	BOOL mHasSha1Hash;
	NSData* mSha1Hash;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(BOOL)isEncrypted;
-(id)inputStream;
-(long long)encodedLength;
-(long long)dataLength;
-(BOOL)isReadable;
-(xmlDoc*)xmlDocument;
-(id)bufferedInputStream;
-(CGDataProviderRef)cgDataProvider;
-(unsigned long long)readIntoData:(id)arg1 ;
-(xmlTextReaderRef)xmlReaderForGzippedDataWithInputStream:(id*)arg1 ;
-(unsigned)uint32Hash;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1 ;
-(xmlTextReaderRef)xmlReader;
-(xmlTextReaderRef)xmlReaderForGzippedData;
-(id)sha1Hash;
@end

