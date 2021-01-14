/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RPIOSurfaceObject : NSObject <NSSecureCoding> {

	IOSurfaceRef _ioSurface;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IOSurfaceRef)ioSurface;
-(void)dealloc;
-(void)setIOSurface:(IOSurfaceRef)arg1 ;
@end

