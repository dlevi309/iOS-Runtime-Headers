/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/system/libdispatch.dylib
*/

#import <libdispatch.dylib/OS_dispatch_object.h>
#import <libobjc.A.dylib/OS_dispatch_object.h>
#import <libobjc.A.dylib/OS_dispatch_source_nw_channel.h>
#import <libobjc.A.dylib/OS_dispatch_source_sock.h>
#import <libobjc.A.dylib/OS_dispatch_source_memorystatus.h>
#import <libobjc.A.dylib/OS_dispatch_source_vm.h>
#import <libobjc.A.dylib/OS_dispatch_source_vfs.h>
#import <libobjc.A.dylib/OS_dispatch_source_interval.h>
#import <libobjc.A.dylib/OS_dispatch_source_write.h>
#import <libobjc.A.dylib/OS_dispatch_source_vnode.h>
#import <libobjc.A.dylib/OS_dispatch_source_timer.h>
#import <libobjc.A.dylib/OS_dispatch_source_signal.h>
#import <libobjc.A.dylib/OS_dispatch_source_read.h>
#import <libobjc.A.dylib/OS_dispatch_source_proc.h>
#import <libobjc.A.dylib/OS_dispatch_source_memorypressure.h>
#import <libobjc.A.dylib/OS_dispatch_source_mach_recv.h>
#import <libobjc.A.dylib/OS_dispatch_source_mach_send.h>
#import <libobjc.A.dylib/OS_dispatch_source_data_replace.h>
#import <libobjc.A.dylib/OS_dispatch_source_data_or.h>
#import <libobjc.A.dylib/OS_dispatch_source_data_add.h>
#import <libobjc.A.dylib/OS_dispatch_source.h>

@protocol OS_dispatch_source <NSObject>
@end


@class NSString;

@interface OS_dispatch_source : OS_dispatch_object <OS_dispatch_object, OS_dispatch_source_nw_channel, OS_dispatch_source_sock, OS_dispatch_source_memorystatus, OS_dispatch_source_vm, OS_dispatch_source_vfs, OS_dispatch_source_interval, OS_dispatch_source_write, OS_dispatch_source_vnode, OS_dispatch_source_timer, OS_dispatch_source_signal, OS_dispatch_source_read, OS_dispatch_source_proc, OS_dispatch_source_memorypressure, OS_dispatch_source_mach_recv, OS_dispatch_source_mach_send, OS_dispatch_source_data_replace, OS_dispatch_source_data_or, OS_dispatch_source_data_add, OS_dispatch_source>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(oneway void)release;
-(void)_xref_dispose;
@end

