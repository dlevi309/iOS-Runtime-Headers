/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSData;

@interface OISFUDataRepresentation : NSObject {

	BOOL mHasHash;
	unsigned mHash;
	BOOL mHasSha1Hash;
	NSData* mSha1Hash;

}
-(long long)compare:(id)arg1 ;
-(BOOL)isReadable;
-(long long)encodedLength;
-(long long)dataLength;
-(BOOL)isEncrypted;
-(id)inputStream;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(xmlDoc*)xmlDocument;
-(id)bufferedInputStream;
-(xmlTextReaderRef)xmlReaderWithReadCallback:(/*function pointer*/void*)arg1 ;
-(xmlTextReaderRef)xmlReaderForGzippedDataWithInputStream:(id*)arg1 ;
-(unsigned)uint32Hash;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1 ;
-(xmlTextReaderRef)xmlReader;
-(xmlTextReaderRef)xmlReaderForGzippedData;
-(CGDataProviderRef)cgDataProvider;
-(unsigned long long)readIntoData:(id)arg1 ;
-(id)sha1Hash;
@end

