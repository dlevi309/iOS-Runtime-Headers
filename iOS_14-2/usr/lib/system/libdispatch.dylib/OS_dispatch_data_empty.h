/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/system/libdispatch.dylib
*/

#import <libdispatch.dylib/libdispatch.dylib-Structs.h>
#import <libdispatch.dylib/OS_dispatch_data.h>

@interface OS_dispatch_data_empty : OS_dispatch_data
+(id)allocWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(void)_setTargetQueue:(id)arg1 ;
-(void)_suspend;
-(void)_activate;
-(unsigned long long)retainCount;
-(void)_setFinalizer:(/*function pointer*/void*)arg1 ;
-(void)_resume;
-(void)_setContext:(void*)arg1 ;
-(void*)_getContext;
@end

