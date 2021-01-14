/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


@class NSError;

@interface NSStream : NSObject

@property (assign) id<NSStreamDelegate> delegate; 
@property (readonly) unsigned long long streamStatus; 
@property (copy,readonly) NSError * streamError; 
+(void)getStreamsToHostWithName:(id)arg1 port:(long long)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4 ;
+(void)getBoundStreamsWithBufferSize:(unsigned long long)arg1 inputStream:(id*)arg2 outputStream:(id*)arg3 ;
+(void)getStreamsToHost:(id)arg1 port:(long long)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4 ;
-(unsigned long long)streamStatus;
-(NSError *)streamError;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(id)init;
-(id<NSStreamDelegate>)delegate;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id<NSStreamDelegate>)arg1 ;
@end

