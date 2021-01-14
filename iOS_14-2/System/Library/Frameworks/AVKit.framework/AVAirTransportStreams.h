/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVAirTransport.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSInputStream, NSOutputStream, NSString;

@interface AVAirTransportStreams : AVAirTransport <NSStreamDelegate> {

	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;

}

@property (nonatomic,readonly) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)open;
-(id)initWithInput:(id)arg1 output:(id)arg2 ;
-(id)_readDataNonBlockingUpToMaxLength:(unsigned long long)arg1 ;
-(BOOL)isReadyToSend;
-(id)_readAvailableData;
-(void)_inputStreamHasBytesAvailable;
-(void)_outputStreamDidOpen;
-(void)_outputStreamCanWrite;
-(void)_inputStreamDidClose;
-(NSOutputStream *)outputStream;
-(NSString *)description;
-(NSInputStream *)inputStream;
-(void)invalidate;
-(BOOL)canWrite;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(long long)_writeData:(id)arg1 ;
@end

