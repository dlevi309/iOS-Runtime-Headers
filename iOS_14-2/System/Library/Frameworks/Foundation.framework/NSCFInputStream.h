/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@interface NSCFInputStream : NSInputStream
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long long)streamStatus;
-(id)streamError;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(oneway void)release;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(void)open;
-(id)initWithURL:(id)arg1 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(id)initWithFileAtPath:(id)arg1 ;
-(id)delegate;
-(BOOL)allowsWeakReference;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)close;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_NS58*)arg3 ;
-(id)retain;
-(BOOL)retainWeakReference;
-(BOOL)hasBytesAvailable;
-(id)propertyForKey:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

