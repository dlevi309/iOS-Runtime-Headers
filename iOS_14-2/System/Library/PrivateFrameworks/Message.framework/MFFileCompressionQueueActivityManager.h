/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface MFFileCompressionQueueActivityManager : NSObject <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(void)scheduleActivityIfNeeded;
+(void)_unregisterXPCActivity;
+(BOOL)compressFilesInQueue:(id)arg1 shouldDefer:(/*^block*/id)arg2 ;
+(void)unregisterXPCActivity;
+(void)_registerXPCActivity;
@end

