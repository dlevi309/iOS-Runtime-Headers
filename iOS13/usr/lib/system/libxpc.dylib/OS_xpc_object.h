/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/system/libxpc.dylib
*/

#import <libdispatch.dylib/OS_object.h>
#import <libobjc.A.dylib/OS_xpc_object.h>

@protocol OS_xpc_object <NSObject>
@end


@class NSString;

@interface OS_xpc_object : OS_object <OS_xpc_object>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
@end

