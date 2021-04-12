/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


@class NSError;

@interface NSStream : NSObject

@property (assign) id<NSStreamDelegate> delegate; 
@property (readonly) unsigned long long streamStatus; 
@property (copy,readonly) NSError * streamError; 
+(void)getStreamsToHostWithName:(id)arg1 port:(long long)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4 ;
+(void)getStreamsToHost:(id)arg1 port:(long long)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4 ;
+(void)getBoundStreamsWithBufferSize:(unsigned long long)arg1 inputStream:(id*)arg2 outputStream:(id*)arg3 ;
-(id)init;
-(void)open;
-(void)close;
-(id<NSStreamDelegate>)delegate;
-(void)setDelegate:(id<NSStreamDelegate>)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(NSError *)streamError;
@end

