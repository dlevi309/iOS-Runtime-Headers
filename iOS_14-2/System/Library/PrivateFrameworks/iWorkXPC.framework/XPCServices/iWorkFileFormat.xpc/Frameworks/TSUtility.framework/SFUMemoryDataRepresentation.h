/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/SFUDataRepresentation.h>

@class NSData;

@interface SFUMemoryDataRepresentation : SFUDataRepresentation {

	NSData* mData;

}
-(BOOL)isReadable;
-(long long)dataLength;
-(id)initWithData:(id)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)data;
-(id)inputStream;
-(id)initWithDataNoCopy:(id)arg1 ;
-(void)dealloc;
-(id)bufferedInputStream;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1 ;
-(unsigned long long)readIntoData:(id)arg1 ;
@end

