/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MailSupport-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface MSFileCompression : NSObject <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(BOOL)compressFile:(id)arg1 error:(id*)arg2 ;
+(BOOL)_compressFile:(const char*)arg1 error:(id*)arg2 ;
+(BOOL)_doCompressFile:(const char*)arg1 errorCode:(long long*)arg2 ;
+(id)_compressionLock;
+(CompressionQueueContext_sRef)_compressionQueueContext;
+(BOOL)compressDirectory:(id)arg1 shouldCancel:(/*^block*/id)arg2 error:(id*)arg3 ;
+(BOOL)_compressFileInPlace:(const char*)arg1 error:(id*)arg2 ;
@end

