/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@class NSInputStream;

@interface WFFileChunkInputStream : NSInputStream {

	unsigned long long _offset;
	unsigned long long _length;
	NSInputStream* _inputStream;

}

@property (nonatomic,readonly) NSInputStream * inputStream;              //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long length;                //@synthesize length=_length - In the implementation block
-(unsigned long long)length;
-(void)open;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(id)streamError;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)hasBytesAvailable;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_PK4*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(const CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(const CFStringRef)arg2 ;
-(unsigned long long)offset;
-(NSInputStream *)inputStream;
-(id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
@end

