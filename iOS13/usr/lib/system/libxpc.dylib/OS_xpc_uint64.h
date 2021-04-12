/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/system/libxpc.dylib
*/

#import <libxpc.dylib/OS_xpc_object.h>
#import <libobjc.A.dylib/OS_xpc_uint64.h>

@protocol OS_xpc_uint64 <OS_xpc_object>
@end


@class NSString;

@interface OS_xpc_uint64 : OS_xpc_object <OS_xpc_uint64>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(unsigned long long)retainCount;
-(id)retain;
-(oneway void)release;
-(BOOL)retainWeakReference;
-(BOOL)allowsWeakReference;
@end

