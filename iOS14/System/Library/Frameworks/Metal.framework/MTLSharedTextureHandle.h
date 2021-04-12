/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MTLSharedTextureHandle : NSObject <NSSecureCoding> {

	MTLSharedTextureHandlePrivate* _priv;

}

@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
+(BOOL)supportsSecureCoding;
-(unsigned)createMachPort;
-(void)encodeWithCoder:(id)arg1 ;
-(id<MTLDevice>)device;
-(id)initWithMachPort:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IOSurfaceRef)ioSurface;
-(NSString *)label;
-(void)dealloc;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 label:(id)arg2 ;
@end

