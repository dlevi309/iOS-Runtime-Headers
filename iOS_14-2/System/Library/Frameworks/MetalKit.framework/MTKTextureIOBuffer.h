/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/

#import <MetalKit/MetalKit-Structs.h>
#import <libobjc.A.dylib/TXRBuffer.h>

@protocol MTLBuffer;
@class NSString;

@interface MTKTextureIOBuffer : NSObject <TXRBuffer> {

	id<MTLBuffer> _buffer;

}

@property (nonatomic,readonly) id<MTLBuffer> buffer;                //@synthesize buffer=_buffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTLBuffer>)buffer;
-(id)map;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLength:(unsigned long long)arg1 device:(id)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocNotification:(/*^block*/id)arg3 device:(id)arg4 error:(id*)arg5 ;
@end

