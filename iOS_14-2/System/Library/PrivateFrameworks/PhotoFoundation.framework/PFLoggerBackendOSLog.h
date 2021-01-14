/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSMutableDictionary, NSString;

@interface PFLoggerBackendOSLog : PFLoggerBackendAdapter {

	NSMutableDictionary* _osLogs;
	NSString* _sender;
	os_unfair_lock_s _lock;

}
+(id)backendsFromUserDefaultsWithLogLevel:(int)arg1 ;
-(BOOL)allowsConcurrentAccess;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char*)arg7 ;
-(id)initWithSender:(id)arg1 ;
-(BOOL)formatsMessage;
-(BOOL)outputsToDebuggerConsole;
-(void)_logFromCodeLocation:(SCD_Struct_PF5*)arg1 subsystem:(id)arg2 type:(unsigned)arg3 ;
@end

