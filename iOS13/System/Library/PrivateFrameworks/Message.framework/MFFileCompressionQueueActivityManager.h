/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)_registerXPCActivity;
+(void)scheduleActivityIfNeeded;
+(void)_unregisterXPCActivity;
+(BOOL)compressFilesInQueue:(id)arg1 shouldDefer:(/*^block*/id)arg2 ;
+(void)unregisterXPCActivity;
@end

