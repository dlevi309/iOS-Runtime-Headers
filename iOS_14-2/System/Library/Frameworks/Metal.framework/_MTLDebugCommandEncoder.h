/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/_MTLCommandEncoder.h>
#import <libobjc.A.dylib/MTLDebugCommandEncoder.h>

@class NSString;

@interface _MTLDebugCommandEncoder : _MTLCommandEncoder <MTLDebugCommandEncoder>

@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)IOLog:(id)arg1 ;
-(void)IOLogBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)kprintf:(id)arg1 ;
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
@end

