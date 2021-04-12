/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OISFUDataRepresentation.h>

@class NSData;

@interface OISFUMemoryDataRepresentation : OISFUDataRepresentation {

	NSData* mData;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)data;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)initWithDataNoCopy:(id)arg1 ;
-(id)inputStream;
-(long long)dataLength;
-(BOOL)isReadable;
-(id)bufferedInputStream;
-(unsigned long long)readIntoData:(id)arg1 ;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1 ;
@end

