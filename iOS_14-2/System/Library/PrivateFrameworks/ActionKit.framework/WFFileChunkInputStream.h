/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)streamStatus;
-(id)streamError;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(void)open;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(const CFStringRef)arg2 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)close;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_PK6*)arg3 ;
-(BOOL)hasBytesAvailable;
-(id)propertyForKey:(id)arg1 ;
-(unsigned long long)length;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)offset;
-(NSInputStream *)inputStream;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(const CFStringRef)arg2 ;
-(id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
@end

