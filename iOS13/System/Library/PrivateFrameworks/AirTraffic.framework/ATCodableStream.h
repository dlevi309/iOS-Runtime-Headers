/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class MSVStreamReader, MSVStreamWriter, NSObject, NSInputStream, NSFileHandle;

@interface ATCodableStream : NSObject <NSSecureCoding> {

	MSVStreamReader* _reader;
	MSVStreamWriter* _writer;
	NSObject*<OS_dispatch_queue> _queue;
	NSInputStream* _inputStream;
	NSFileHandle* _fileHandleForReading;

}

@property (nonatomic,readonly) NSInputStream * inputStream;                      //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSFileHandle * fileHandleForReading;              //@synthesize fileHandleForReading=_fileHandleForReading - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSFileHandle *)fileHandleForReading;
-(NSInputStream *)inputStream;
-(id)initWithInputStream:(id)arg1 ;
@end

