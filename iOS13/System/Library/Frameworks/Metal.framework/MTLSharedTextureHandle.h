/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMachPort:(unsigned)arg1 ;
-(id<MTLDevice>)device;
-(NSString *)label;
-(IOSurfaceRef)ioSurface;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 label:(id)arg2 ;
-(unsigned)createMachPort;
@end

