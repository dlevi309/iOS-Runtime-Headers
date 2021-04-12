/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/system/libdispatch.dylib
*/

#import <libdispatch.dylib/libdispatch.dylib-Structs.h>
#import <libdispatch.dylib/OS_dispatch_data.h>

@interface OS_dispatch_data_empty : OS_dispatch_data
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)retainCount;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(void)_setContext:(void*)arg1 ;
-(void*)_getContext;
-(void)_setFinalizer:(/*function pointer*/void*)arg1 ;
-(void)_setTargetQueue:(id)arg1 ;
-(void)_suspend;
-(void)_resume;
-(void)_activate;
@end

