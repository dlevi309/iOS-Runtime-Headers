/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/_MTLCommandEncoder.h>
#import <libobjc.A.dylib/MTLDebugCommandEncoder.h>

@class NSString;

@interface _MTLDebugCommandEncoder : _MTLCommandEncoder <MTLDebugCommandEncoder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)IOLogBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)kprintf:(id)arg1 ;
-(void)IOLog:(id)arg1 ;
@end

