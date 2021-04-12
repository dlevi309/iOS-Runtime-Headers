/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSFileHandle *)fileHandleForReading;
-(void)encodeWithCoder:(id)arg1 ;
-(NSInputStream *)inputStream;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInputStream:(id)arg1 ;
-(void)dealloc;
@end

