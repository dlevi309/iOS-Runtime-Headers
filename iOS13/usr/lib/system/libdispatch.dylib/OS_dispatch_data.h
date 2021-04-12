/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/system/libdispatch.dylib
*/

#import <libdispatch.dylib/libdispatch.dylib-Structs.h>
#import <Foundation/_NSDispatchData.h>
#import <libobjc.A.dylib/OS_dispatch_data.h>

@protocol OS_dispatch_data <OS_dispatch_object>
@end


@class NSString;

@interface OS_dispatch_data : _NSDispatchData <OS_dispatch_data>

@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) const void* bytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(NSString *)debugDescription;
-(void)_setContext:(void*)arg1 ;
-(void*)_getContext;
-(void)_setFinalizer:(/*function pointer*/void*)arg1 ;
-(void)_setTargetQueue:(id)arg1 ;
-(void)_suspend;
-(void)_resume;
-(void)_activate;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5 ;
-(BOOL)_bytesAreVM;
-(const void*)bytes;
-(BOOL)_isCompact;
@end

