/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/SFUDataRepresentation.h>

@class NSData;

@interface SFUMemoryDataRepresentation : SFUDataRepresentation {

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

